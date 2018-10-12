#include "GwLabel.h"

GwLabel::GwLabel(QWidget *parent)
	: QLabel(parent)
{
	state = 0;
	mEdgeWidth = 100;
	mMouseLeftPressed = false;
	mCircleRadius = DEFAULE_RADIUS;
	mCircleCoord = new QPoint(this->width() / 2, this->height() / 2);
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
	if ((deltaX*deltaX + deltaY * deltaY) < (this->mCircleRadius*this->mCircleRadius - mEdgeWidth)) {
		return true;
	}
	return false;
}

bool GwLabel::isOnCircleEdge(int x, int y)
{
	int deltaX = x - this->mCircleCoord->x();
	int deltaY = y - this->mCircleCoord->y();
	if ((deltaX*deltaX + deltaY * deltaY) >= (mCircleRadius * mCircleRadius - mEdgeWidth)
		&& (deltaX*deltaX + deltaY * deltaY) <= (mCircleRadius * mCircleRadius + mEdgeWidth)) {
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
	int R2 = mCircleRadius * 2;
	QLabel::paintEvent(event);

	mPaint = new QPainter(this);
	mPaint->setPen(QPen(Qt::white, 1, Qt::DotLine));

	mPaint->drawEllipse(mCircleCoord->x() - mCircleRadius, mCircleCoord->y() - mCircleRadius,
						R2, R2);
	//this->update();
}

void GwLabel::showEvent(QShowEvent * event)
{
	mCircleCoord = new QPoint(this->width() / 2, this->height() / 2);
}


void GwLabel::mouseMoveEvent(QMouseEvent* e )
{

	QPoint mousepos = e->pos();
	QPoint detalPos = mousepos - mOldMousePos;
		
	if (mMouseLeftPressed) {
		if (state == 1) {
	 			this->setCursor(Qt::SizeAllCursor);
	 			*this->mCircleCoord += detalPos;
	 			this->repaint();
		}
		else if(state == 2){
			this->setCursor(Qt::SizeFDiagCursor);
			int detal = sqrt(detalPos.x()*detalPos.x() + detalPos.y()*detalPos.y());
			if (isDetlaNegative(mOldMousePos, mousepos)) {
				detal *= -1;
			}
			this->mCircleRadius += detal;
			this->repaint();
		}
		else {
			this->setCursor(Qt::ArrowCursor);
		}
// 		if (this->isInCircle(mousepos.x(), mousepos.y())) {
// 			this->setCursor(Qt::SizeAllCursor);
// 			*this->mCircleCoord += detalPos;
// 			this->repaint();
// 		}
// 		else if (this->isOnCircleEdge(mousepos.x(), mousepos.y())) {
// 			this->setCursor(Qt::SizeFDiagCursor);
//  			int detal = sqrt(detalPos.x()*detalPos.x() + detalPos.y()*detalPos.y());
// 			if (isDetlaNegative(mOldMousePos,mousepos)) {
// 				detal *= -1;
// 			}
// 			this->mCircleRadius += detal;
// 			this->repaint();
// 		}
// 		else {
// 			this->setCursor(Qt::ArrowCursor);
// 		}
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

void GwLabel::mousePressEvent(QMouseEvent *e)
{
	QPoint mousepos = e->pos();
	this->mMouseLeftPressed = true;
	if (this->isInCircle(mousepos.x(), mousepos.y())) {
		this->setCursor(Qt::SizeAllCursor);
		state = 1;
	}
	else if (this->isOnCircleEdge(mousepos.x(), mousepos.y())) {
		this->setCursor(Qt::SizeFDiagCursor);
		state = 2;
	}
	else {
		this->setCursor(Qt::ArrowCursor);
		state = 0;
	}
}

void GwLabel::mouseReleaseEvent(QMouseEvent *e)
{
	state = 0;
// 	QPoint mousepos = e->pos();
 	this->mMouseLeftPressed = false;
// 	if (this->isInCircle(mousepos.x(), mousepos.y())) {
// 		this->setCursor(Qt::OpenHandCursor);
// 
// 	}
}

