#include "GwLabel.h"

GwLabel::GwLabel(QWidget *parent)
	: QLabel(parent)
{
	mCircleRadius = DEFAULE_RADIUS;
	mCircleCoord = new QPoint(this->width() / 2, this->height() / 2);
}

GwLabel::~GwLabel()
{
}

bool GwLabel::isInCircle(int x, int y)
{
	int deltaX = x - this->width() /2;
	int deltaY = y - this->height() / 2;
	if ((deltaX*deltaX + deltaY * deltaY) < 10000 /*mCircleRadius * mCircleRadius*/) {
		return true;
	}
	return false;
}

bool GwLabel::isOnCircleEdge(int x, int y)
{
	int deltaX = x - this->mCircleCoord->x();
	int deltaY = x - this->mCircleCoord->x();
	if ((deltaX*deltaX + deltaY * deltaY) == mCircleRadius * mCircleRadius) {
		return true;
	}
	return false;
}

void GwLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);

	mPaint = new QPainter(this);
	mPaint->setPen(QPen(Qt::white, 1, Qt::DotLine));

	//mPaint->drawEllipse(mCircleCoord->x(), mCircleCoord->y(), mCircleRadius, mCircleRadius);
	mPaint->drawEllipse(this->width()/2,this->height()/2, 100, 100);
	//this->update();
}

void GwLabel::mouseMoveEvent(QMouseEvent* e )
{
	QPoint mousepos = e->pos();
	if (this->isInCircle(mousepos.x(), mousepos.y() )) {
		this->setCursor(Qt::SizeFDiagCursor);
	}
	else {
		this->setCursor(Qt::SizeFDiagCursor);
	}

}

void GwLabel::mousePressEvent(QMouseEvent *e)
{
// 	if ( e->button() & Qt::LeftButton) {
// 
// 	}
}

void GwLabel::mouseReleaseEvent(QMouseEvent *e)
{
}

