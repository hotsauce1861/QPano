#ifndef GWLABEL_H	
#define GWLABEL_H	1

#include <QObject>
#include <QLabel>
#include <QPainter> 
#include <QMouseEvent>

#define DEFAULE_RADIUS 50

class GwLabel : public QLabel
{
	Q_OBJECT
public:
	GwLabel(QWidget *parent);
	~GwLabel();

private:
	enum CIRCLE_STATE{
		IDLE,
		MOVE,
		ZOOM
	};
	int				state;
	CIRCLE_STATE	eState;
	float			mHeightRatio;
	float			mWidthRatio;
	QPoint			*mCircleCoord;
	QPoint			mOldMousePos;
	int				mCircleRadius;
	int				mEdgeWidth;		//检测边界宽度
	bool			mMouseLeftPressed;
	QPainter		*mPaint;

	bool			isInCircle(int x,int y);
	bool			isOnCircleEdge(int x, int y);
	bool			isDetlaNegative(QPoint ori,QPoint dst);
	//重写鼠标事件
	void			paintEvent(QPaintEvent* event);
	void			showEvent(QShowEvent *event);
	void			mouseMoveEvent(QMouseEvent *e);
	void			mousePressEvent(QMouseEvent *e);
	void			mouseReleaseEvent(QMouseEvent *e);
};

#endif // !1
