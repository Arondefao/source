#include "MyData.h"
#include "ui_MyData.h"

MyData::MyData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyData)
{
    ui->setupUi(this);
}

MyData::~MyData()
{
    delete ui;
}
