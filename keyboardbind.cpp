#include "databasemanager.h"
#include <bankomatwindow.h>
#include <autorize.h>

void AutorizeWindow::on_pushButton_1_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '1');
    }

}
void AutorizeWindow::on_pushButton_2_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '2');
    }
}
void AutorizeWindow::on_pushButton_3_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '3');
    }
}
void AutorizeWindow::on_pushButton_4_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '4');
    }

}
void AutorizeWindow::on_pushButton_5_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '5');
    }
}
void AutorizeWindow::on_pushButton_6_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '6');
    }
}
void AutorizeWindow::on_pushButton_7_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '7');
    }
}
void AutorizeWindow::on_pushButton_8_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '8');
    }
}
void AutorizeWindow::on_pushButton_9_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '9');
    }
}
void AutorizeWindow::on_pushButton_0_clicked()
{
    if(ui->textInputBox->text().length() < 4){
        ui->textInputBox->setText(ui->textInputBox->text() + '0');
    }
}
void AutorizeWindow::on_pushButton_canel_clicked()
{
    ui->textInputBox->setText("");
}
void AutorizeWindow::on_pushButton_clear_clicked()
{
    QString currentText = ui->textInputBox->text();
    currentText.chop(1);
    ui->textInputBox->setText(currentText);
}
void AutorizeWindow::on_pushButton_enter_clicked()
{
    if(checkPIN(ui->textInputBox->text().toInt()))
    {
        ui->textInputBox->hide();
        ui->Keyboad_Box->hide();
        ui->OK_Button->hide();
        ui->RESET_Button->hide();
        ui->label->hide();
        ui->welcome_label->hide();

        bankomatwindow* bankWindow = new bankomatwindow(this);
        bankWindow->show();
        this->hide();

        ui->welcome_label->show();
        ui->textInputBox->show();
        ui->label->show();
        ui->OK_Button->show();

    }
}
