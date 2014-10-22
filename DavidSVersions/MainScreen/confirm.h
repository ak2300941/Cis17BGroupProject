#ifndef CONFIRM_H
#define CONFIRM_H

#include <QWidget>

namespace Ui {
class Confirm;
}

class Confirm : public QWidget
{
    Q_OBJECT

public:
    explicit Confirm(QWidget *parent = 0);
    ~Confirm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Confirm *ui;
};

#endif // CONFIRM_H
