#ifndef TIMEDATE_H
#define TIMEDATE_H

#include <QWidget>

namespace Ui {
class TimeDate;
}

class TimeDate : public QWidget
{
    Q_OBJECT

public:
    explicit TimeDate(QWidget *parent = 0);
    ~TimeDate();

private:
    Ui::TimeDate *ui;
};

#endif // TIMEDATE_H
