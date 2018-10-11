#ifndef FISHSTITCH_H
#define FISHSTITCH_H
#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
class fishstitch
{
public:
	fishstitch();
	~fishstitch();
	fishstitch &	setNeedStitchImg(cv::Mat img);
	fishstitch &	imageStisch();
	cv::Mat			getDstImg();
private:
	std::vector<cv::Mat> mVectorImgs;
	cv::Mat			mDstImg;

};

#endif

