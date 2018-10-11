#include <QFileDialog>
#include <opencv2/opencv.hpp>
#include "QPano3.h"
#include "fisheye.h"

QPano3::QPano3(QWidget *parent)
	: QMainWindow(parent){
	ui.setupUi(this);
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
void QPano3::showInputImage(QLabel & qlabel, QString ImgPath)
{
	QImage* img = new QImage;
	img->load(ImgPath);
	qlabel.setPixmap(QPixmap::fromImage(*img));
}

void QPano3::showInputImage(QLabel & qlabel, QImage ImgData)
{
	qlabel.setPixmap(QPixmap::fromImage(ImgData));
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
	FishEye mFisheys;
	QImage Img;
	cv::Mat rgb,dstImg;
	switch (index)
	{
	case In01:

		dstImg = mFisheys.SetInputFile(mInputImgPath01.toStdString())
			.SetOutputFormat(800, 400).ImgExpand2()
			.getDstImgMatData();
		cv::cvtColor(dstImg, rgb, CV_BGR2RGB);
		Img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols * rgb.channels(), QImage::Format_RGB888);
		showInputImage(*ui.labelExImg01, Img);
		break;

	case In02:
		dstImg = mFisheys.SetInputFile(mInputImgPath02.toStdString())
			.SetOutputFormat(800, 400).ImgExpand2()
			.getDstImgMatData();
		
		cv::cvtColor(dstImg, rgb, CV_BGR2RGB);
		Img = QImage((const uchar*)(rgb.data), rgb.cols, rgb.rows, rgb.cols * rgb.channels(), QImage::Format_RGB888);
		showInputImage(*ui.labelExImg02, Img);
		break;
	default:
		break;
	}
}


