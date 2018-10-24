#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QIcon>
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

void QPano3MainWindow::resizeEvent(QResizeEvent * event)
{
	QMainWindow::resizeEvent(event);
}


void QPano3MainWindow::setInputFile() {

	QFileDialog *fdlg = new QFileDialog();
	QStringList filename = fdlg->getOpenFileNames();
	if (filename.size() <= 0) {
		return ;
	}	
	ui->labelImagePanel->setInputImagesList(filename);
	ui->labelImagePanel->update();
	std::vector<ImageUnit*>	tmpList = ui->labelImagePanel->getImageListObj();

	for (int i = 0; i < tmpList.size(); i++) {		
		
		ui->tabWidgetEditImage->addTab(&(tmpList[i]->getGwLabel()),
										QString::number(tmpList[i]->getImgIndex(), 10));

	}

	//设置表头内容

	ui->tableWidgetSrcImage->setColumnCount(4);
	ui->tableWidgetSrcImage->setRowCount(tmpList.size());

	QStringList header;
	header << tr(u8"图片") << tr(u8"宽度") << tr(u8"高度") << tr(u8"路径");
	ui->tableWidgetSrcImage->setHorizontalHeaderLabels(header);

	for (int i = 0; i < tmpList.size(); i++) {

		QTableWidgetItem *itemLableImg = new QTableWidgetItem();
		QTableWidgetItem *itemWidth = new QTableWidgetItem();
		QTableWidgetItem *itemHeight = new QTableWidgetItem();
		QTableWidgetItem *itemPath = new QTableWidgetItem();
		ui->tableWidgetSrcImage->setRowHeight(i, tmpList[i]->getGwLabel().height());
		ui->tableWidgetSrcImage->setColumnWidth(0, tmpList[i]->getGwLabel().width() + 50);
		ui->tableWidgetSrcImage->setColumnWidth(3, 450 );
		itemWidth->setText(QString::number(tmpList[i]->getQImage().width(), 10));
		itemHeight->setText(QString::number(tmpList[i]->getQImage().height(), 10));
		itemPath->setText(tmpList[i]->getImgPath());

		ui->tableWidgetSrcImage->setCellWidget(i, 0, &(tmpList[i]->getGwLabel()));
		ui->tableWidgetSrcImage->setItem(i, 1, itemWidth);
		ui->tableWidgetSrcImage->setItem(i, 2, itemHeight);
		ui->tableWidgetSrcImage->setItem(i, 3, itemPath);
	}
// 	for (int i = 0; i<filename.size();i++){
// 		QWidget *tmpWidget = new QWidget(this);
// 		QPushButton *tmpBtn = new QPushButton(this);
// 		QHBoxLayout *tmpLayout = new QHBoxLayout;
// 		GwLabel *tmpGwLabel = new GwLabel(this);
// 		tmpBtn->setText("Test");
// 		tmpLayout->setAlignment(Qt::AlignLeft);
// 		tmpLayout->setSizeConstraint(QHBoxLayout::SetDefaultConstraint);
// 		//tmpLayout->setSizeConstraint(QHBoxLayout::SetMinAndMaxSize);
// 		tmpGwLabel->setBackgroundRole(QPalette::ColorRole::Dark);
// 		tmpGwLabel->setFrameShape(QFrame::Shape::StyledPanel);
// 		tmpGwLabel->setPixmap(QPixmap::fromImage(QImage(filename[i])
// 			.scaled(
// 				this->width(),
// 				this->height(),
// 				Qt::KeepAspectRatio, Qt::SmoothTransformation)));
// 		
// 		
// 		tmpLayout->addWidget(tmpGwLabel);
// 		tmpLayout->addWidget(tmpBtn);
// 		tmpWidget->setLayout(tmpLayout);
// 		ui->tabWidgetEditImage->addTab(tmpWidget, "1");
// 	}

}