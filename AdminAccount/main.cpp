#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Administrator");
    w.setFixedSize(750,500);
    w.show();

    return a.exec();
}
