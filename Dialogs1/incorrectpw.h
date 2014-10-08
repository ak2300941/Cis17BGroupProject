#ifndef INCORRECTPW_H
#define INCORRECTPW_H

#include <QWidget>

namespace Ui {
class IncorrectPW;
}

class IncorrectPW : public QWidget
{
    Q_OBJECT

public:
    explicit IncorrectPW(QWidget *parent = 0);
    ~IncorrectPW();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IncorrectPW *ui;
};

#endif // INCORRECTPW_H
