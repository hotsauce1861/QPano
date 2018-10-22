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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPano3MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidgetSrcMain;
    QWidget *tabPageAssist;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonStitchImg;
    QPushButton *pushButtonInputImg;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOutputImg;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButtonSpinN;
    QHBoxLayout *horizontalLayoutInputImgDock;
    GwLabelPanel *labelImagePanel;
    QPushButton *pushButtonAdvancedOpts;
    QGroupBox *groupBoxCameraParam;
    QToolButton *toolButtonSpinP;
    QWidget *tabPageSrcImg;
    QVBoxLayout *verticalLayout;
    QLabel *labelSrcTabpage;
    QFrame *lineSrcTabpage;
    QTableWidget *tableWidgetSrcImage;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_6;
    QToolButton *toolButton_8;
    QToolButton *toolButton_7;
    QFrame *line_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_9;
    QFrame *line_4;
    QToolButton *toolButton_4;
    QToolButton *toolButton_10;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tabPageEditImg;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QTabWidget *tabWidgetEditImage;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QCheckBox *checkBox;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QLabel *label;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QPano3MainWindow)
    {
        if (QPano3MainWindow->objectName().isEmpty())
            QPano3MainWindow->setObjectName(QStringLiteral("QPano3MainWindow"));
        QPano3MainWindow->resize(839, 627);
        centralwidget = new QWidget(QPano3MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidgetSrcMain = new QTabWidget(centralwidget);
        tabWidgetSrcMain->setObjectName(QStringLiteral("tabWidgetSrcMain"));
        tabPageAssist = new QWidget();
        tabPageAssist->setObjectName(QStringLiteral("tabPageAssist"));
        gridLayout = new QGridLayout(tabPageAssist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(579, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pushButtonStitchImg = new QPushButton(tabPageAssist);
        pushButtonStitchImg->setObjectName(QStringLiteral("pushButtonStitchImg"));
        pushButtonStitchImg->setMinimumSize(QSize(120, 25));
        pushButtonStitchImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonStitchImg, 5, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        pushButtonInputImg = new QPushButton(tabPageAssist);
        pushButtonInputImg->setObjectName(QStringLiteral("pushButtonInputImg"));
        pushButtonInputImg->setMinimumSize(QSize(120, 25));
        pushButtonInputImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonInputImg, 0, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(666, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 1, 1, 3);

        pushButtonOutputImg = new QPushButton(tabPageAssist);
        pushButtonOutputImg->setObjectName(QStringLiteral("pushButtonOutputImg"));
        pushButtonOutputImg->setMinimumSize(QSize(120, 25));
        pushButtonOutputImg->setMaximumSize(QSize(120, 25));

        gridLayout->addWidget(pushButtonOutputImg, 6, 0, 1, 1, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_3 = new QSpacerItem(666, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(792, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 4);

        toolButtonSpinN = new QToolButton(tabPageAssist);
        toolButtonSpinN->setObjectName(QStringLiteral("toolButtonSpinN"));

        gridLayout->addWidget(toolButtonSpinN, 3, 3, 1, 1);

        horizontalLayoutInputImgDock = new QHBoxLayout();
        horizontalLayoutInputImgDock->setObjectName(QStringLiteral("horizontalLayoutInputImgDock"));
        horizontalLayoutInputImgDock->setContentsMargins(-1, 5, -1, -1);
        labelImagePanel = new GwLabelPanel(tabPageAssist);
        labelImagePanel->setObjectName(QStringLiteral("labelImagePanel"));
        labelImagePanel->setAlignment(Qt::AlignCenter);

        horizontalLayoutInputImgDock->addWidget(labelImagePanel);


        gridLayout->addLayout(horizontalLayoutInputImgDock, 1, 0, 3, 2);

        pushButtonAdvancedOpts = new QPushButton(tabPageAssist);
        pushButtonAdvancedOpts->setObjectName(QStringLiteral("pushButtonAdvancedOpts"));

        gridLayout->addWidget(pushButtonAdvancedOpts, 0, 3, 1, 1);

        groupBoxCameraParam = new QGroupBox(tabPageAssist);
        groupBoxCameraParam->setObjectName(QStringLiteral("groupBoxCameraParam"));

        gridLayout->addWidget(groupBoxCameraParam, 4, 0, 1, 4);

        toolButtonSpinP = new QToolButton(tabPageAssist);
        toolButtonSpinP->setObjectName(QStringLiteral("toolButtonSpinP"));
        toolButtonSpinP->setAutoFillBackground(true);
        toolButtonSpinP->setCheckable(false);
        toolButtonSpinP->setAutoRepeat(false);
        toolButtonSpinP->setAutoRaise(false);

        gridLayout->addWidget(toolButtonSpinP, 1, 3, 1, 1);

        tabWidgetSrcMain->addTab(tabPageAssist, QString());
        tabPageSrcImg = new QWidget();
        tabPageSrcImg->setObjectName(QStringLiteral("tabPageSrcImg"));
        tabPageSrcImg->setEnabled(true);
        verticalLayout = new QVBoxLayout(tabPageSrcImg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelSrcTabpage = new QLabel(tabPageSrcImg);
        labelSrcTabpage->setObjectName(QStringLiteral("labelSrcTabpage"));

        verticalLayout->addWidget(labelSrcTabpage);

        lineSrcTabpage = new QFrame(tabPageSrcImg);
        lineSrcTabpage->setObjectName(QStringLiteral("lineSrcTabpage"));
        lineSrcTabpage->setFrameShape(QFrame::HLine);
        lineSrcTabpage->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(lineSrcTabpage);

        tableWidgetSrcImage = new QTableWidget(tabPageSrcImg);
        tableWidgetSrcImage->setObjectName(QStringLiteral("tableWidgetSrcImage"));

        verticalLayout->addWidget(tableWidgetSrcImage);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton_6 = new QToolButton(tabPageSrcImg);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        horizontalLayout_2->addWidget(toolButton_6);

        toolButton_8 = new QToolButton(tabPageSrcImg);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));

        horizontalLayout_2->addWidget(toolButton_8);

        toolButton_7 = new QToolButton(tabPageSrcImg);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        horizontalLayout_2->addWidget(toolButton_7);

        line_3 = new QFrame(tabPageSrcImg);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        toolButton_5 = new QToolButton(tabPageSrcImg);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_9 = new QToolButton(tabPageSrcImg);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));

        horizontalLayout_2->addWidget(toolButton_9);

        line_4 = new QFrame(tabPageSrcImg);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        toolButton_4 = new QToolButton(tabPageSrcImg);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_10 = new QToolButton(tabPageSrcImg);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));

        horizontalLayout_2->addWidget(toolButton_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidgetSrcMain->addTab(tabPageSrcImg, QString());
        tabPageEditImg = new QWidget();
        tabPageEditImg->setObjectName(QStringLiteral("tabPageEditImg"));
        gridLayout_2 = new QGridLayout(tabPageEditImg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(tabPageEditImg);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 1, 1, 1);

        label_5 = new QLabel(tabPageEditImg);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 3, 1, 1, 1);

        tabWidgetEditImage = new QTabWidget(tabPageEditImg);
        tabWidgetEditImage->setObjectName(QStringLiteral("tabWidgetEditImage"));

        gridLayout_2->addWidget(tabWidgetEditImage, 2, 0, 13, 1);

        label_2 = new QLabel(tabPageEditImg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 4, 1, 1, 1);

        pushButton = new QPushButton(tabPageEditImg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 11, 1, 1, 2);

        label_7 = new QLabel(tabPageEditImg);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 9, 1, 1, 1);

        label_9 = new QLabel(tabPageEditImg);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 13, 1, 1, 1);

        label_8 = new QLabel(tabPageEditImg);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 8, 1, 1, 1);

        comboBox = new QComboBox(tabPageEditImg);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 13, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton = new QToolButton(tabPageEditImg);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(tabPageEditImg);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tabPageEditImg);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout->addWidget(toolButton_3);


        gridLayout_2->addLayout(horizontalLayout, 14, 1, 1, 2);

        checkBox = new QCheckBox(tabPageEditImg);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 10, 1, 1, 2);

        label_3 = new QLabel(tabPageEditImg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(122, 260, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 12, 1, 1, 2);

        label_4 = new QLabel(tabPageEditImg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 7, 1, 1, 1);

        label = new QLabel(tabPageEditImg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(tabPageEditImg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 3);

        tabWidgetSrcMain->addTab(tabPageEditImg, QString());

        gridLayout_4->addWidget(tabWidgetSrcMain, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);

        QPano3MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QPano3MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 839, 23));
        QPano3MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QPano3MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QPano3MainWindow->setStatusBar(statusbar);

        retranslateUi(QPano3MainWindow);
        QObject::connect(pushButtonInputImg, SIGNAL(clicked(bool)), QPano3MainWindow, SLOT(setInputFile()));

        tabWidgetSrcMain->setCurrentIndex(2);
        tabWidgetEditImage->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QPano3MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QPano3MainWindow)
    {
        QPano3MainWindow->setWindowTitle(QApplication::translate("QPano3MainWindow", "MainWindow", nullptr));
        pushButtonStitchImg->setText(QApplication::translate("QPano3MainWindow", "2.\345\257\271\345\207\206\345\233\276\345\203\217...", nullptr));
        pushButtonInputImg->setText(QApplication::translate("QPano3MainWindow", "1.\345\212\240\350\275\275\345\233\276\345\203\217...", nullptr));
        pushButtonOutputImg->setText(QApplication::translate("QPano3MainWindow", "3.\345\210\233\345\273\272\345\205\250\346\231\257\345\233\276...", nullptr));
        toolButtonSpinN->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        labelImagePanel->setText(QApplication::translate("QPano3MainWindow", "\346\213\226\346\213\275\345\233\276\347\211\207\345\210\260\346\255\244", nullptr));
        pushButtonAdvancedOpts->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\347\272\247 >>", nullptr));
        groupBoxCameraParam->setTitle(QApplication::translate("QPano3MainWindow", "\347\233\270\346\234\272/\351\225\234\345\244\264\345\217\202\346\225\260", nullptr));
        toolButtonSpinP->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageAssist), QApplication::translate("QPano3MainWindow", "\351\241\271\347\233\256\345\212\251\346\211\213", nullptr));
        labelSrcTabpage->setText(QApplication::translate("QPano3MainWindow", "\347\202\271\345\207\273\344\273\245\344\270\213\346\267\273\345\212\240\346\214\211\351\222\256\344\270\272\346\202\250\347\232\204\345\205\250\346\231\257\345\233\276\351\200\211\346\213\251\345\233\276\345\203\217\343\200\202\346\202\250\344\271\237\350\203\275\345\244\237\344\273\216\350\265\204\346\272\220\347\256\241\347\220\206\345\231\250\346\213\226\345\212\250\346\226\207\344\273\266\345\210\260\350\257\245\347\252\227\345\217\243\343\200\202", nullptr));
        toolButton_6->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_8->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_7->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_5->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_9->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_4->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_10->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageSrcImg), QApplication::translate("QPano3MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_6->setText(QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
        label_5->setText(QApplication::translate("QPano3MainWindow", "\345\267\246\357\274\232", nullptr));
        label_2->setText(QApplication::translate("QPano3MainWindow", "\345\217\263\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("QPano3MainWindow", "\344\270\215\345\211\252\350\243\201", nullptr));
        label_7->setText(QApplication::translate("QPano3MainWindow", "\351\253\230\345\272\246\357\274\232", nullptr));
        label_9->setText(QApplication::translate("QPano3MainWindow", "\347\274\251\346\224\276\357\274\232", nullptr));
        label_8->setText(QApplication::translate("QPano3MainWindow", "\345\256\275\345\272\246\357\274\232", nullptr));
        toolButton->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_2->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        toolButton_3->setText(QApplication::translate("QPano3MainWindow", "...", nullptr));
        checkBox->setText(QApplication::translate("QPano3MainWindow", "\344\270\252\345\210\253\345\211\252\350\243\201", nullptr));
        label_3->setText(QApplication::translate("QPano3MainWindow", "\344\270\212\357\274\232", nullptr));
        label_4->setText(QApplication::translate("QPano3MainWindow", "\344\270\213\357\274\232", nullptr));
        label->setText(QApplication::translate("QPano3MainWindow", "\345\246\202\346\236\234\346\202\250\347\232\204\345\233\276\345\203\217\351\234\200\350\246\201\345\211\252\350\243\201\357\274\214\345\217\257\344\273\245\345\234\250\344\270\213\351\235\242\346\223\215\344\275\234\343\200\202\345\211\252\350\243\201\344\270\215\344\274\232\346\224\271\345\217\230\345\216\237\345\247\213\345\233\276\345\203\217\346\226\207\344\273\266\343\200\202", nullptr));
        tabWidgetSrcMain->setTabText(tabWidgetSrcMain->indexOf(tabPageEditImg), QApplication::translate("QPano3MainWindow", "\345\211\252\350\243\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPano3MainWindow: public Ui_QPano3MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPANO3MAINWINDOW_H
