#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Анкета");
    setFixedSize(350, 250);

    QMenu *fileMenu = menuBar()->addMenu("Файл");
    showAction = fileMenu->addAction("Показать карточку");
    exitAction = fileMenu->addAction("Выход");

    QWidget *central = new QWidget(this);
    setCentralWidget(central);
    QVBoxLayout *mainLayout = new QVBoxLayout(central);

    QFormLayout *formLayout = new QFormLayout();

    lastNameEdit = new QLineEdit(this);
    lastNameEdit->setPlaceholderText("Введите фамилию");
    formLayout->addRow("Фамилия:", lastNameEdit);

    firstNameEdit = new QLineEdit(this);
    firstNameEdit->setPlaceholderText("Введите имя");
    formLayout->addRow("Имя:", firstNameEdit);

    ageSpin = new QSpinBox(this);
    ageSpin->setRange(1, 120);
    formLayout->addRow("Возраст:", ageSpin);

    cityCombo = new QComboBox(this);
    cityCombo->addItem("Москва");
    cityCombo->addItem("Санкт-Петербург");
    cityCombo->addItem("Казань");
    cityCombo->addItem("Белгород");
    formLayout->addRow("Город:", cityCombo);

    mainLayout->addLayout(formLayout);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    showButton = new QPushButton("Показать карточку", this);
    clearButton = new QPushButton("Очистить", this);

    buttonLayout->addWidget(showButton);
    buttonLayout->addWidget(clearButton);

    mainLayout->addLayout(buttonLayout);
}

MainWindow::~MainWindow()
{
}