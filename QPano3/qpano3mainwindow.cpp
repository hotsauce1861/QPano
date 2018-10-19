#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"
#include <QFileDialog>

QPano3MainWindow::QPano3MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QPano3MainWindow)
{
    ui->setupUi(this);
	//mLabelPanel = new GwLabelPanel(this);
	ui->groupBoxCameraParam->hide();
	//ui->horizontalLayoutInputImgDock->addWidget(mLabelPanel);
	//ui->scrollArea->setWidget(mLabelPanel);
	//ui->scrollAreaWidgetContents->setLayout(ui->horizontalLayoutInputImgDock);
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
	mLabelPanel->setInputImagesList(filename);
	mLabelPanel->update();

}