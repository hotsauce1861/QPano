#ifndef QPANO3MAINWINDOW_H
#define QPANO3MAINWINDOW_H

#include <QMainWindow>
#include "GwLabelPanel.h"

namespace Ui {
	class QPano3MainWindow;
}

class QPano3MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QPano3MainWindow(QWidget *parent = nullptr);
    ~QPano3MainWindow();

private:
    Ui::QPano3MainWindow	*ui;

	void					initConnect();

private slots:
	void					setInputFile();
	void					changeToTabPageSourceImage();

};

#endif // QPANO3MAINWINDOW_H
