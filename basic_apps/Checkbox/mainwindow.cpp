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
    QString eklenen;
    QObjectList boxes = this->children();
    foreach(QObject* obj, boxes)
    {
        if(obj->inherits("QCheckBox"))
        {
            QCheckBox* box = qobject_cast<QCheckBox*>(obj);
            if(box && box->isChecked())
            {
                eklenen += box->text() + "\t";
            }
        }
    }
    QMessageBox::information(this,"eklenen","Eklenenler:\r\n" + eklenen);
}

