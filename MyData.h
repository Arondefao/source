#ifndef MYDATA_H
#define MYDATA_H

#include <QWidget>

namespace Ui {
class MyData;
}

class MyData : public QWidget
{
    Q_OBJECT

public:
    explicit MyData(QWidget *parent = nullptr);
    ~MyData();

private:
    Ui::MyData *ui;
};

#endif // MYDATA_H
