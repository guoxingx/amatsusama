/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "analysis/m2dock.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_O;
    QAction *actionVersion;
    QAction *actionMeasure_Result;
    QAction *actionSetting;
    QAction *action3D;
    QAction *actionM2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFiles_F;
    QMenu *menuProcess_P;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QDockWidget *measureDock;
    QWidget *measureDwContents;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QDockWidget *imageDock;
    QWidget *imageDockContents;
    QGridLayout *gridLayout_2;
    QLabel *imageLabel;
    M2Dock *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(768, 530);
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/statics/006HJgYYgy1fsd4oltwwsg3096096t9z.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon);
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        actionMeasure_Result = new QAction(MainWindow);
        actionMeasure_Result->setObjectName(QString::fromUtf8("actionMeasure_Result"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/statics/\350\256\262\351\201\223\347\220\206\345\230\233.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMeasure_Result->setIcon(icon1);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        actionSetting->setIcon(icon1);
        action3D = new QAction(MainWindow);
        action3D->setObjectName(QString::fromUtf8("action3D"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/statics/\346\200\216\344\271\210\350\256\262\345\230\233.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action3D->setIcon(icon2);
        actionM2 = new QAction(MainWindow);
        actionM2->setObjectName(QString::fromUtf8("actionM2"));
        actionM2->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 768, 21));
        menuFiles_F = new QMenu(menubar);
        menuFiles_F->setObjectName(QString::fromUtf8("menuFiles_F"));
        menuProcess_P = new QMenu(menubar);
        menuProcess_P->setObjectName(QString::fromUtf8("menuProcess_P"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        measureDock = new QDockWidget(MainWindow);
        measureDock->setObjectName(QString::fromUtf8("measureDock"));
        measureDock->setMaximumSize(QSize(200, 524287));
        measureDock->setAutoFillBackground(false);
        measureDock->setAllowedAreas(Qt::LeftDockWidgetArea);
        measureDwContents = new QWidget();
        measureDwContents->setObjectName(QString::fromUtf8("measureDwContents"));
        gridLayout = new QGridLayout(measureDwContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(measureDwContents);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 11)
            tableWidget->setRowCount(11);
        QFont font;
        font.setPointSize(13);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem17);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 1, 1, 1);

        measureDock->setWidget(measureDwContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), measureDock);
        imageDock = new QDockWidget(MainWindow);
        imageDock->setObjectName(QString::fromUtf8("imageDock"));
        imageDock->setMinimumSize(QSize(300, 300));
        imageDock->setFloating(true);
        imageDock->setAllowedAreas(Qt::NoDockWidgetArea);
        imageDockContents = new QWidget();
        imageDockContents->setObjectName(QString::fromUtf8("imageDockContents"));
        gridLayout_2 = new QGridLayout(imageDockContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        imageLabel = new QLabel(imageDockContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(imageLabel, 0, 0, 1, 1);

        imageDock->setWidget(imageDockContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), imageDock);
        dockWidget = new M2Dock(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        menubar->addAction(menuFiles_F->menuAction());
        menubar->addAction(menuProcess_P->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFiles_F->addAction(actionOpen_O);
        menuProcess_P->addAction(actionMeasure_Result);
        menuProcess_P->addAction(actionSetting);
        menuProcess_P->addSeparator();
        menuProcess_P->addAction(action3D);
        menuProcess_P->addAction(actionM2);
        menuHelp->addAction(actionVersion);
        toolBar->addAction(actionOpen_O);
        toolBar->addSeparator();
        toolBar->addAction(actionMeasure_Result);
        toolBar->addAction(actionSetting);
        toolBar->addSeparator();
        toolBar->addAction(action3D);
        toolBar->addAction(actionM2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\205\211\346\235\237\350\264\250\351\207\217\346\243\200\346\265\213 v0.0.1", nullptr));
        actionOpen_O->setText(QApplication::translate("MainWindow", "Open(&O)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionOpen_O->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionOpen_O->setShortcut(QApplication::translate("MainWindow", "Meta+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionVersion->setText(QApplication::translate("MainWindow", "Version", nullptr));
#ifndef QT_NO_TOOLTIP
        actionVersion->setToolTip(QApplication::translate("MainWindow", "Version", nullptr));
#endif // QT_NO_TOOLTIP
        actionMeasure_Result->setText(QApplication::translate("MainWindow", "Measure Result", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMeasure_Result->setToolTip(QApplication::translate("MainWindow", "Measure Result", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionMeasure_Result->setStatusTip(QApplication::translate("MainWindow", "\346\265\213\351\207\217\347\273\223\346\236\234", nullptr));
#endif // QT_NO_STATUSTIP
        actionSetting->setText(QApplication::translate("MainWindow", "Setting", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSetting->setStatusTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
#endif // QT_NO_STATUSTIP
        action3D->setText(QApplication::translate("MainWindow", "3D", nullptr));
#ifndef QT_NO_STATUSTIP
        action3D->setStatusTip(QApplication::translate("MainWindow", "3D\345\233\276", nullptr));
#endif // QT_NO_STATUSTIP
        actionM2->setText(QApplication::translate("MainWindow", "M2", nullptr));
#ifndef QT_NO_STATUSTIP
        actionM2->setStatusTip(QApplication::translate("MainWindow", "M2\345\233\240\345\255\220", nullptr));
#endif // QT_NO_STATUSTIP
        menuFiles_F->setTitle(QApplication::translate("MainWindow", "Files(&F)", nullptr));
        menuProcess_P->setTitle(QApplication::translate("MainWindow", "Process(&P)", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\265\213\351\207\217\346\225\260\346\215\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\350\264\250\345\277\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\263\260\345\200\274\346\257\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\210\200\345\217\243\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\344\270\255\345\277\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\345\263\260\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\347\233\264\345\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\347\262\227\347\263\231\345\272\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\347\233\270\345\205\263\347\263\273\346\225\260", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "1.0000", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "2.9123", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "2.3123", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        imageDock->setWindowTitle(QApplication::translate("MainWindow", "\345\210\206\346\236\220\345\233\276\347\211\207", nullptr));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
