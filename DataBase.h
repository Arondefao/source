#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>

namespace Ui {
class DataBase;
}

class DataBase : public QWidget
{
    Q_OBJECT

public:
    explicit DataBase(QWidget *parent = nullptr);
    ~DataBase();

private:
    Ui::DataBase *ui;
};

#endif // DATABASE_H
