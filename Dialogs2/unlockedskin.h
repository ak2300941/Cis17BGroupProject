#ifndef UNLOCKEDSKIN_H
#define UNLOCKEDSKIN_H

#include <QDialog>

namespace Ui {
class unlockedSkin;
}

class unlockedSkin : public QDialog
{
    Q_OBJECT

public:
    explicit unlockedSkin(QWidget *parent = 0);
    ~unlockedSkin();

private:
    Ui::unlockedSkin *ui;
};

#endif // UNLOCKEDSKIN_H
