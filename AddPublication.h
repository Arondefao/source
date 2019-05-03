#ifndef ADDPUBLICATION_H
#define ADDPUBLICATION_H

#include <QWidget>

namespace Ui {
class AddPublication;
}

class AddPublication : public QWidget
{
    Q_OBJECT

public:
    explicit AddPublication(QWidget *parent = nullptr);
    ~AddPublication();

private:
    Ui::AddPublication *ui;
};

#endif // ADDPUBLICATION_H
