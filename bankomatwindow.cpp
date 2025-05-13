#include "bankomatwindow.h"
#include "databasemanager.h"
#include "autorize.h"
#include <QVBoxLayout>
#include <QTimer>


bankomatwindow::bankomatwindow(AutorizeWindow* parentWindow)
    : QMainWindow(parentWindow), ui(new Ui::bankomatwindow), m_parentWindow(parentWindow)
{
    ui->setupUi(this);
    ui->godbyeText->hide();
}

bankomatwindow::~bankomatwindow()
{
    delete ui;
}

//Снятие наличных
bool bankomatwindow::takeOffBalanceWiget(int sum) {

    if(!takeOffBalance(sum, this)) return false;

    // Скрываем старые элементы
    ui->takeBox->hide();
    ui->balanceButton->hide();
    ui->fillButton->hide();
    ui->exitButton->hide();

    // Создаем новое окно
    QWidget* balanceWidget = new QWidget(this);
    balanceWidget->setWindowTitle("Снять");
    balanceWidget->setMinimumSize(1200, 800);

    // Текст
    QLabel* label = new QLabel(balanceWidget);
    label->setText("Со счёта снято " + QString::number(sum) + " рублей");
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(24);
    font.setBold(true);
    label->setFont(font);

    // Кнопка "Назад"
    QPushButton* backButton = new QPushButton("Назад", balanceWidget);
    QFont btnFont = backButton->font();
    btnFont.setPointSize(24);
    backButton->setFont(btnFont);
    backButton->setFixedSize(400, 200);

    QWidget* buttonContainer = new QWidget(balanceWidget);
    QHBoxLayout* buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->addStretch();
    buttonLayout->addWidget(backButton);
    buttonLayout->addStretch();

    QVBoxLayout* layout = new QVBoxLayout(balanceWidget);
    layout->addStretch();
    layout->addWidget(label);
    layout->addSpacing(40);
    layout->addWidget(buttonContainer);
    layout->addStretch();

    balanceWidget->setLayout(layout);
    balanceWidget->show();

    // Обработка кнопки
    connect(backButton, &QPushButton::clicked, this, [=]() {
        ui->takeBox->show();
        ui->balanceButton->show();
        ui->fillButton->show();
        ui->exitButton->show();

        balanceWidget->close();
        balanceWidget->deleteLater();
    });

    return true;
}

//Завершение обслуживания (выход)
void bankomatwindow::on_exitButton_clicked()
{
    // Скрываем старые элементы
    ui->exitButton->hide();
    ui->takeBox->hide();
    ui->balanceButton->hide();
    ui->fillButton->hide();
    ui->godbyeText->show();

    // Через 3 секунды возвращаемся на страницу авторизации
    QTimer::singleShot(3000, this, [=]() {
        if (m_parentWindow) {
            m_parentWindow->resetToLoginState();
            m_parentWindow->show();
        }
        this->close();
        this->deleteLater();
    });

}

//Проверка баланса
void bankomatwindow::on_balanceButton_clicked()
{
    // Скрываем старые элементы
    ui->takeBox->hide();
    ui->balanceButton->hide();
    ui->fillButton->hide();
    ui->exitButton->hide();

    // Создаем новое окно
    QWidget* balanceWidget = new QWidget(this);
    balanceWidget->setWindowTitle("Баланс");
    balanceWidget->setMinimumSize(1200, 800);

    // Текст
    QLabel* label = new QLabel(balanceWidget);
    label->setText("Ваш баланс: " + checkBalance() + " рублей");
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(24);
    font.setBold(true);
    label->setFont(font);

    // Кнопка "Назад"
    QPushButton* backButton = new QPushButton("Назад", balanceWidget);
    QFont btnFont = backButton->font();
    btnFont.setPointSize(24);
    backButton->setFont(btnFont);
    backButton->setFixedSize(400, 200);

    QWidget* buttonContainer = new QWidget(balanceWidget);
    QHBoxLayout* buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->addStretch();
    buttonLayout->addWidget(backButton);
    buttonLayout->addStretch();

    QVBoxLayout* layout = new QVBoxLayout(balanceWidget);
    layout->addStretch();
    layout->addWidget(label);
    layout->addSpacing(40);
    layout->addWidget(buttonContainer);
    layout->addStretch();

    balanceWidget->setLayout(layout);
    balanceWidget->show();

    // Обработчик кнопки
    connect(backButton, &QPushButton::clicked, this, [=]() {
        ui->takeBox->show();
        ui->balanceButton->show();
        ui->fillButton->show();
        ui->exitButton->show();

        balanceWidget->close();
        balanceWidget->deleteLater();
    });



}

