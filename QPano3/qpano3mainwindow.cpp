#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"
#include <QFileDialog>

QPano3MainWindow::QPano3MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QPano3MainWindow)
{
    ui->setupUi(this);
	//ui->scrollAreaWidgetContents->setLayout(myformLayout);
}

QPano3MainWindow::~QPano3MainWindow()
{
    delete ui;
}


void QPano3MainWindow::setInputFile() {

	QFileDialog *fdlg = new QFileDialog();
	QStringList filename = fdlg->getOpenFileNames();
	if (filename.size() <= 0) {
		return ;
	}
	
	ui->labelPanel->setInputImagesList(filename);
	ui->labelPanel->update();

}