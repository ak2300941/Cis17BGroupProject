#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QGraphicsScene"
#include "QtCore"
#include "QtGui"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
};

#endif // MAINWINDOW_H
