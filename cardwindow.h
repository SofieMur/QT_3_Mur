#ifndef CARDWINDOW_H
#define CARDWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QVBoxLayout>

class CardWindow : public QWidget
{
    Q_OBJECT

public:
    CardWindow(const QString &lastName, const QString &firstName, int age, const QString &city, QWidget *parent = nullptr);

private:
    QLabel *lastNameValue;
    QLabel *firstNameValue;
    QLabel *ageValue;
    QLabel *cityValue;
};

#endif
