/********************************************************************************
** Form generated from reading UI file 'versiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONDLG_H
#define UI_VERSIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_VersionDlg
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *VersionDlg)
    {
        if (VersionDlg->objectName().isEmpty())
            VersionDlg->setObjectName(QString::fromUtf8("VersionDlg"));
        VersionDlg->resize(400, 300);
        buttonBox = new QDialogButtonBox(VersionDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(VersionDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 341, 41));
        label_2 = new QLabel(VersionDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 341, 41));

        retranslateUi(VersionDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), VersionDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VersionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(VersionDlg);
    } // setupUi

    void retranslateUi(QDialog *VersionDlg)
    {
        VersionDlg->setWindowTitle(QApplication::translate("VersionDlg", "\347\211\210\346\234\254\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("VersionDlg", "\347\211\210\346\234\254: 0.0.1", nullptr));
        label_2->setText(QApplication::translate("VersionDlg", "\347\211\210\346\235\203\346\211\200\346\234\211: \346\277\200\345\205\211\345\276\256\347\272\263\346\211\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VersionDlg: public Ui_VersionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONDLG_H
