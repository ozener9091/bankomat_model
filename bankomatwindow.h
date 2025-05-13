#ifndef BANKOMATWINDOW_H
#define BANKOMATWINDOW_H

#include <QMainWindow>
#include "autorize.h"
#include "ui_bankomatwindow.h"

namespace Ui {
class bankomatwindow;
}

class bankomatwindow : public QMainWindow
{
    Q_OBJECT

public:
    ~bankomatwindow();
    explicit bankomatwindow(AutorizeWindow* parentWindow);



private slots:

    void on_exitButton_clicked();

    void on_balanceButton_clicked();

    void on_takeButton_100_clicked();

    void on_takeButton_500_clicked();

    void on_takeButton_1000_clicked();

    void on_takeButton_other_clicked();

    bool takeOffBalanceWiget(int);



    void on_fillButton_clicked();

private:
    AutorizeWindow* m_parentWindow;
    Ui::bankomatwindow *ui;
};

#endif // BANKOMATWINDOW_H
