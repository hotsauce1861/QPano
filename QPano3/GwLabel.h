#ifndef GWLABEL_H	
#define GWLABEL_H	1

#include <QObject>
#include <QLabel>
#include <QPainter> 
#include <QMouseEvent>

#define DEFAULE_RADIUS 10

class GwLabel : public QLabel
{
	Q_OBJECT
public:
	GwLabel(QWidget *parent);
	~GwLabel();

private:
	QPoint			*mCircleCoord;
	int				mCircleRadius;
	bool			leftMousePressed;
	QPainter		*mPaint;

	bool			isInCircle(int x,int y);
	bool			isOnCircleEdge(int x, int y);

	//重写鼠标事件
	void			paintEvent(QPaintEvent* event);
	void			mouseMoveEvent(QMouseEvent *e);
	void			mousePressEvent(QMouseEvent *e);
	void			mouseReleaseEvent(QMouseEvent *e);
};

#endif // !1
