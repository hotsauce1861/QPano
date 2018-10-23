#include "GwLabel.h"
#include <QMessageBox>

GwLabel::GwLabel(QWidget *parent)
	: QLabel(parent)
{
	eState = IDLE;
	state = 0;
	mEdgeWidth = 10;
	mMouseLeftPressed = false;
	mCircleRadius = DEFAULE_RADIUS;

	if (this->width() > this->height()) {
		mCircleCoord = new QPoint(this->height() / 2, this->height() / 2);
	}
	else {
		mCircleCoord = new QPoint(this->width() / 2, this->width() / 2);
	}
//	mHeightRatio = (float)(this->height() / this->pixmap()->height());
//	mWidthRatio = (float)(this->width() / this->pixmap()->width());
}

GwLabel::GwLabel()
{
	eState = IDLE;
	state = 0;
	mEdgeWidth = 10;
	mMouseLeftPressed = false;
	mCircleRadius = DEFAULE_RADIUS;

	if (this->width() > this->height()) {
		mCircleCoord = new QPoint(this->height() / 2, this->height() / 2);
	}
	else {
		mCircleCoord = new QPoint(this->width() / 2, this->width() / 2);
	}
	//	mHeightRatio = (float)(this->height() / this->pixmap()->height());
	//	mWidthRatio = (float)(this->width() / this->pixmap()->width());
}

GwLabel::~GwLabel()
{

}

bool GwLabel::isInCircle(int x, int y)
{
	int deltaX = x - this->mCircleCoord->x();
	int deltaY = y - this->mCircleCoord->y();
	if ((deltaX*deltaX + deltaY * deltaY) < ((mCircleRadius - mEdgeWidth) * (mCircleRadius - mEdgeWidth))) {
		return true;
	}
	return false;
}

bool GwLabel::isOnCircleEdge(int x, int y)
{
	int deltaX = x - this->mCircleCoord->x();
	int deltaY = y - this->mCircleCoord->y();
	int Rm2 = deltaX * deltaX + deltaY * deltaY;
	if (Rm2 >= ((mCircleRadius - mEdgeWidth) * (mCircleRadius - mEdgeWidth))
		&& Rm2 <= ((mCircleRadius + mEdgeWidth) * (mCircleRadius + mEdgeWidth))) {
		return true;
	}
	return false;
}

bool GwLabel::isDetlaNegative(QPoint ori, QPoint dst)
{	
	int disOri = (ori.x() - mCircleCoord->x())*(ori.x() - mCircleCoord->x())
				+ (ori.y() - mCircleCoord->y())*(ori.y() - mCircleCoord->y());
	int disDst = (dst.x() - mCircleCoord->x())*(dst.x() - mCircleCoord->x())
		+ (dst.y() - mCircleCoord->y())*(dst.y() - mCircleCoord->y());

	if (disOri > disDst){
		return true;
	}
	return false;
}

void GwLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);

	int R2 = mCircleRadius * 2;
	mPaint = new QPainter(this);
	mPaint->setPen(QPen(Qt::white, 1, Qt::DotLine));

	mPaint->drawEllipse(mCircleCoord->x() - mCircleRadius, mCircleCoord->y() - mCircleRadius,
						R2, R2);
	//this->update();
}

void GwLabel::showEvent(QShowEvent * event)
{
	if (this->width() > this->height()) {
		mCircleCoord = new QPoint(this->height() / 2, this->height() / 2);
	}
	else {
		mCircleCoord = new QPoint(this->width() / 2, this->width() / 2);
	}
}


void GwLabel::mouseMoveEvent(QMouseEvent* event)
{
	QPoint mousepos = event->pos();
	QPoint detalPos = mousepos - mOldMousePos;
		
	if (mMouseLeftPressed) {

		switch (eState)
		{
		default:
		case GwLabel::IDLE:
			this->setCursor(Qt::ArrowCursor);
			break;
		case GwLabel::MOVE:
			this->setCursor(Qt::SizeAllCursor);
			*this->mCircleCoord += detalPos;
			this->repaint();
			break;
		case GwLabel::ZOOM:
			this->setCursor(Qt::SizeFDiagCursor);
			int detal = sqrt(detalPos.x()*detalPos.x() + detalPos.y()*detalPos.y());
			if (isDetlaNegative(mOldMousePos, mousepos)) {
				detal *= -1;
			}
			this->mCircleRadius += detal;
			this->repaint();
			break;
		}
	}
	else {
		if (this->isInCircle(mousepos.x(), mousepos.y())) {
			this->setCursor(Qt::SizeAllCursor);
		}
		else if (this->isOnCircleEdge(mousepos.x(), mousepos.y())) {
			this->setCursor(Qt::SizeFDiagCursor);
		}
		else {
			this->setCursor(Qt::ArrowCursor);
		}
	}		
	mOldMousePos = mousepos;	//保存上一个鼠标位置
}

void GwLabel::mousePressEvent(QMouseEvent *event)
{
	QPoint mousepos = event->pos();
	this->mMouseLeftPressed = true;
	if (this->isInCircle(mousepos.x(), mousepos.y())) {
		this->setCursor(Qt::SizeAllCursor);
		eState = MOVE;
		state = 1;
	}
	else if (this->isOnCircleEdge(mousepos.x(), mousepos.y())) {
		this->setCursor(Qt::SizeFDiagCursor);
		eState = ZOOM; 
	}
	else {
		this->setCursor(Qt::ArrowCursor);
		eState = IDLE;
	}
}

void GwLabel::mouseReleaseEvent(QMouseEvent *event)
{
 	this->mMouseLeftPressed = false;
	emit clicked(true);
}

void GwLabel::resizeEvent(QResizeEvent * event)
{
	QLabel::resizeEvent(event);	
}


