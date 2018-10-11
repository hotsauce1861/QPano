#include "fisheye.h"


using namespace cv;

FishEye::FishEye()
{

}

bool FishEye::IsImgAvailable()
{
	return mImgAvailable;
}

FishEye& FishEye::SetInputFile(std::string img)
{
	mImg = imread(img.c_str(), IMREAD_COLOR);
	if (mImg.empty()) {
		printf("mImg is empty");
		return *this;
	}
	return *this;
}

FishEye & FishEye::SetOutputFormat(int width, int height)
{
	//Ó³Éä±í±£´æUV×ø±ê
	mFishMapImg = Mat::zeros(height, width, CV_32FC2);
	//Êä³öÍ¼Ïñ»º´æ
	mDesImg = Mat::zeros(height, width, CV_8UC3);
	return *this;
}

FishEye & FishEye::FishRemap()
{
	//TODO
	return *this;
}

FishEye& FishEye::ImgExpand2()
{
	if (mImg.empty()) {
		return *this;
	}
	printf("Current x is (%d ,%d)\n", mImg.cols, mImg.rows);

	Point2i circleCoord;

	circleCoord.x = mImg.cols / 2 + 2;
	circleCoord.y = mImg.rows / 2 + 5;

	int R = mImg.cols / 2;

	for (int i = 0; i < mDesImg.cols; i++) {
		for (int j = 0; j < mDesImg.rows; j++) {

			Point2f  pointDst = this->Shpere2Fish(i, j);

			int cols = (int)((pointDst.x + 1) * mImg.cols / 2);
			int rows = (int)((pointDst.y + 1) * mImg.rows / 2);

			printf("Current %d %d is (%d, %d) ", i, j, cols, rows);
			if (rows < mImg.rows && cols < mImg.cols
				&& rows >= 0 && cols >= 0) {
				//mDesImg.ptr<Vec3b>(rows)[cols] = mImg.ptr<Vec3b>(j)[i];
				Vec3b color_value = mImg.at<Vec3b>(rows, cols);
				mDesImg.at<Vec3b>(j, i) = color_value;
				std::cout << color_value << std::endl;
			}
		}
	}
	return *this;
}


FishEye& FishEye::ImgExpand()
{
	if (mImg.empty()) {
		return *this;
	}
	printf("Current x is (%d ,%d)\n", mImg.cols, mImg.rows);

	Point2i circleCoord;

	circleCoord.x = mImg.cols / 2 + 2;
	circleCoord.y = mImg.rows / 2 + 5;

	int R = mImg.cols / 2;

	for (int i = 0; i < mImg.cols; i++) {
		for (int j = 0; j < mImg.rows; j++) {
			int tx = i - circleCoord.x;
			int ty = j - circleCoord.y;
			if (R*R<= tx*tx + ty*ty ){
				continue;
			}
			Point2f  pointDst = this->Fish2Shpere(i, j);
			
			int rows = (int)((pointDst.y + 1 ) * mDesImg.rows / 2);
			int cols = (int)((pointDst.x + 1 ) * mDesImg.cols / 2);
			printf("Current %d %d is (%d, %d) ", i, j, cols, rows);
			if (rows < mDesImg.rows && cols < mDesImg.cols 
				&& rows >= 0 && cols >= 0) {
				//mDesImg.ptr<Vec3b>(rows)[cols] = mImg.ptr<Vec3b>(j)[i];
				Vec3b color_value = mImg.at<Vec3b>(j, i);
				mDesImg.at<Vec3b>(rows, cols) = color_value;				
				std::cout << color_value << std::endl;
			}
		}
	}

	return *this;
}

FishEye & FishEye::ProcessWrongPixel()
{
	//TODO 
	return *this;
}

cv::Mat FishEye::getDstImgMatData()
{
	return mDesImg;
}

cv::Point2f FishEye::Fish2Shpere(int x, int y)
{

	Point2f normal_coord;
	
	normal_coord.x = (float)((float)x * 2 / mImg.cols - 1 );
	normal_coord.y = (float)((float)y * 2 / mImg.rows - 1 );

	float FOV = MFOV;
	float theta, phi;
	phi = sqrt(normal_coord.x*normal_coord.x+ normal_coord.y*normal_coord.y) * FOV / 2;
	theta = atan2(normal_coord.y, normal_coord.x);
	std::cout << "theta is " << theta << std::endl;
	//theta = atan2(y, x);
	Point3f coord;
	coord.x = sin(phi) * cos(theta);
	coord.y = sin(phi) * sin(theta);
	coord.z = cos(phi);
	float longitude, latitude;
	longitude = atan2(coord.y, coord.x);
	latitude = atan2(coord.z, sqrt(coord.x*coord.x + coord.y*coord.y));

	Point2f coordNormal;
	coordNormal.x = longitude / PI;
	coordNormal.y = 2 * latitude / PI;
	return coordNormal;
}

cv::Point2f FishEye::Shpere2Fish(int x, int y)
{
	//¹éÒ»»¯
	Point2f normalCoord;
	normalCoord.x = (float)(x * 2.0f / mFishMapImg.cols - 1);
	normalCoord.y = (float)(y * 2.0f / mFishMapImg.rows - 1);

	float longitude = (float)(normalCoord.x * PI);
	float latitude = (float)(normalCoord.y * PI/2);

	Point3f coordP;
	coordP.x = cos(latitude)*cos(longitude);
	coordP.y = cos(latitude)*sin(longitude);
	coordP.z = sin(latitude);
	float r = 2 * atan2(sqrt(coordP.x*coordP.x + coordP.z*coordP.z), coordP.y) / MFOV;
	float theta = atan2(coordP.z, coordP.x);

	Point2f fishCoord;
	fishCoord.x = r * cos(theta);
	fishCoord.y = r * sin(theta);

	return fishCoord;
}

void FishEye::SaveFile()
{
	cv::imshow("test", mDesImg);
	imwrite("result1.jpg",mDesImg);
}

void FishEye::CutImg()
{
	if (mImg.empty())
	{
		return;
	}
	Mat img1 = mImg(Rect(0, 0, mImg.cols / 2, mImg.rows));
	Mat img2 = mImg(Rect(mImg.cols / 2, 0, mImg.cols / 2, mImg.rows));
	imwrite("fisheye-1.JPG", img1);
	imwrite("fisheye-2.JPG", img2);
}





