/********************************************************************************
** Form generated from reading UI file 'QPano3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPANO3_H
#define UI_QPANO3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPano3Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonProcess01;
    QLabel *labelImg02;
    QLineEdit *lineEditImagePath01;
    QPushButton *pushButtonOpenImg01;
    QPushButton *pushButtonOpenImg02;
    QLineEdit *lineEditImagePath02;
    QPushButton *pushButtonProcess02;
    QLabel *labelImg01;
    QLabel *labelExImg01;
    QLabel *labelExImg02;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QPano3Class)
    {
        if (QPano3Class->objectName().isEmpty())
            QPano3Class->setObjectName(QStringLiteral("QPano3Class"));
        QPano3Class->resize(1024, 768);
        QPano3Class->setAnimated(true);
        centralWidget = new QWidget(QPano3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonProcess01 = new QPushButton(centralWidget);
        pushButtonProcess01->setObjectName(QStringLiteral("pushButtonProcess01"));

        gridLayout->addWidget(pushButtonProcess01, 1, 2, 1, 1);

        labelImg02 = new QLabel(centralWidget);
        labelImg02->setObjectName(QStringLiteral("labelImg02"));

        gridLayout->addWidget(labelImg02, 2, 0, 1, 1);

        lineEditImagePath01 = new QLineEdit(centralWidget);
        lineEditImagePath01->setObjectName(QStringLiteral("lineEditImagePath01"));

        gridLayout->addWidget(lineEditImagePath01, 1, 0, 1, 1);

        pushButtonOpenImg01 = new QPushButton(centralWidget);
        pushButtonOpenImg01->setObjectName(QStringLiteral("pushButtonOpenImg01"));

        gridLayout->addWidget(pushButtonOpenImg01, 1, 1, 1, 1);

        pushButtonOpenImg02 = new QPushButton(centralWidget);
        pushButtonOpenImg02->setObjectName(QStringLiteral("pushButtonOpenImg02"));

        gridLayout->addWidget(pushButtonOpenImg02, 3, 1, 1, 1);

        lineEditImagePath02 = new QLineEdit(centralWidget);
        lineEditImagePath02->setObjectName(QStringLiteral("lineEditImagePath02"));

        gridLayout->addWidget(lineEditImagePath02, 3, 0, 1, 1);

        pushButtonProcess02 = new QPushButton(centralWidget);
        pushButtonProcess02->setObjectName(QStringLiteral("pushButtonProcess02"));

        gridLayout->addWidget(pushButtonProcess02, 3, 2, 1, 1);

        labelImg01 = new QLabel(centralWidget);
        labelImg01->setObjectName(QStringLiteral("labelImg01"));

        gridLayout->addWidget(labelImg01, 0, 0, 1, 1);

        labelExImg01 = new QLabel(centralWidget);
        labelExImg01->setObjectName(QStringLiteral("labelExImg01"));
        labelExImg01->setEnabled(true);

        gridLayout->addWidget(labelExImg01, 0, 1, 1, 6);

        labelExImg02 = new QLabel(centralWidget);
        labelExImg02->setObjectName(QStringLiteral("labelExImg02"));

        gridLayout->addWidget(labelExImg02, 2, 1, 1, 6);

        QPano3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QPano3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 23));
        QPano3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QPano3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QPano3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QPano3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPano3Class->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditImagePath01, pushButtonOpenImg01);
        QWidget::setTabOrder(pushButtonOpenImg01, pushButtonProcess01);

        retranslateUi(QPano3Class);
        QObject::connect(pushButtonOpenImg01, SIGNAL(clicked(bool)), QPano3Class, SLOT(setImagePath01()));
        QObject::connect(pushButtonOpenImg02, SIGNAL(clicked(bool)), QPano3Class, SLOT(setImagePath02()));
        QObject::connect(pushButtonProcess01, SIGNAL(clicked(bool)), QPano3Class, SLOT(processImage01()));
        QObject::connect(pushButtonProcess02, SIGNAL(clicked(bool)), QPano3Class, SLOT(processImage02()));

        QMetaObject::connectSlotsByName(QPano3Class);
    } // setupUi

    void retranslateUi(QMainWindow *QPano3Class)
    {
        QPano3Class->setWindowTitle(QApplication::translate("QPano3Class", "QPano3", nullptr));
        pushButtonProcess01->setText(QApplication::translate("QPano3Class", "\345\244\204\347\220\206", nullptr));
        labelImg02->setText(QString());
        pushButtonOpenImg01->setText(QApplication::translate("QPano3Class", "\346\265\217\350\247\210...", nullptr));
        pushButtonOpenImg02->setText(QApplication::translate("QPano3Class", "\346\265\217\350\247\210...", nullptr));
        pushButtonProcess02->setText(QApplication::translate("QPano3Class", "\345\244\204\347\220\206", nullptr));
        labelImg01->setText(QString());
        labelExImg01->setText(QString());
        labelExImg02->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QPano3Class: public Ui_QPano3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPANO3_H