void bankomatwindow::on_takeButton_100_clicked() {takeOffBalanceWiget(100);}
void bankomatwindow::on_takeButton_500_clicked(){takeOffBalanceWiget(500);}
void bankomatwindow::on_takeButton_1000_clicked(){takeOffBalanceWiget(1000);}

//Вывод наличных на заданную сумму
void bankomatwindow::on_takeButton_other_clicked(){

    // Скрываем старые элементы
    ui->takeBox->hide();
    ui->balanceButton->hide();
    ui->fillButton->hide();
    ui->exitButton->hide();

    // Создаем новое окно
    QWidget* balanceWidget = new QWidget(this);
    balanceWidget->setWindowTitle("Снять");
    balanceWidget->setMinimumSize(1200, 800);

    // Текст
    QLabel* label = new QLabel(balanceWidget);
    label->setText("Введите сумму");
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(24);
    font.setBold(true);
    label->setFont(font);

    // Поле ввода
    QLineEdit* lineText = new QLineEdit(balanceWidget);
    lineText->setMaximumWidth(400);
    lineText->setAlignment(Qt::AlignHCenter);
    font = lineText->font();
    font.setPointSize(24);
    lineText->setFont(font);

    // Кнопка "Снять"
    QPushButton* takeButton = new QPushButton("Снять", balanceWidget);
    QFont btnFont = takeButton->font();
    btnFont.setPointSize(24);
    takeButton->setFont(btnFont);
    takeButton->setFixedSize(400, 200);

    // Кнопка "Назад"
    QPushButton* backButton = new QPushButton("Назад", balanceWidget);
    btnFont = backButton->font();
    btnFont.setPointSize(24);
    backButton->setFont(btnFont);
    backButton->setFixedSize(400, 200);

    // Контейнер для кнопок
    QWidget* buttonContainer = new QWidget(balanceWidget);
    QHBoxLayout* buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->addStretch();
    buttonLayout->addWidget(backButton);
    buttonLayout->addStretch();
    buttonLayout->addWidget(takeButton);
    buttonLayout->addStretch();

    QVBoxLayout* layout = new QVBoxLayout(balanceWidget);

    layout->addStretch();
    layout->addWidget(label);
    layout->addSpacing(40);
    layout->addWidget(lineText, 0, Qt::AlignHCenter);
    layout->addSpacing(40);
    layout->addWidget(buttonContainer);
    layout->addStretch();

    balanceWidget->setLayout(layout);
    balanceWidget->show();

    // Обработка кнопки "Снять"
    connect(takeButton, &QPushButton::clicked, this, [=]() {
        if(takeOffBalanceWiget(lineText->text().toInt())){
            balanceWidget->deleteLater();
        }
    });

    // Обработка кнопки "Назад"
    connect(backButton, &QPushButton::clicked, this, [=]() {

        balanceWidget->deleteLater();

        ui->takeBox->show();
        ui->balanceButton->show();
        ui->fillButton->show();
        ui->exitButton->show();
    });

}

