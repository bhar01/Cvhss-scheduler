#ifndef CVV_H
#define CVV_H

#include <QMainWindow>

namespace Ui {
class cvv;
}

class cvv : public QMainWindow
{
    Q_OBJECT

public:
    explicit cvv(QWidget *parent = nullptr);
    ~cvv();

 public slots:
    void page();
    void page1();
    void time();

private:
    Ui::cvv *ui;



};

#endif // CVV_H
