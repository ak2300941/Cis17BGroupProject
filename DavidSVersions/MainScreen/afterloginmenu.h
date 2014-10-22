#ifndef AFTERLOGINMENU_H
#define AFTERLOGINMENU_H

#include <QWidget>

namespace Ui {
class AfterLoginMenu;
}

class AfterLoginMenu : public QWidget
{
    Q_OBJECT

public:
    explicit AfterLoginMenu(QWidget *parent = 0);
    ~AfterLoginMenu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::AfterLoginMenu *ui;
};

#endif // AFTERLOGINMENU_H
