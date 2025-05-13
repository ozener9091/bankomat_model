#include <databasemanager.h>
#include <qmessagebox.h>
#include <autorize.h>


bool connectToDatabase()
{
    // Путь к файлу базы данных
    QString dbPath = "users.db";

    // Проверяем существование файла БД
    bool dbExists = QFile::exists(dbPath);
    if(!dbExists) {
        qDebug() << "Ошибка подключения: файл БД не найден";
        return false;
    }

    // Создаем и открываем базу данных
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Ошибка подключения:" << db.lastError().text();
        return false;
    }

    qDebug() << "Успешное подключение к БД";
    return true;
}

int checkLogin(const QString userLogin)
{
    if(userLogin.isEmpty()) {
        QMessageBox::warning(nullptr, "Ошибка", "Поле ввода пустое.");
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE login = :login");
    query.bindValue(":login", userLogin);

    if(!query.exec()) {
        QMessageBox::critical(nullptr, "Ошибка БД", "Ошибка выполнения запроса: " + query.lastError().text());
        return 0;
    }

    if(query.next()) {
        return query.value(0).toInt();
    }

    QMessageBox::warning(nullptr, "Ошибка", "Пользователь с таким логином не найден");
    return 0;
}

bool checkPIN(int userPIN)
{
    QSqlQuery query;
    query.prepare("SELECT pin FROM users WHERE id = :id");
    query.bindValue(":id", AutorizeWindow::UserID);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        int dbPIN = query.value(0).toInt();
        if (userPIN == dbPIN) return true;
    }

    QMessageBox::critical(nullptr, "Ошибка", "Неверный pin-код");
    return false;
}

QString checkBalance() {

    QSqlQuery query;
    query.prepare("SELECT balance FROM users WHERE id = :id");
    query.bindValue(":id", AutorizeWindow::UserID);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Ошибка БД", "Ошибка выполнения запроса: " + query.lastError().text());
        return QString();;
    }

    if (query.next()) {
        return query.value(0).toString();
    } else {
        QMessageBox::critical(nullptr, "Пользователь не найден", "Пользователь с таким ID не найден.");
        return QString();;
    }
}

bool depositBalance(int sum, QWidget* parent = nullptr) {

    if(sum % 50 != 0 && sum % 100 != 0) {
        QMessageBox::critical(parent, "Ошибка", "Сумма должна быть кратна купюрам '50', '100', '500', '1000'");
        return false;
    }

    if(sum <= 0) {
        QMessageBox::critical(parent, "Ошибка", "Сумма должна быть положительной");
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE users SET balance = balance + :sum WHERE id = :id");
    query.bindValue(":sum", sum);
    query.bindValue(":id", AutorizeWindow::UserID);

    if (!query.exec()) {
        QMessageBox::critical(parent, "Ошибка БД", "Ошибка пополнения баланса: " + query.lastError().text());
        return false;
    }

    return true;
}

bool takeOffBalance(int sum, QWidget* parent = nullptr) {


    if (AutorizeWindow::UserID <= 0) {
        qDebug() << "Неверный UserID:" << AutorizeWindow::UserID;
        QMessageBox::critical(parent, "Ошибка", "Вы не авторизованы!");
        return false;
    }

    if(sum % 100 != 0) {
        QMessageBox::critical(parent, "Ошибка", "Сумма должна быть кратна купюрам '100', '500', '1000'");
        return false;
    }

    if(sum <= 0) {
        QMessageBox::critical(parent, "Ошибка", "Сумма должна быть положительной");
        return false;
    }

    int balance = 0;

    QSqlQuery query;
    query.prepare("SELECT balance FROM users WHERE id = :id");
    query.bindValue(":id", AutorizeWindow::UserID);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        balance =  query.value(0).toInt();
    } else {
        QMessageBox::warning(parent, "Пользователь не найден", "Пользователь с таким ID не найден.");
        return false;
    }

    if((balance - sum) < 0){
        QMessageBox::warning(parent, "Ошибка", "На счёте недостаточно средств");
        return false;
    }

    query.prepare("UPDATE users SET balance = balance - :sum WHERE id = :id");
    query.bindValue(":sum", sum);
    query.bindValue(":id", AutorizeWindow::UserID);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Ошибка БД", "Ошибка снятия денег: " + query.lastError().text());
        return false;
    }

    return true;
}
