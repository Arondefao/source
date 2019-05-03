#ifndef CANCERDATA_H
#define CANCERDATA_H

#include <QMainWindow>

namespace Ui {
class CancerData;
}

class CancerData : public QMainWindow
{
    Q_OBJECT

public:
    explicit CancerData(QWidget *parent = nullptr);
    ~CancerData();

private:
    Ui::CancerData *ui;
};

#endif // CANCERDATA_H
