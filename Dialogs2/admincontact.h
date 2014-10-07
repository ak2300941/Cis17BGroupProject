#ifndef ADMINCONTACT_H
#define ADMINCONTACT_H

#include <QDialog>

namespace Ui {
class adminContact;
}

class adminContact : public QDialog
{
    Q_OBJECT

public:
    explicit adminContact(QWidget *parent = 0);
    ~adminContact();

private:
    Ui::adminContact *ui;
};

#endif // ADMINCONTACT_H
