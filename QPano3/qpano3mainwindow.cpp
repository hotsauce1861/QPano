#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include "GwLabel.h"

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

	for (int i = 0; i<filename.size();i++){
		QWidget *tmpWidget = new QWidget(this);
		QHBoxLayout *tmpLayout = new QHBoxLayout;
		GwLabel *tmpGwLabel = new GwLabel(this);
		tmpWidget->setLayout(tmpLayout);
		//tmpGwLabel->setScaledContents(true);
		tmpGwLabel->setBackgroundRole(QPalette::ColorRole::Dark);
		tmpGwLabel->setPixmap(QPixmap::fromImage(QImage(filename[i])
			.scaled(
				this->width(),
				this->height(),
				Qt::KeepAspectRatio, Qt::SmoothTransformation)));

		
		tmpLayout->addWidget(tmpGwLabel);
		ui->tabWidgetEditImage->setLayout(tmpLayout);
		ui->tabWidgetEditImage->addTab(tmpGwLabel, "1");
	}

}