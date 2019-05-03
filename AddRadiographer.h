#ifndef ADDRADIOGRAPHER_H
#define ADDRADIOGRAPHER_H

#include <QWidget>

namespace Ui {
class AddRadiographer;
}

class AddRadiographer : public QWidget
{
    Q_OBJECT

public:
    explicit AddRadiographer(QWidget *parent = nullptr);
    ~AddRadiographer();

private:
    Ui::AddRadiographer *ui;
};

#endif // ADDRADIOGRAPHER_H
