#ifndef UNLOCKEDHAT_H
#define UNLOCKEDHAT_H

#include <QDialog>

namespace Ui {
class unlockedHat;
}

class unlockedHat : public QDialog
{
    Q_OBJECT

public:
    explicit unlockedHat(QWidget *parent = 0);
    ~unlockedHat();

private:
    Ui::unlockedHat *ui;
};

#endif // UNLOCKEDHAT_H
