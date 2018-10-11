#include "fishstitch.h"
#include <opencv2/stitching.hpp>
#include <QMessageBox>

fishstitch::fishstitch()
{
}


fishstitch::~fishstitch()
{
}

fishstitch & fishstitch::setNeedStitchImg(cv::Mat img)
{
	this->mVectorImgs.push_back(img);
	return *this;
}

fishstitch & fishstitch::imageStisch()
{
	cv::Stitcher::Status status;
	cv::Stitcher stitcher = cv::Stitcher::createDefault(false);

	status = stitcher.stitch(mVectorImgs, mDstImg);
	if (status != cv::Stitcher::OK) {
		std::cout << "Can't stitch images, error code = " << int(status) << std::endl;
		QMessageBox::information(NULL, "error", "Stitcher result is error");
	}
	return *this;
}

cv::Mat fishstitch::getDstImg()
{
	return mDstImg;
}
