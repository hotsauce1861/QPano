#include <QFileDialog>
#include <opencv2/opencv.hpp>
#include <QMessageBox>
#include "QPano3.h"
#include "fisheye.h"
#include "fishstitch.h"
using namespace cv;
QPano3::QPano3(QWidget *parent)
	: QMainWindow(parent){
	ui.setupUi(this);
	ui.labelImg01->setMouseTracking(true);
	ui.labelImg02->setMouseTracking(true);
}

void QPano3::setImagePath01() {
	processImagePath(In01);
}

void QPano3::setImagePath02() {
	processImagePath(In02);
}
void QPano3::processImage01()
{
	processImageData(In01);
}
void QPano3::processImage02()
{
	processImageData(In02);
}
void QPano3::stitchImg()
{
	cv::Mat rgb;
	fishstitch mfishstitch;
// 	mInputMat01 = imread("srcm1.jpg", IMREAD_COLOR);
// 	mInputMat02 = imread("srcm2.jpg", IMREAD_COLOR);
	cv::Mat mDst = mfishstitch.setNeedStitchImg(mInputMat01)
					.setNeedStitchImg(mInputMat02)
					.imageStisch()
					.getDstImg();
	//showInputImage(*ui. ,mDst);
	if (mDst.empty()){
		std::cout << "mDst image is empty" << std::endl;
		QMessageBox::information(NULL, "error", "stitch image is empty");
		return;
	}
	imwrite("PANO.JPG", mDst);
	cv::cvtColor(mDst, rgb, CV_BGR2RGB);
	QImage Img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols * rgb.channels(), QImage::Format_RGB888);
	showInputImage(*ui.labelStitchImg, Img);

}
void QPano3::showInputImage(QLabel & qlabel, QString ImgPath)
{
	QImage* img = new QImage;
	img->load(ImgPath);
	//qlabel.setPixmap(QPixmap::fromImage(*img));
	qlabel.setPixmap(QPixmap::fromImage(*img).scaled(qlabel.width(), qlabel.height() ));
}

void QPano3::showInputImage(QLabel & qlabel, QImage ImgData)
{	
	qlabel.setPixmap(QPixmap::fromImage(ImgData).scaled(qlabel.width(), qlabel.height() ));
	
}	
void QPano3::processImagePath(InputImage index){
	
	QFileDialog mQFileDialog;
	switch (index)
	{
	case In01:
		mInputImgPath01 = mQFileDialog.getOpenFileName();
		ui.lineEditImagePath01->setText(mInputImgPath01);
		showInputImage(*ui.labelImg01, mInputImgPath01);

		break;

	case In02:
		mInputImgPath02 = mQFileDialog.getOpenFileName();
		ui.lineEditImagePath02->setText(mInputImgPath02);
		showInputImage(*ui.labelImg02, mInputImgPath02);
		break;
	default:
		break;
	}
}

void QPano3::processImageData(InputImage index)
{
	QImage Img;
	cv::Mat rgb,dstImg;
	switch (index)
	{
	case In01:

		mInputMat01 = dstImg = mFisheys.SetInputFile(mInputImgPath01.toStdString())
			.SetOutputFormat(800, 400).ImgExpand2()
			.getDstImgMatData();
		cv::cvtColor(dstImg, rgb, CV_BGR2RGB);
		Img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols * rgb.channels(), QImage::Format_RGB888);
		showInputImage(*ui.labelExImg01, Img);
		imwrite("src1.jpg", mInputMat01);
		break;

	case In02:
		mInputMat02 = dstImg = mFisheys.SetInputFile(mInputImgPath02.toStdString())
			.SetOutputFormat(800, 400).ImgExpand2()
			.getDstImgMatData();
		
		cv::cvtColor(dstImg, rgb, CV_BGR2RGB);
		Img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols * rgb.channels(), QImage::Format_RGB888);
		showInputImage(*ui.labelExImg02, Img);
		imwrite("src2.jpg", mInputMat02);
		break;
	default:
		break;
	}
}


