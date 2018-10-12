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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "GwLabel.h"

QT_BEGIN_NAMESPACE

class Ui_QPano3Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonProcess01;
    QLineEdit *lineEditImagePath01;
    QPushButton *pushButtonOpenImg01;
    QPushButton *pushButtonOpenImg02;
	GwLabel *labelImg02;
    GwLabel *labelImg01;
    QPushButton *pushButtonProcess02;
    QLabel *labelExImg01;
    QLabel *labelExImg02;
    QLineEdit *lineEditImagePath02;
    QLabel *labelStitchImg;
    QPushButton *pushButtonStitch;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QPano3Class)
    {
        if (QPano3Class->objectName().isEmpty())
            QPano3Class->setObjectName(QStringLiteral("QPano3Class"));
        QPano3Class->resize(900, 619);
        QPano3Class->setAnimated(true);
        centralWidget = new QWidget(QPano3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonProcess01 = new QPushButton(centralWidget);
        pushButtonProcess01->setObjectName(QStringLiteral("pushButtonProcess01"));

        gridLayout->addWidget(pushButtonProcess01, 1, 3, 1, 1);

        lineEditImagePath01 = new QLineEdit(centralWidget);
        lineEditImagePath01->setObjectName(QStringLiteral("lineEditImagePath01"));

        gridLayout->addWidget(lineEditImagePath01, 1, 1, 1, 1);

        pushButtonOpenImg01 = new QPushButton(centralWidget);
        pushButtonOpenImg01->setObjectName(QStringLiteral("pushButtonOpenImg01"));

        gridLayout->addWidget(pushButtonOpenImg01, 1, 2, 1, 1);

        pushButtonOpenImg02 = new QPushButton(centralWidget);
        pushButtonOpenImg02->setObjectName(QStringLiteral("pushButtonOpenImg02"));

        gridLayout->addWidget(pushButtonOpenImg02, 3, 2, 1, 1);

        labelImg02 = new GwLabel(centralWidget);
        labelImg02->setObjectName(QStringLiteral("labelImg02"));
        labelImg02->setMinimumSize(QSize(240, 240));
        labelImg02->setMaximumSize(QSize(480, 480));

        gridLayout->addWidget(labelImg02, 2, 1, 1, 1);

        labelImg01 = new GwLabel(centralWidget);
        labelImg01->setObjectName(QStringLiteral("labelImg01"));
        labelImg01->setEnabled(true);
        labelImg01->setMinimumSize(QSize(240, 240));
        labelImg01->setMaximumSize(QSize(480, 480));
        labelImg01->setScaledContents(false);

        gridLayout->addWidget(labelImg01, 0, 1, 1, 1);

        pushButtonProcess02 = new QPushButton(centralWidget);
        pushButtonProcess02->setObjectName(QStringLiteral("pushButtonProcess02"));

        gridLayout->addWidget(pushButtonProcess02, 3, 3, 1, 1);

        labelExImg01 = new QLabel(centralWidget);
        labelExImg01->setObjectName(QStringLiteral("labelExImg01"));
        labelExImg01->setEnabled(true);
        labelExImg01->setMinimumSize(QSize(480, 240));
        labelExImg01->setMaximumSize(QSize(960, 480));

        gridLayout->addWidget(labelExImg01, 0, 2, 1, 6);

        labelExImg02 = new QLabel(centralWidget);
        labelExImg02->setObjectName(QStringLiteral("labelExImg02"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(labelExImg02->sizePolicy().hasHeightForWidth());
        labelExImg02->setSizePolicy(sizePolicy1);
        labelExImg02->setMinimumSize(QSize(480, 240));
        labelExImg02->setMaximumSize(QSize(960, 480));

        gridLayout->addWidget(labelExImg02, 2, 2, 1, 6);

        lineEditImagePath02 = new QLineEdit(centralWidget);
        lineEditImagePath02->setObjectName(QStringLiteral("lineEditImagePath02"));

        gridLayout->addWidget(lineEditImagePath02, 3, 1, 1, 1);

        labelStitchImg = new QLabel(centralWidget);
        labelStitchImg->setObjectName(QStringLiteral("labelStitchImg"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelStitchImg->sizePolicy().hasHeightForWidth());
        labelStitchImg->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelStitchImg, 0, 8, 3, 1);

        pushButtonStitch = new QPushButton(centralWidget);
        pushButtonStitch->setObjectName(QStringLiteral("pushButtonStitch"));

        gridLayout->addWidget(pushButtonStitch, 3, 8, 1, 1);

        QPano3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QPano3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        QPano3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QPano3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QPano3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QPano3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPano3Class->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditImagePath01, pushButtonOpenImg01);
        QWidget::setTabOrder(pushButtonOpenImg01, pushButtonProcess01);

        menuBar->addAction(menu_F->menuAction());

        retranslateUi(QPano3Class);
        QObject::connect(pushButtonOpenImg01, SIGNAL(clicked(bool)), QPano3Class, SLOT(setImagePath01()));
        QObject::connect(pushButtonOpenImg02, SIGNAL(clicked(bool)), QPano3Class, SLOT(setImagePath02()));
        QObject::connect(pushButtonProcess01, SIGNAL(clicked(bool)), QPano3Class, SLOT(processImage01()));
        QObject::connect(pushButtonProcess02, SIGNAL(clicked(bool)), QPano3Class, SLOT(processImage02()));
        QObject::connect(pushButtonStitch, SIGNAL(clicked(bool)), QPano3Class, SLOT(stitchImg()));

        QMetaObject::connectSlotsByName(QPano3Class);
    } // setupUi

    void retranslateUi(QMainWindow *QPano3Class)
    {
        QPano3Class->setWindowTitle(QApplication::translate("QPano3Class", "QPano3", nullptr));
        pushButtonProcess01->setText(QApplication::translate("QPano3Class", "\345\244\204\347\220\206", nullptr));
        pushButtonOpenImg01->setText(QApplication::translate("QPano3Class", "\346\265\217\350\247\210...", nullptr));
        pushButtonOpenImg02->setText(QApplication::translate("QPano3Class", "\346\265\217\350\247\210...", nullptr));
        labelImg02->setText(QString());
        labelImg01->setText(QString());
        pushButtonProcess02->setText(QApplication::translate("QPano3Class", "\345\244\204\347\220\206", nullptr));
        labelExImg01->setText(QString());
        labelExImg02->setText(QString());
        labelStitchImg->setText(QString());
        pushButtonStitch->setText(QApplication::translate("QPano3Class", "\346\213\274\346\216\245", nullptr));
        menu_F->setTitle(QApplication::translate("QPano3Class", "\346\226\207\344\273\266(F)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPano3Class: public Ui_QPano3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPANO3_H
