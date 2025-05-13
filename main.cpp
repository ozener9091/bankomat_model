#include "autorize.h"
#include "databasemanager.h">
#include <QApplication>

int main(int argc, char *argv[])
{
    if(connectToDatabase()){
        QApplication a(argc, argv);
        AutorizeWindow* w = new AutorizeWindow();
        w->show();
        return a.exec();
    }
    else return 1;

}
