#ifndef IMAGE_UNIT_H	
#define IMAGE_UNIT_H	1

#include <vector>
#include <QLabel>
#include <QString>
#define USE_GWLABEL

#ifdef USE_GWLABEL
#include "GwLabel.h"
#endif // USE_GWLABEL

class ImageUnit
{
public:
	ImageUnit();
	~ImageUnit();
	QLabel&		getLabel();
	ImageUnit&	setLabel(QLabel& vLabel);
	QString&	getImgPath();
	ImageUnit&	setImgPath(QString& vPath);
	int			getImgIndex();
	ImageUnit&	setImgIndex(int vIndex);

#ifdef USE_GWLABEL
	GwLabel		getGwLabel();
	ImageUnit&	setGwLabel(GwLabel& vGwLabel);
#endif // USE_GWLABEL

private:
#ifdef USE_GWLABEL
	GwLabel			*mGwLabel;
#endif // USE_GWLABEL
	QLabel			*mLabel;
	QString			mImgPath;
	int				mImgIndex;

};

#endif
