#ifndef ADDTUMOR_H
#define ADDTUMOR_H

#include <QWidget>

namespace Ui {
class AddTumor;
}

class AddTumor : public QWidget
{
    Q_OBJECT

public:
    explicit AddTumor(QWidget *parent = nullptr);
    ~AddTumor();

private:
    Ui::AddTumor *ui;
};

#endif // ADDTUMOR_H
