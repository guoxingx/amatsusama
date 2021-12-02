/********************************************************************************
** Form generated from reading UI file 'm2dock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_M2DOCK_H
#define UI_M2DOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_M2Dock
{
public:
    QWidget *dockWidgetContents;
    QPushButton *startButton;
    QComboBox *strategyCombo;
    QLabel *imageLabel;
    QTableWidget *paramsTable;
    QGraphicsView *graphicsView;

    void setupUi(QDockWidget *M2Dock)
    {
        if (M2Dock->objectName().isEmpty())
            M2Dock->setObjectName(QString::fromUtf8("M2Dock"));
        M2Dock->resize(627, 582);
        M2Dock->setFloating(true);
        M2Dock->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        startButton = new QPushButton(dockWidgetContents);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(10, 10, 91, 31));
        strategyCombo = new QComboBox(dockWidgetContents);
        strategyCombo->addItem(QString());
        strategyCombo->addItem(QString());
        strategyCombo->addItem(QString());
        strategyCombo->setObjectName(QString::fromUtf8("strategyCombo"));
        strategyCombo->setGeometry(QRect(130, 10, 131, 31));
        imageLabel = new QLabel(dockWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(0, 60, 261, 231));
        imageLabel->setStyleSheet(QString::fromUtf8("image: url(:/samples/statics/\345\205\211\346\226\221.png);"));
        paramsTable = new QTableWidget(dockWidgetContents);
        if (paramsTable->columnCount() < 3)
            paramsTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        paramsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        paramsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        paramsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (paramsTable->rowCount() < 11)
            paramsTable->setRowCount(11);
        QFont font;
        font.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        paramsTable->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        paramsTable->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        paramsTable->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        paramsTable->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        paramsTable->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        paramsTable->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font);
        paramsTable->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font);
        paramsTable->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font);
        paramsTable->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font);
        paramsTable->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font);
        paramsTable->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        paramsTable->setItem(6, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        paramsTable->setItem(7, 2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        paramsTable->setItem(10, 2, __qtablewidgetitem16);
        paramsTable->setObjectName(QString::fromUtf8("paramsTable"));
        paramsTable->setGeometry(QRect(280, 10, 331, 281));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(paramsTable->sizePolicy().hasHeightForWidth());
        paramsTable->setSizePolicy(sizePolicy);
        graphicsView = new QGraphicsView(dockWidgetContents);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 320, 601, 231));
        M2Dock->setWidget(dockWidgetContents);

        retranslateUi(M2Dock);

        QMetaObject::connectSlotsByName(M2Dock);
    } // setupUi

    void retranslateUi(QDockWidget *M2Dock)
    {
        M2Dock->setWindowTitle(QApplication::translate("M2Dock", "M2", nullptr));
        startButton->setText(QApplication::translate("M2Dock", "\345\274\200\345\247\213", nullptr));
        strategyCombo->setItemText(0, QApplication::translate("M2Dock", "M2 - Stand", nullptr));
        strategyCombo->setItemText(1, QApplication::translate("M2Dock", "M2 - Pro", nullptr));
        strategyCombo->setItemText(2, QApplication::translate("M2Dock", "M2 - Pro Max Ultra Super Platinum", nullptr));

        imageLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = paramsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("M2Dock", "\345\217\202\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = paramsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("M2Dock", "\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = paramsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("M2Dock", "\345\215\225\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = paramsTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("M2Dock", "\345\275\223\345\211\215\344\275\215\347\275\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = paramsTable->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("M2Dock", "\345\275\223\345\211\215\350\264\250\345\277\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = paramsTable->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("M2Dock", "\345\275\223\345\211\215\345\215\212\345\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = paramsTable->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("M2Dock", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = paramsTable->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("M2Dock", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = paramsTable->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("M2Dock", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = paramsTable->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("M2Dock", "\346\235\237\350\205\260\345\215\212\345\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = paramsTable->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("M2Dock", "\346\235\237\350\205\260\345\215\212\345\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = paramsTable->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("M2Dock", "M2", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = paramsTable->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("M2Dock", "Div2", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = paramsTable->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("M2Dock", "\347\221\236\345\210\251\351\225\277\345\272\246", nullptr));

        const bool __sortingEnabled = paramsTable->isSortingEnabled();
        paramsTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem14 = paramsTable->item(6, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("M2Dock", "mm", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = paramsTable->item(7, 2);
        ___qtablewidgetitem15->setText(QApplication::translate("M2Dock", "mm", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = paramsTable->item(10, 2);
        ___qtablewidgetitem16->setText(QApplication::translate("M2Dock", "mm", nullptr));
        paramsTable->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class M2Dock: public Ui_M2Dock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_M2DOCK_H
