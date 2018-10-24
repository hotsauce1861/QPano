#include "ImageUnit.h"
ImageUnit::ImageUnit()
{
	mLabel = new QLabel;
	mGwLabel = new GwLabel();
}


ImageUnit::~ImageUnit()
{
	delete mLabel;
	delete mGwLabel;
}

QLabel & ImageUnit::getLabel()
{
	return *mLabel;
}

ImageUnit & ImageUnit::setLabel(QLabel* vLabel)
{
	mLabel = vLabel;
	return *this;
}

QString & ImageUnit::getImgPath()
{
	return mImgPath;
}

ImageUnit & ImageUnit::setImgPath(QString & vPath)
{
	this->mImgPath = vPath;
	return *this;
}

int ImageUnit::getImgIndex()
{
	return mImgIndex;
}

ImageUnit & ImageUnit::setImgIndex(int vIndex)
{	
	this->mImgIndex = vIndex;
	return *this;
}
#ifdef USE_GWLABEL
GwLabel& ImageUnit::getGwLabel()
{
	return *mGwLabel;
}

ImageUnit & ImageUnit::setGwLabel(GwLabel* vGwLabel)
{	
	this->mGwLabel = vGwLabel;
	return *this;
}
GwLabelBtn ImageUnit::getGwLabelBtn()
{
	return mGwLabelBtn;
}
ImageUnit & ImageUnit::setGwLabelBtn(GwLabelBtn * vGwLabelBtn)
{
	mGwLabelBtn = vGwLabelBtn;
	return *this;
}
ImageUnit & ImageUnit::setQImage(QImage vQImage)
{
	this->mImage = vQImage;
	return *this;
}
QImage & ImageUnit::getQImage()
{
	return mImage;
}
#endif