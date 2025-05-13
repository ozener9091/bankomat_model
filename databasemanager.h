#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>

bool connectToDatabase();
int checkLogin(const QString);
bool checkPIN(int);
QString checkBalance();
bool depositBalance(int, QWidget*);
bool takeOffBalance(int, QWidget*);

#endif // DATABASEMANAGER_H
