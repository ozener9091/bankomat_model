#ifndef AUTORIZE_H
#define AUTORIZE_H

#include <QMainWindow>
#include <QKeyEvent>
#include "ui_autorize.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class AutorizeWindow;
}
QT_END_NAMESPACE

class AutorizeWindow : public QMainWindow
{
    Q_OBJECT

public:
    inline static int UserID = 0;
    AutorizeWindow(QWidget *parent = nullptr);
    ~AutorizeWindow();
    void resetToLoginState();
    void setEnterHandlerEnabled(bool enabled);


private slots:

    void InputPINWindow();

    void on_RESET_Button_clicked();

    void on_OK_Button_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_canel_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_enter_clicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;
private:

    inline static bool m_enterHandlerEnabled = true;
    Ui::AutorizeWindow *ui;
};
#endif // AUTORIZE_H