// Внесение наличных на заданную сумму
void bankomatwindow::on_fillButton_clicked()
{
    // Скрываем старые элементы
    ui->takeBox->hide();
    ui->balanceButton->hide();
    ui->fillButton->hide();
    ui->exitButton->hide();

    // Создаем новое окно
    QWidget* balanceWidget = new QWidget(this);
    balanceWidget->setWindowTitle("Внести");
    balanceWidget->setMinimumSize(1200, 800);

    // Текст
    QLabel* label = new QLabel(balanceWidget);
    label->setText("Введите сумму");
    label->setAlignment(Qt::AlignCenter);
    QFont font = label->font();
    font.setPointSize(24);
    font.setBold(true);
    label->setFont(font);

    // Поле ввода
    QLineEdit* lineText = new QLineEdit(balanceWidget);
    lineText->setAlignment(Qt::AlignHCenter);
    font = lineText->font();
    font.setPointSize(24);
    lineText->setFont(font);

    // Кнопка "Пополнить"
    QPushButton* fillButton = new QPushButton("Пополнить", balanceWidget);
    QFont btnFont = fillButton->font();
    btnFont.setPointSize(24);
    fillButton->setFont(btnFont);
    fillButton->setFixedSize(400, 200);

    // Кнопка "Назад"
    QPushButton* backButton = new QPushButton("Назад", balanceWidget);
    btnFont = backButton->font();
    btnFont.setPointSize(24);
    backButton->setFont(btnFont);
    backButton->setFixedSize(400, 200);

    QWidget* buttonContainer = new QWidget(balanceWidget);
    QHBoxLayout* buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->addStretch();
    buttonLayout->addWidget(backButton);
    buttonLayout->addStretch();
    buttonLayout->addWidget(fillButton);
    buttonLayout->addStretch();

    QVBoxLayout* layout = new QVBoxLayout(balanceWidget);
    layout->addStretch();
    layout->addWidget(label);
    layout->addSpacing(40);
    layout->addWidget(lineText, 0, Qt::AlignHCenter);
    layout->addSpacing(40);
    layout->addWidget(buttonContainer);
    layout->addStretch();

    balanceWidget->setLayout(layout);
    balanceWidget->show();

    // Обработка кнопки "Назад"
    connect(backButton, &QPushButton::clicked, this, [=]() {

        balanceWidget->deleteLater();

        ui->takeBox->show();
        ui->balanceButton->show();
        ui->fillButton->show();
        ui->exitButton->show();
    });

    // Обработка кнопки "Пополнить"
    connect(fillButton, &QPushButton::clicked, this, [=]() {

        if(depositBalance(lineText->text().toInt(), this)){

            QString sum = lineText->text();
            balanceWidget->deleteLater();

            // Создаем новое окно
            QWidget* balanceWidget = new QWidget(this);
            balanceWidget->setWindowTitle("Снять");
            balanceWidget->setMinimumSize(1200, 800);

            // Текст
            QLabel* label = new QLabel(balanceWidget);
            label->setText("Счёт пополнен на " + sum + " рублей");
            label->setAlignment(Qt::AlignCenter);
            QFont font = label->font();
            font.setPointSize(24);
            font.setBold(true);
            label->setFont(font);

            // Кнопка "Назад"
            QPushButton* backButton = new QPushButton("Назад", balanceWidget);
            QFont btnFont = backButton->font();
            btnFont.setPointSize(24);
            backButton->setFont(btnFont);
            backButton->setFixedSize(400, 200);

            QWidget* buttonContainer = new QWidget(balanceWidget);
            QHBoxLayout* buttonLayout = new QHBoxLayout(buttonContainer);
            buttonLayout->addStretch();
            buttonLayout->addWidget(backButton);
            buttonLayout->addStretch();

            QVBoxLayout* layout = new QVBoxLayout(balanceWidget);
            layout->addStretch();
            layout->addWidget(label);
            layout->addSpacing(40);
            layout->addWidget(buttonContainer);
            layout->addStretch();

            balanceWidget->setLayout(layout);
            balanceWidget->show();

            // Обработка кнопки
            connect(backButton, &QPushButton::clicked, this, [=]() {
                ui->takeBox->show();
                ui->balanceButton->show();
                ui->fillButton->show();
                ui->exitButton->show();
                balanceWidget->close();
                balanceWidget->deleteLater();
            });
        }
    });
}

