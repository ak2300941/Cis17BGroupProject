#ifndef FEELINGLUCKY_H
#define FEELINGLUCKY_H

#include <QDialog>

namespace Ui {
class feelingLucky;
}

class feelingLucky : public QDialog
{
    Q_OBJECT

public:
    explicit feelingLucky(QWidget *parent = 0);
    ~feelingLucky();

private:
    Ui::feelingLucky *ui;
};

#endif // FEELINGLUCKY_H
