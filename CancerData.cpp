#include "CancerData.h"
#include "ui_CancerData.h"

CancerData::CancerData(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CancerData)
{
    ui->setupUi(this);
}

CancerData::~CancerData()
{
    delete ui;
}
