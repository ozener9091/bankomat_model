#include "autorize.h"
#include "databasemanager.h"

AutorizeWindow::AutorizeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutorizeWindow)
{

    ui->setupUi(this);
    ui->Keyboad_Box->hide();
    ui->textInputBox->setAlignment(Qt::AlignHCenter);
}

AutorizeWindow::~AutorizeWindow()
{
    delete ui;
}

void AutorizeWindow::resetToLoginState()
{
    ui->textInputBox->clear();
    ui->textInputBox->setEchoMode(QLineEdit::Normal);
    ui->textInputBox->show();
    ui->Keyboad_Box->hide();

    ui->label->setText("Введите логин");
    ui->label->show();
    ui->OK_Button->show();
    ui->RESET_Button->show();
    ui->welcome_label->show();
}

void AutorizeWindow::on_RESET_Button_clicked()
{
    ui->textInputBox->setText("");
}

void AutorizeWindow::on_OK_Button_clicked()
{
    AutorizeWindow::UserID = checkLogin(ui->textInputBox->text());
    if(AutorizeWindow::UserID != 0) InputPINWindow();

}

void AutorizeWindow::InputPINWindow() {
    ui->label->setText("Введите ПИН-код");
    ui->textInputBox->setText("");
    ui->textInputBox->setEchoMode(QLineEdit::Password);
    ui->RESET_Button->hide();
    ui->OK_Button->hide();
    ui->Keyboad_Box->show();
}


