#ifndef _FISHEYE_H
#define _FISHEYE_H

#include <iostream>
#include <opencv2/opencv.hpp>

#define PI	3.141592654f
//#define MFOV	(PI*22/18)
#define MFOV	3.83
class FishEye {
public:
	FishEye();	
	
	bool			IsImgAvailable();
	FishEye&		SetInputFile(std::string img);
	FishEye&		SetOutputFormat(int width, int height);
	FishEye&		FishRemap();
	FishEye&		ImgExpand2();
	FishEye&		ImgExpand();
	FishEye&		ProcessWrongPixel();
	cv::Mat			getDstImgMatData();
	void			SaveFile();
	void			CutImg();
	

private:
	cv::Point2f		Fish2Shpere(int x, int y);
	cv::Point2f		Shpere2Fish(int x, int y);
	bool			mImgAvailable;
	std::string		mInputFile;
	cv::Mat			mImg;
	cv::Mat			mDesImg;
	cv::Mat			mFishMapImg;
/*	Vec2i			mCoordDst;*/
};


#endif

