#ifndef ADDXRAY_H
#define ADDXRAY_H

#include <QWidget>

namespace Ui {
class AddXray;
}

class AddXray : public QWidget
{
    Q_OBJECT

public:
    explicit AddXray(QWidget *parent = nullptr);
    ~AddXray();

private:
    Ui::AddXray *ui;
};

#endif // ADDXRAY_H
