#ifndef CURRENT_NEW_H
#define CURRENT_NEW_H

#include <QDialog>

namespace Ui {
class current_New;
}

class current_New : public QDialog
{
    Q_OBJECT

public:
    explicit current_New(QWidget *parent = 0);
    ~current_New();

private slots:
    void on_pushButton_clicked();

private:
    Ui::current_New *ui;
};

#endif // CURRENT_NEW_H
