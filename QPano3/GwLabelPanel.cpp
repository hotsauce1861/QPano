#include "GwLabelPanel.h"
#include <QPixmap>
#include <QImage>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QList>
#include <QUrl>
#include <QMimeData>

GwLabelPanel::GwLabelPanel(QWidget *parent)
	: QLabel(parent)
{
	mHBoxMainLayout = new QHBoxLayout(parent);
	//this->installEventFilter(this);
	this->installEventFilter(this);
	this->setAcceptDrops(true);	
	this->setStyleSheet(
		"QLabel{"
		"font-size:20px;"
		"border:2px dashed gray;"
		"border-radius:10px;"
		"background:rgba(25,25,25,25);"
		"}");

	mHBoxMainLayout->setAlignment(Qt::AlignLeft);		
	this->setLayout(mHBoxMainLayout);
	
}

GwLabelPanel::~GwLabelPanel()
{

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
			QString path = urls.first().toLocalFile();
			// [[4]]: 在label上显示拖放的图片
			QImage image(path); // QImage对I/O优化过, QPixmap对显示优化

			if (!image.isNull()) {
				image = image.scaled(childLabelHeight, childLabelWidth,
					Qt::KeepAspectRatio,
					Qt::SmoothTransformation);

				QLabel *tmpLabel = new QLabel(this);
				tmpLabel->setPixmap(QPixmap::fromImage(image));
				this->mLabelList.push_back(tmpLabel);
				this->mHBoxMainLayout->addWidget(tmpLabel);
			}
			return true;
		}
	}
	return QWidget::eventFilter(watched, event);
}
void GwLabelPanel::setInputImagesList(QStringList imgs)
{
	this->mImageList = imgs;
}

void GwLabelPanel::update()
{	
	for (int i = 0;i<mImageList.size();i++){

		QLabel *tmpLabel = new QLabel(mScrollArea);
		QImage *tmpImg = new QImage;
		tmpImg->load(mImageList[i]);
		tmpLabel->setFixedSize(childLabelWidth, childLabelHeight);
		tmpLabel->setPixmap(QPixmap::fromImage(*tmpImg)
			.scaledToHeight(tmpLabel->height())
			.scaledToWidth(tmpLabel->width()) );
		tmpLabel->setAlignment(Qt::AlignLeft);
		this->mLabelList.push_back(tmpLabel);
		
		
		this->mHBoxMainLayout->addWidget(tmpLabel);
		
	}
}
