#ifndef LOGOUT_H
#define LOGOUT_H

#include <QWidget>

namespace Ui {
class Logout;
}

class Logout : public QWidget
{
    Q_OBJECT

public:
    explicit Logout(QWidget *parent = 0);
    ~Logout();

private:
    Ui::Logout *ui;
};

#endif // LOGOUT_H
