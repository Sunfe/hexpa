/********************************************************************************
** Form generated from reading UI file 'hexpa.ui'
**
** Created: Sat Sep 17 09:08:10 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXPA_H
#define UI_HEXPA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Parzer
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *srcPlainTextEdit;
    QLabel *srcLabel;
    QPlainTextEdit *targetPlainTextEdit;
    QLabel *targetLabel;

    void setupUi(QDialog *Parzer)
    {
        if (Parzer->objectName().isEmpty())
            Parzer->setObjectName(QString::fromUtf8("Parzer"));
        Parzer->resize(427, 331);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/hexpa/image/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        Parzer->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Parzer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(252, 290, 160, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        srcPlainTextEdit = new QPlainTextEdit(Parzer);
        srcPlainTextEdit->setObjectName(QString::fromUtf8("srcPlainTextEdit"));
        srcPlainTextEdit->setGeometry(QRect(12, 36, 400, 100));
        srcLabel = new QLabel(Parzer);
        srcLabel->setObjectName(QString::fromUtf8("srcLabel"));
        srcLabel->setGeometry(QRect(14, 10, 231, 16));
        targetPlainTextEdit = new QPlainTextEdit(Parzer);
        targetPlainTextEdit->setObjectName(QString::fromUtf8("targetPlainTextEdit"));
        targetPlainTextEdit->setGeometry(QRect(12, 180, 400, 100));
        targetLabel = new QLabel(Parzer);
        targetLabel->setObjectName(QString::fromUtf8("targetLabel"));
        targetLabel->setGeometry(QRect(12, 160, 171, 16));

        retranslateUi(Parzer);
        QObject::connect(buttonBox, SIGNAL(accepted()), Parzer, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Parzer, SLOT(reject()));

        QMetaObject::connectSlotsByName(Parzer);
    } // setupUi

    void retranslateUi(QDialog *Parzer)
    {
        Parzer->setWindowTitle(QApplication::translate("Parzer", "hexpa", 0, QApplication::UnicodeUTF8));
        srcLabel->setText(QApplication::translate("Parzer", "Magic hexadecimal string:", 0, QApplication::UnicodeUTF8));
        targetLabel->setText(QApplication::translate("Parzer", "parzed as:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Parzer: public Ui_Parzer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXPA_H
