#ifndef GWLABELPANEL_H
#define GWLABELPANEL_H
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QStringList>
#include <QScrollArea>

#include <vector>

class GwLabelPanel : public QLabel
{
	Q_OBJECT

public:
	GwLabelPanel(QWidget *parent);
	~GwLabelPanel();
	void		setInputImagesList(QStringList imgs);
	void		update();
private:
	const int				childLabelWidth = 150;
	const int				childLabelHeight = 150;
	QScrollArea				*mScrollArea;
	QHBoxLayout				*mHBoxMainLayout;
	QStringList				mImageList;
	std::vector<QLabel*>	mLabelList;

	bool					eventFilter(QObject *watched, QEvent *event);
};

#endif // GWLABELPANEL_H
