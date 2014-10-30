#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "afterloginmenu.h"
#include "forgot.h"
#include "newaccount.h"
#include <QPainter>
#include <QGraphicsScene>
#include <Qwidget>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);

    //setWindowTitle(tr("Analog Clock"));
    //resize(200, 200);

    ui->setupUi(this);
    QPixmap bkgnd(":/rccTiger.jpg");
    //bkgnd=bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    /*
    QPainter painter(this);
    QPalette thing;
    thing.setBrush(QPalette::Window, Qt::black);
    painter.drawConvexPolygon(point,3);
    */
    //! [0] //! [2]

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    AfterLoginMenu *k=new AfterLoginMenu;
    k->show();
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    NewAccount *k=new NewAccount;
    k->show();
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
void MainWindow::paintEvent(QPaintEvent *)
{

    QColor hourColor(249, 141, 32);
    QColor minuteColor(Qt::darkGray);

    QTime time = QTime::currentTime();

    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);
    //painter.scale(side / 200.0, side / 200.0);
    /*
    painter.setPen(Qt::NoPen);
    painter.setBrush(hourColor);

    painter.save();
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();
    */
    painter.translate(width() / 2 -10 , height() * .25 + 30);
    painter.scale(1.52, 1.52);
    painter.setPen(hourColor);
    painter.rotate(time.second());
    QPen k=painter.pen();
    k.setWidth(2);
    painter.setPen(k);

    for (int i = 0; i < 60; ++i) {
        painter.drawLine(105, 0, 90, 0);
        painter.rotate(30.0);
    }
    /*
    painter.setPen(Qt::NoPen);
    painter.setBrush(minuteColor);

    painter.save();
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
    painter.drawConvexPolygon(minuteHand, 3);
    painter.restore();
    */
    painter.rotate(time.second());
    painter.setPen(minuteColor);
    k=painter.pen();
    k.setWidth(2);
    painter.setPen(k);

    for (int j = 0; j < 60; ++j) {
        if ((j % 2) != 0)
            painter.drawLine(100, 0, 90, 0);
            painter.rotate(15.0);
    }
}

