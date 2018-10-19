/********************************************************************************
** Form generated from reading UI file 'QPano3MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPANO3MAINWINDOW_H
#define UI_QPANO3MAINWINDOW_H

#include <GwLabelPanel.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GwLabel.h"

QT_BEGIN_NAMESPACE

class Ui_QPano3MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonStitchImg;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButtonSpinP;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxCameraParam;
    QHBoxLayout *horizontalLayoutInputImgDock;
    GwLabelPanel *label_11;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButtonSpinN;
    QPushButton *pushButtonInputImg;
    QPushButton *pushButtonOutputImg;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAdvancedOpts;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    GwLabel *label_10;
    QWidget *tab_5;
    QLabel *label_8;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_5;
    QCheckBox *checkBox;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QPano3MainWindow)
    {
        if (QPano3MainWindow->objectName().isEmpty())
            QPano3MainWindow->setObjectName(QStringLiteral("QPano3MainWindow"));
        QPano3MainWindow->resize(652, 445);
        centralwidget = new QWidget(QPano3MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonStitchImg = new QPushButton(tab);
        pushButtonStitchImg->setObjectName(QStringLiteral("pushButtonStitchImg"));

        gridLayout->addWidget(pushButtonStitchImg, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 3, 1, 1);

        toolButtonSpinP = new QToolButton(tab);
        toolButtonSpinP->setObjectName(QStringLiteral("toolButtonSpinP"));
        toolButtonSpinP->setAutoFillBackground(true);
        toolButtonSpinP->setCheckable(false);
        toolButtonSpinP->setAutoRepeat(false);
        toolButtonSpinP->setAutoRaise(false);

        gridLayout->addWidget(toolButtonSpinP, 3, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 9, 1, 1, 3);

        groupBoxCameraParam = new QGroupBox(tab);
        groupBoxCameraParam->setObjectName(QStringLiteral("groupBoxCameraParam"));

        gridLayout->addWidget(groupBoxCameraParam, 7, 0, 1, 4);

        horizontalLayoutInputImgDock = new QHBoxLayout();
        horizontalLayoutInputImgDock->setObjectName(QStringLiteral("horizontalLayoutInputImgDock"));
        horizontalLayoutInputImgDock->setContentsMargins(-1, 5, -1, -1);
        label_11 = new GwLabelPanel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayoutInputImgDock->addWidget(label_11);


        gridLayout->addLayout(horizontalLayoutInputImgDock, 3, 0, 3, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 10, 0, 1, 4);

        toolButtonSpinN = new QToolButton(tab);
        toolButtonSpinN->setObjectName(QStringLiteral("toolButtonSpinN"));

        gridLayout->addWidget(toolButtonSpinN, 4, 3, 1, 1);

        pushButtonInputImg = new QPushButton(tab);
        pushButtonInputImg->setObjectName(QStringLiteral("pushButtonInputImg"));

        gridLayout->addWidget(pushButtonInputImg, 1, 0, 1, 1);

        pushButtonOutputImg = new QPushButton(tab);
        pushButtonOutputImg->setObjectName(QStringLiteral("pushButtonOutputImg"));

        gridLayout->addWidget(pushButtonOutputImg, 9, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pushButtonAdvancedOpts = new QPushButton(tab);
        pushButtonAdvancedOpts->setObjectName(QStringLiteral("pushButtonAdvancedOpts"));

        gridLayout->addWidget(pushButtonAdvancedOpts, 1, 2, 1, 2);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(20, 20));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(label);

        line = new QFrame(tab_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_10 = new GwLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 461, 241));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_2->addTab(tab_5, QString());

        gridLayout_3->addWidget(tabWidget_2, 0, 0, 12, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 5, 1, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 9, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 12, 0, 1, 3);

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 8, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(tab_3);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(tab_3);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tab_3);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout->addWidget(toolButton_3);


        gridLayout_3->addLayout(horizontalLayout, 11, 1, 1, 3);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 10, 2, 1, 2);

        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);

        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_3->addWidget(checkBox, 7, 1, 1, 3);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 3, 1, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 10, 1, 1, 1);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 2, 1, 1, 1);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        QPano3MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QPano3MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 652, 23));
        QPano3MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QPano3MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QPano3MainWindow->setStatusBar(statusbar);

        retranslateUi(QPano3MainWindow);
        QObject::connect(pushButtonInputImg, SIGNAL(clicked(bool)), QPano3MainWindow, SLOT(setInputFile()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QPano3MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QPano3MainWindow)
    {
        QPano3MainWindow->setWindowTitle(QApplication::translate("QPano3MainWindow", "MainWindow", nullptr));
        pushButtonStitchImg->setText(QApplication::translate("QPano3MainWindow", "2.\345\257\271\345\207\206\345\233\276\345\203\217...", nullptr));
        toolButtonSpinP->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        groupBoxCameraParam->setTitle(QApplication::translate("QPano3MainWindow", "\347\233\270\346\234\272/\351\225\234\345\244\264\345\217\202\346\225\260", nullptr));
        label_11->setText(QString());
        toolButtonSpinN->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        pushButtonInputImg->setText(QApplication::translate("QPano3MainWindow", "1.\345\212\240\350\275\275\345\233\276\345\203\217...", nullptr));
        pushButtonOutputImg->setText(QApplication::translate("QPano3MainWindow", "3.\345\210\233\345\273\272\345\205\250\346\231\257\345\233\276...", nullptr));
        pushButtonAdvancedOpts->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\347\272\247 >>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QPano3MainWindow", "\351\241\271\347\233\256\345\212\251\346\211\213", nullptr));
        label->setText(QApplication::translate("QPano3MainWindow", "\345\246\202\346\236\234\346\202\250\347\232\204\345\233\276\345\203\217\351\234\200\350\246\201\345\211\252\350\243\201\357\274\214\345\217\257\344\273\245\345\234\250\344\270\213\351\235\242\346\223\215\344\275\234\343\200\202\345\211\252\350\243\201\344\270\215\344\274\232\346\224\271\345\217\230\345\216\237\345\247\213\345\233\276\345\203\217\346\226\207\344\273\266\343\200\202", nullptr));
        label_10->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("QPano3MainWindow", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("QPano3MainWindow", "Tab 2", nullptr));
        label_8->setText(QApplication::translate("QPano3MainWindow", "\345\256\275\345\272\246\357\274\232", nullptr));
        label_7->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\345\272\246\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("QPano3MainWindow", "\344\270\215\345\211\252\350\243\201", nullptr));
        toolButton->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_2->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_3->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        label_6->setText(QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
        label_5->setText(QApplication::translate("QPano3MainWindow", "\345\267\246\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("QPano3MainWindow", "\344\270\252\345\210\253\345\211\252\350\243\201", nullptr));
        label_3->setText(QApplication::translate("QPano3MainWindow", "\344\270\212\357\274\232", nullptr));
        label_9->setText(QApplication::translate("QPano3MainWindow", "\347\274\251\346\224\276\357\274\232", nullptr));
        label_2->setText(QApplication::translate("QPano3MainWindow", "\345\217\263\357\274\232", nullptr));
        label_4->setText(QApplication::translate("QPano3MainWindow", "\344\270\213\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QPano3MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPano3MainWindow: public Ui_QPano3MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPANO3MAINWINDOW_H
