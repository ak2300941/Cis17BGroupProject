#ifndef DIALOGUEGALORE_H
#define DIALOGUEGALORE_H

#include <QWidget>
namespace Ui {
class DialogueGalore;
}

class DialogueGalore : public QWidget
{
    Q_OBJECT

public:
    explicit DialogueGalore(QWidget *parent = 0);
    ~DialogueGalore();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::DialogueGalore *ui;
};

#endif // DIALOGUEGALORE_H
