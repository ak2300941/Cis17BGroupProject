#ifndef DELACCOUNT_H
#define DELACCOUNT_H

#include <QWidget>

namespace Ui {
class DelAccount;
}

class DelAccount : public QWidget
{
    Q_OBJECT

public:
    explicit DelAccount(QWidget *parent = 0);
    ~DelAccount();

private slots:
    void on_Delete_clicked();

private:
    Ui::DelAccount *ui;
};

#endif // DELACCOUNT_H
