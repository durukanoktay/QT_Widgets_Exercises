#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::critical(this, "You are not hungary!", "Have a great day :)");
}


void MainWindow::on_pushButton_2_clicked()
{
    QString drink = getoption(ui->groupBox);
    QString sausace = getoption(ui->groupBox_2);
    QString meat = getoption(ui->groupBox_3);

    QString order;
    order += "Order:\r\n";
    order += "Flavor: " + meat + "\r\n";
    order += "Topping: " + sausace + "\r\n";
    order += "Syrup: " + drink + "\r\n";

    QMessageBox::information(this,"Order", order);

}

QString MainWindow::getoption(QObject *obj)
{

    QString value = "None";
    QList<QRadioButton*> lst = obj->findChildren<QRadioButton*>(QString(),Qt::FindDirectChildrenOnly);

    foreach(QRadioButton* rdo, lst)
    {
        if(rdo->isChecked())
        {
            value = rdo->text();
            break;
        }
    }

    return value;
}

