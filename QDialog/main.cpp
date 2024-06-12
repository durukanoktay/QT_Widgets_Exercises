#include "dialog.h"

#include <QApplication>
// QTDialog inherits QTWidget
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
