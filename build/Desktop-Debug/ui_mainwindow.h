/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(270, 10, 241, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(16);
        welcome_label->setFont(font);
        welcome_label->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 321, 101));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        OK_Button = new QPushButton(centralwidget);
        OK_Button->setObjectName("OK_Button");
        OK_Button->setGeometry(QRect(480, 330, 241, 81));
        RESET_Button = new QPushButton(centralwidget);
        RESET_Button->setObjectName("RESET_Button");
        RESET_Button->setGeometry(QRect(60, 330, 241, 81));
        Keyboad_Box = new QGroupBox(centralwidget);
        Keyboad_Box->setObjectName("Keyboad_Box");
        Keyboad_Box->setGeometry(QRect(170, 220, 431, 281));
        pushButton_1 = new QPushButton(Keyboad_Box);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(10, 30, 71, 61));
        pushButton_2 = new QPushButton(Keyboad_Box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 30, 71, 61));
        pushButton_3 = new QPushButton(Keyboad_Box);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 30, 71, 61));
        pushButton_4 = new QPushButton(Keyboad_Box);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 110, 71, 61));
        pushButton_5 = new QPushButton(Keyboad_Box);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 110, 71, 61));
        pushButton_6 = new QPushButton(Keyboad_Box);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(210, 110, 71, 61));
        pushButton_7 = new QPushButton(Keyboad_Box);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 190, 71, 61));
        pushButton_8 = new QPushButton(Keyboad_Box);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 190, 71, 61));
        pushButton_9 = new QPushButton(Keyboad_Box);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(210, 190, 71, 61));
        pushButton_canel = new QPushButton(Keyboad_Box);
        pushButton_canel->setObjectName("pushButton_canel");
        pushButton_canel->setGeometry(QRect(300, 30, 111, 61));
        pushButton_clear = new QPushButton(Keyboad_Box);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(300, 110, 111, 61));
        pushButton_enter = new QPushButton(Keyboad_Box);
        pushButton_enter->setObjectName("pushButton_enter");
        pushButton_enter->setGeometry(QRect(300, 190, 111, 61));
        textInputBox = new QLineEdit(centralwidget);
        textInputBox->setObjectName("textInputBox");
        textInputBox->setGeometry(QRect(210, 140, 351, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcome_label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        OK_Button->setText(QCoreApplication::translate("MainWindow", "\320\236\320\232", nullptr));
        RESET_Button->setText(QCoreApplication::translate("MainWindow", "\320\241\320\221\320\240\320\236\320\241", nullptr));
        Keyboad_Box->setTitle(QString());
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_canel->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\321\200\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        pushButton_enter->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
