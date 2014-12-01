#ifndef NEWTHREAD_H
#define NEWTHREAD_H

#include <QDialog>

namespace Ui {
class newThread;
}

class newThread : public QDialog
{
    Q_OBJECT

public:
    explicit newThread(QWidget *parent = 0);
    ~newThread();

private slots:
    void on_selectType_currentTextChanged(const QString &arg1);

    void on_selectType_activated(const QString &arg1);

    void on_checkBox_clicked();

    void on_pushButton_clicked();

private:
    Ui::newThread *ui;
};

#endif // NEWTHREAD_H
