#ifndef DELACCOUNT_H
#define DELACCOUNT_H

#include <QDialog>

namespace Ui {
class delAccount;
}

class delAccount : public QDialog
{
    Q_OBJECT

public:
    explicit delAccount(QWidget *parent = 0);
    ~delAccount();

private:
    Ui::delAccount *ui;
};

#endif // DELACCOUNT_H
