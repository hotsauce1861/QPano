#ifndef GWLABELPANEL_H
#define GWLABELPANEL_H
#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QStringList>

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
	QHBoxLayout				*mHBoxMainLayout;
	std::vector<QLabel*>	mLabelList;
	QStringList				mImageList;

};

#endif // GWLABELPANEL_H
