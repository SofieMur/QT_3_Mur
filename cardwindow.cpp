#include "cardwindow.h"

CardWindow::CardWindow(const QString &lastName, const QString &firstName, int age, const QString &city, QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Карточка участника");
    setFixedSize(300, 200);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QGridLayout *grid = new QGridLayout();

    grid->addWidget(new QLabel("Фамилия:", this), 0, 0);
    grid->addWidget(new QLabel("Имя:", this), 1, 0);
    grid->addWidget(new QLabel("Возраст:", this), 2, 0);
    grid->addWidget(new QLabel("Город:", this), 3, 0);

    lastNameValue = new QLabel(lastName, this);
    firstNameValue = new QLabel(firstName, this);
    ageValue = new QLabel(QString::number(age), this);
    cityValue = new QLabel(city, this);

    grid->addWidget(lastNameValue, 0, 1);
    grid->addWidget(firstNameValue, 1, 1);
    grid->addWidget(ageValue, 2, 1);
    grid->addWidget(cityValue, 3, 1);

    mainLayout->addLayout(grid);

    QPushButton *closeButton = new QPushButton("Закрыть", this);
    mainLayout->addWidget(closeButton);

    connect(closeButton, &QPushButton::clicked, this, &QWidget::close);
}