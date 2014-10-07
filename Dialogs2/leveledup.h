#ifndef LEVELEDUP_H
#define LEVELEDUP_H

#include <QDialog>

namespace Ui {
class leveledUp;
}

class leveledUp : public QDialog
{
    Q_OBJECT

public:
    explicit leveledUp(QWidget *parent = 0);
    ~leveledUp();

private:
    Ui::leveledUp *ui;
};

#endif // LEVELEDUP_H
