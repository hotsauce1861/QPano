#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

QPano3MainWindow::QPano3MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QPano3MainWindow)
{
    ui->setupUi(this);
	ui->groupBoxCameraParam->hide();
	initConnect();
}

QPano3MainWindow::~QPano3MainWindow()
{
    delete ui;
}

void QPano3MainWindow::initConnect()
{
	connect(ui->labelImagePanel, SIGNAL(childLabelClicked(bool)),
		this, SLOT(changeToTabPageSourceImage()));
}

void QPano3MainWindow::changeToTabPageSourceImage()
{
	QMessageBox::information(NULL, "error", "Stitcher result is error");
	
}


void QPano3MainWindow::setInputFile() {

	QFileDialog *fdlg = new QFileDialog();
	QStringList filename = fdlg->getOpenFileNames();
	if (filename.size() <= 0) {
		return ;
	}	
	ui->labelImagePanel->setInputImagesList(filename);
	ui->labelImagePanel->update();

}