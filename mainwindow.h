#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QPushButton>
#include <QAction>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showCardWindow();
    void clearFields();

private:
    QLineEdit *lastNameEdit;
    QLineEdit *firstNameEdit;
    QSpinBox *ageSpin;
    QComboBox *cityCombo;

    QPushButton *showButton;
    QPushButton *clearButton;

    QAction *showAction;
    QAction *exitAction;
};

#endif