/********************************************************************************
** Form generated from reading UI file 'bankomatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKOMATWINDOW_H
#define UI_BANKOMATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankomatwindow
{
public:
    QPushButton *balanceButton;
    QGroupBox *takeBox;
    QPushButton *takeButton_100;
    QPushButton *takeButton_500;
    QPushButton *takeButton_1000;
    QPushButton *takeButton_other;
    QPushButton *exitButton;
    QPushButton *fillButton;
    QLabel *godbyeText;

    void setupUi(QWidget *bankomatwindow)
    {
        if (bankomatwindow->objectName().isEmpty())
            bankomatwindow->setObjectName(QString::fromUtf8("bankomatwindow"));
        bankomatwindow->resize(1200, 800);
        bankomatwindow->setMinimumSize(QSize(800, 800));
        bankomatwindow->setMaximumSize(QSize(1200, 1200));
        balanceButton = new QPushButton(bankomatwindow);
        balanceButton->setObjectName(QString::fromUtf8("balanceButton"));
        balanceButton->setGeometry(QRect(50, 30, 300, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(20);
        font.setBold(true);
        balanceButton->setFont(font);
        takeBox = new QGroupBox(bankomatwindow);
        takeBox->setObjectName(QString::fromUtf8("takeBox"));
        takeBox->setGeometry(QRect(80, 240, 591, 531));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(false);
        takeBox->setFont(font1);
        takeButton_100 = new QPushButton(takeBox);
        takeButton_100->setObjectName(QString::fromUtf8("takeButton_100"));
        takeButton_100->setGeometry(QRect(40, 70, 200, 200));
        takeButton_500 = new QPushButton(takeBox);
        takeButton_500->setObjectName(QString::fromUtf8("takeButton_500"));
        takeButton_500->setGeometry(QRect(330, 70, 200, 200));
        takeButton_1000 = new QPushButton(takeBox);
        takeButton_1000->setObjectName(QString::fromUtf8("takeButton_1000"));
        takeButton_1000->setGeometry(QRect(40, 300, 200, 200));
        takeButton_other = new QPushButton(takeBox);
        takeButton_other->setObjectName(QString::fromUtf8("takeButton_other"));
        takeButton_other->setGeometry(QRect(330, 300, 200, 200));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(false);
        takeButton_other->setFont(font2);
        exitButton = new QPushButton(bankomatwindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(850, 30, 300, 150));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font3.setPointSize(22);
        font3.setBold(true);
        exitButton->setFont(font3);
        fillButton = new QPushButton(bankomatwindow);
        fillButton->setObjectName(QString::fromUtf8("fillButton"));
        fillButton->setGeometry(QRect(850, 309, 300, 430));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font4.setPointSize(28);
        font4.setBold(true);
        fillButton->setFont(font4);
        godbyeText = new QLabel(bankomatwindow);
        godbyeText->setObjectName(QString::fromUtf8("godbyeText"));
        godbyeText->setGeometry(QRect(240, 200, 700, 300));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font5.setPointSize(48);
        godbyeText->setFont(font5);
        godbyeText->setAlignment(Qt::AlignCenter);

        retranslateUi(bankomatwindow);

        QMetaObject::connectSlotsByName(bankomatwindow);
    } // setupUi

    void retranslateUi(QWidget *bankomatwindow)
    {
        bankomatwindow->setWindowTitle(QCoreApplication::translate("bankomatwindow", "Form", nullptr));
        balanceButton->setText(QCoreApplication::translate("bankomatwindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\261\320\260\320\273\320\260\320\275\321\201", nullptr));
        takeBox->setTitle(QCoreApplication::translate("bankomatwindow", "\320\241\320\275\321\217\321\202\321\214", nullptr));
        takeButton_100->setText(QCoreApplication::translate("bankomatwindow", "100 \342\202\275", nullptr));
        takeButton_500->setText(QCoreApplication::translate("bankomatwindow", "500 \342\202\275", nullptr));
        takeButton_1000->setText(QCoreApplication::translate("bankomatwindow", "1000 \342\202\275", nullptr));
        takeButton_other->setText(QCoreApplication::translate("bankomatwindow", "\320\224\321\200\321\203\320\263\320\260\321\217 \321\201\321\203\320\274\320\274\320\260", nullptr));
        exitButton->setText(QCoreApplication::translate("bankomatwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        fillButton->setText(QCoreApplication::translate("bankomatwindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        godbyeText->setText(QCoreApplication::translate("bankomatwindow", "\320\224\320\276 \321\201\320\262\320\270\320\264\320\260\320\275\320\270\321\217!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bankomatwindow: public Ui_bankomatwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKOMATWINDOW_H
