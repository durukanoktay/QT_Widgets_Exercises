#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QVariant>
#include <QSettings>
#include <QMessageBox>
#include <QMainWindow>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::MainWindow *ui;
    void init();
    void save();
    void load();
};
#endif // MAINWINDOW_H
