/********************************************************************************
** Form generated from reading UI file 'autorize.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZE_H
#define UI_AUTORIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutorizeWindow
{
public:
    QWidget *centralwidget;
    QLabel *welcome_label;
    QLabel *label;
    QPushButton *OK_Button;
    QPushButton *RESET_Button;
    QGroupBox *Keyboad_Box;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_canel;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_enter;
    QLineEdit *textInputBox;

    void setupUi(QMainWindow *AutorizeWindow)
    {
        if (AutorizeWindow->objectName().isEmpty())
            AutorizeWindow->setObjectName("AutorizeWindow");
        AutorizeWindow->resize(1200, 800);
        centralwidget = new QWidget(AutorizeWindow);
        centralwidget->setObjectName("centralwidget");
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(0, 10, 1200, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(48);
        font.setBold(true);
        welcome_label->setFont(font);
        welcome_label->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 200, 1200, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font1.setPointSize(28);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        OK_Button = new QPushButton(centralwidget);
        OK_Button->setObjectName("OK_Button");
        OK_Button->setGeometry(QRect(750, 560, 350, 150));
        OK_Button->setFont(font1);
        RESET_Button = new QPushButton(centralwidget);
        RESET_Button->setObjectName("RESET_Button");
        RESET_Button->setGeometry(QRect(50, 560, 350, 150));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu")});
        font2.setPointSize(28);
        RESET_Button->setFont(font2);
        Keyboad_Box = new QGroupBox(centralwidget);
        Keyboad_Box->setObjectName("Keyboad_Box");
        Keyboad_Box->setGeometry(QRect(300, 370, 600, 400));
        pushButton_1 = new QPushButton(Keyboad_Box);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(20, 40, 100, 100));
        QFont font3;
        font3.setPointSize(20);
        pushButton_1->setFont(font3);
        pushButton_2 = new QPushButton(Keyboad_Box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 40, 100, 100));
        pushButton_2->setFont(font3);
        pushButton_3 = new QPushButton(Keyboad_Box);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 40, 100, 100));
        pushButton_3->setFont(font3);
        pushButton_4 = new QPushButton(Keyboad_Box);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 160, 100, 100));
        pushButton_4->setFont(font3);
        pushButton_5 = new QPushButton(Keyboad_Box);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 160, 100, 100));
        pushButton_5->setFont(font3);
        pushButton_6 = new QPushButton(Keyboad_Box);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(290, 160, 100, 100));
        pushButton_6->setFont(font3);
        pushButton_7 = new QPushButton(Keyboad_Box);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 280, 100, 100));
        pushButton_7->setFont(font3);
        pushButton_8 = new QPushButton(Keyboad_Box);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(150, 280, 100, 100));
        pushButton_8->setFont(font3);
        pushButton_9 = new QPushButton(Keyboad_Box);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(290, 280, 100, 100));
        pushButton_9->setFont(font3);
        pushButton_canel = new QPushButton(Keyboad_Box);
        pushButton_canel->setObjectName("pushButton_canel");
        pushButton_canel->setGeometry(QRect(430, 40, 150, 100));
        pushButton_canel->setFont(font3);
        pushButton_clear = new QPushButton(Keyboad_Box);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(430, 160, 150, 100));
        QFont font4;
        font4.setPointSize(12);
        pushButton_clear->setFont(font4);
        pushButton_enter = new QPushButton(Keyboad_Box);
        pushButton_enter->setObjectName("pushButton_enter");
        pushButton_enter->setGeometry(QRect(430, 280, 150, 100));
        pushButton_enter->setFont(font3);
        textInputBox = new QLineEdit(centralwidget);
        textInputBox->setObjectName("textInputBox");
        textInputBox->setGeometry(QRect(320, 300, 550, 70));
        QFont font5;
        font5.setPointSize(28);
        textInputBox->setFont(font5);
        AutorizeWindow->setCentralWidget(centralwidget);

        retranslateUi(AutorizeWindow);

        QMetaObject::connectSlotsByName(AutorizeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AutorizeWindow)
    {
        AutorizeWindow->setWindowTitle(QCoreApplication::translate("AutorizeWindow", "MainWindow", nullptr));
        welcome_label->setText(QCoreApplication::translate("AutorizeWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        label->setText(QCoreApplication::translate("AutorizeWindow", "\320\224\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        OK_Button->setText(QCoreApplication::translate("AutorizeWindow", "\320\236\320\232", nullptr));
        RESET_Button->setText(QCoreApplication::translate("AutorizeWindow", "\320\241\320\221\320\240\320\236\320\241", nullptr));
        Keyboad_Box->setTitle(QString());
        pushButton_1->setText(QCoreApplication::translate("AutorizeWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AutorizeWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AutorizeWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AutorizeWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AutorizeWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("AutorizeWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("AutorizeWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("AutorizeWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("AutorizeWindow", "9", nullptr));
        pushButton_canel->setText(QCoreApplication::translate("AutorizeWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("AutorizeWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pushButton_enter->setText(QCoreApplication::translate("AutorizeWindow", "\320\222\320\262\320\276\320\264", nullptr));
        textInputBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AutorizeWindow: public Ui_AutorizeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZE_H
