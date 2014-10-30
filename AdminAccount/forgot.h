#ifndef FORGOT_H
#define FORGOT_H

#include <QWidget>

namespace Ui {
class Forgot;
}

class Forgot : public QWidget
{
    Q_OBJECT

public:
    explicit Forgot(QWidget *parent = 0);
    ~Forgot();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Forgot *ui;
};

#endif // FORGOT_H

