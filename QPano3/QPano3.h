#pragma once

#include <QtWidgets/QMainWindow>
#include <QLabel>
#include "ui_QPano3.h"

enum InputImage{
	In01,
	In02
};

class QPano3 : public QMainWindow
{
	Q_OBJECT

public:
	QPano3(QWidget *parent = Q_NULLPTR);	

private:
	QString			mInputImgPath01;
	QString			mInputImgPath02;
	void			showInputImage(QLabel & qlabel, QString ImgPath);
	void			showInputImage(QLabel & qlabel, QImage ImgData);
	Ui::QPano3Class ui;
	void			processImagePath(InputImage index);
	void			processImageData(InputImage index);
	
private slots:
	void			setImagePath01();
	void			setImagePath02();	
	void			processImage01();
	void			processImage02();
};
