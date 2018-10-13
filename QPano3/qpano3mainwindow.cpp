#include "qpano3mainwindow.h"
#include "ui_qpano3mainwindow.h"

QPano3MainWindow::QPano3MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QPano3MainWindow)
{
    ui->setupUi(this);
}

QPano3MainWindow::~QPano3MainWindow()
{
    delete ui;
}
