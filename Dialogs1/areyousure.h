#ifndef AREYOUSURE_H
#define AREYOUSURE_H

#include <QWidget>

namespace Ui {
class AreYouSure;
}

class AreYouSure : public QWidget
{
    Q_OBJECT

public:
    explicit AreYouSure(QWidget *parent = 0);
    ~AreYouSure();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AreYouSure *ui;
};

#endif // AREYOUSURE_H
