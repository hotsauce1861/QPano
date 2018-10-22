#ifndef GWLABELBTN_H
#define GWLABELBTN_H

#include <QObject>
#include <QMouseEvent>
#include <QLabel>

class GwLabelBtn:public QLabel
{
	Q_OBJECT
public:
	GwLabelBtn(QWidget *parent);
	~GwLabelBtn();
protected:
	void			mouseReleaseEvent(QMouseEvent *event);

signals:
	void			clicked(bool);
};

#endif

