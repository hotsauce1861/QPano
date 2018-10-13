#include "GwLabelPanel.h"
#include <QPixmap>
#include <QImage>

GwLabelPanel::GwLabelPanel(QWidget *parent)
	: QLabel(parent)
{
	mHBoxMainLayout = new QHBoxLayout(parent);
	this->setLayout(mHBoxMainLayout);
	
}

GwLabelPanel::~GwLabelPanel()
{

}

void GwLabelPanel::setInputImagesList(QStringList imgs)
{
	this->mImageList = imgs;
}

void GwLabelPanel::update()
{
	
	for (int i = 0;i<mImageList.size();i++){
		QLabel *tmpLabel = new QLabel;
		QImage *tmpImg = new QImage;
		tmpImg->load(mImageList[i]);
		tmpLabel->setFixedSize(150, 150);
		tmpLabel->setPixmap(QPixmap::fromImage(*tmpImg)
			.scaledToHeight(tmpLabel->height())
			.scaledToWidth(tmpLabel->width()) );
		this->mLabelList.push_back(tmpLabel);

		this->mHBoxMainLayout->addWidget(tmpLabel);
		
	}
}
