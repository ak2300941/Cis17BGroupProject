#ifndef WEATHER_H
#define WEATHER_H

#include <QDialog>

namespace Ui {
class weather;
}

class weather : public QDialog
{
    Q_OBJECT

public:
    explicit weather(QWidget *parent = 0);
    ~weather();

private:
    Ui::weather *ui;
};

#endif // WEATHER_H
