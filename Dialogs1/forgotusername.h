#ifndef FORGOTUSERNAME_H
#define FORGOTUSERNAME_H

#include <QWidget>

namespace Ui {
class ForgotUsername;
}

class ForgotUsername : public QWidget
{
    Q_OBJECT

public:
    explicit ForgotUsername(QWidget *parent = 0);
    ~ForgotUsername();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ForgotUsername *ui;
};

#endif // FORGOTUSERNAME_H
