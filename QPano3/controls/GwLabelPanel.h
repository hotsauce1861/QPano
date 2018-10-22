#ifndef GWLABELPANEL_H
#define GWLABELPANEL_H
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QStringList>
#include <QScrollArea>
#include <QMutex>

#include <vector>
#include "GwLabelBtn.h"

class GwLabelPanel : public QLabel
{
	Q_OBJECT

public:
	GwLabelPanel(QWidget *parent);
	~GwLabelPanel();
	void					setInputImagesList(QStringList imgs);
	void					update();

private:
	QLabel*					getInsertImageLabel(QImage image);
	GwLabelBtn*				getInsertImageGwLabelBtn(QImage image);
	void					objInit();

signals:
	void					childLabelClicked(bool);
protected slots:
	//void					childLabelClicked();
private:
	const int				thisWidgetHeight = 180;
	const int				childLabelWidth = 120;
	const int				childLabelHeight = 120;
	const int				childImageWidth = 120;
	const int				childImageHeight = 120;

	QMutex					mutex;
	QWidget					*mWidget;
	QScrollArea				*mScrollArea;
	QHBoxLayout				*mHBoxMainLayout;
	QHBoxLayout				*mMotherMainLayout;

	QStringList				mImageList;
	std::vector<QLabel*>	mLabelList;
	std::vector<GwLabelBtn*>
							mGwLabelBtnList;
	bool					eventFilter(QObject *watched, QEvent *event);
};

#endif // GWLABELPANEL_H
