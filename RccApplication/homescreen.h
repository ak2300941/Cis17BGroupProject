#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class HomeScreen;
}

class HomeScreen : public QWidget
{
    Q_OBJECT

public:
    explicit HomeScreen(QWidget *parent = 0);
    ~HomeScreen();

public slots:
    void changePage(std::string);
private:
    Ui::HomeScreen *ui;
};

#endif // HOMESCREEN_H
