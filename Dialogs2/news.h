#ifndef NEWS_H
#define NEWS_H

#include <QDialog>

namespace Ui {
class news;
}

class news : public QDialog
{
    Q_OBJECT

public:
    explicit news(QWidget *parent = 0);
    ~news();

private:
    Ui::news *ui;
};

#endif // NEWS_H
