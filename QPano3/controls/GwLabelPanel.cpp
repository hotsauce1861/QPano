#include "GwLabelPanel.h"
#include <QPixmap>
#include <QImage>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QList>
#include <QUrl>
#include <QMimeData>
#include <QMessageBox>
#include <QPushButton>

GwLabelPanel::GwLabelPanel(QWidget *parent)
	: QLabel(parent)
{
	objInit();
}

GwLabelPanel::~GwLabelPanel()
{

}

void GwLabelPanel::objInit()
{
	this->setText("");
	mImageUnitList = new std::vector<ImageUnit *>();

	mHBoxMainLayout = new QHBoxLayout(this);
	mMotherMainLayout = new QHBoxLayout(this);
	mWidget = new QWidget(this);

	mScrollArea = new QScrollArea(this);
	mScrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
	mScrollArea->setWidgetResizable(true);

	this->setMinimumHeight(thisWidgetHeight);
	this->installEventFilter(this);
	this->setAcceptDrops(true);
	this->setScaledContents(true);
	this->setStyleSheet(
		"QScrollArea{"
		"font-size:20px;"
		"border:2px dashed gray;"
		"border-radius:5px;"
		"background:rgba(25,25,25,25);"
		"}");
	mHBoxMainLayout->setAlignment(Qt::AlignLeft);
	//here lose this code
	mHBoxMainLayout->setSizeConstraint(QHBoxLayout::SetMinAndMaxSize);


	this->mWidget->setLayout(mHBoxMainLayout);
	mScrollArea->setWidget(mWidget);

	mMotherMainLayout->addWidget(mScrollArea);
	this->setLayout(mMotherMainLayout);
}

std::vector<ImageUnit*>& GwLabelPanel::getImageListObj()
{
	return *mImageUnitList;
}


bool GwLabelPanel::eventFilter(QObject *watched, QEvent *event) {

	if (watched == this) {
		if (event->type() == QEvent::DragEnter) {

			// [[2]]: 当拖放时鼠标进入label时, label接受拖放的动作
			QDragEnterEvent *dee = dynamic_cast<QDragEnterEvent *>(event);

			dee->acceptProposedAction();

			return true;

		}
		else if (event->type() == QEvent::Drop) {
			// [[3]]: 当放操作发生后, 取得拖放的数据
			QDropEvent *de = dynamic_cast<QDropEvent *>(event);
			QList<QUrl> urls = de->mimeData()->urls();
			if (urls.isEmpty()) { 
				return true; 
			}
			else {
				for (int i=0;i<urls.size();i++){
					mImageList.push_back(urls[i].toLocalFile());
				}
			}
			this->update();
// 			QString path = urls.first().toLocalFile();
// 			// [[4]]: 在label上显示拖放的图片
// 			QImage image(path); // QImage对I/O优化过, QPixmap对显示优化
// 
// 			if (!image.isNull()) {
// 				image = image.scaled(childImageWidth, childImageHeight,
// 					Qt::KeepAspectRatio,
// 					Qt::SmoothTransformation);
// 
// 				QLabel *tmpLabel = getInsertImageLabel(image);
// 				this->mLabelList.push_back(tmpLabel);
// 				//this->mHBoxMainLayout->addWidget(tmpLabel);	
// 				this->mHBoxMainLayout->addWidget(tmpLabel);
// 			}
			return true;
		}
	}
	return QWidget::eventFilter(watched, event);
}
void GwLabelPanel::setInputImagesList(QStringList imgs)
{
	mImageList = imgs;
}

void GwLabelPanel::update()
{	
	int count = mImageUnitList->size();
	//while (mImageList.size())
	for(int i = 0;i<mImageList.size();i++)
	{
		ImageUnit *tmpUnit = new ImageUnit;
		GwLabel *tmpLabel = new GwLabel(this);
		GwLabelBtn *tmpLabelBtn = new GwLabelBtn(this);
		QImage tmpImg(mImageList[i]);
		//tmpLabel = getInsertImageLabel(tmpImg);
		tmpLabelBtn = getInsertImageGwLabelBtn(tmpImg);
		tmpLabel = getInsertImageGwLabel(tmpImg);

		tmpUnit->setGwLabel(tmpLabel);
		tmpUnit->setGwLabelBtn(tmpLabelBtn);
		tmpUnit->setImgPath(mImageList[i]);
		tmpUnit->setImgIndex(count + i);

		this->mLabelList.push_back(tmpLabel);
		this->mImageUnitList->push_back(tmpUnit);
		this->mHBoxMainLayout->addWidget(tmpLabelBtn);

		connect(tmpLabelBtn, SIGNAL(clicked(bool)), this, SIGNAL(childLabelClicked(bool)));

		//connect(tmpLabelBtn, SIGNAL(clicked(bool)), this, SIGNAL(childLabelClicked(bool)));
	}
	mImageList.clear();
}

GwLabelBtn* GwLabelPanel::getInsertImageGwLabelBtn(QImage image)
{
	GwLabelBtn *tmpLabel = new GwLabelBtn(this);
	tmpLabel->setFixedSize(childLabelWidth, childLabelHeight);
	tmpLabel->setPixmap(QPixmap::fromImage(image)
		.scaledToHeight(childImageWidth)
		.scaledToWidth(childImageHeight)
	);
	return tmpLabel;
}

GwLabel* GwLabelPanel::getInsertImageGwLabel(QImage image)
{
	GwLabel *tmpLabel = new GwLabel(this);
	tmpLabel->setFixedSize(childLabelWidth, childLabelHeight);
	tmpLabel->setPixmap(QPixmap::fromImage(image)
		.scaledToHeight(childImageWidth)
		.scaledToWidth(childImageHeight)
	);
	return tmpLabel;
}

QLabel* GwLabelPanel::getInsertImageLabel(QImage image)
{
	QLabel *tmpLabel = new QLabel(this);
	tmpLabel->setFixedSize(childLabelWidth ,childLabelHeight);
	tmpLabel->setPixmap(QPixmap::fromImage(image)
		.scaledToHeight(childImageWidth)
		.scaledToWidth(childImageHeight)
	);
	return tmpLabel;
}

// void GwLabelPanel::childLabelClicked()
// {
// 	QMessageBox::information(NULL, "error", "Stitcher result is error");
// }
