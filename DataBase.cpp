#include "DataBase.h"
#include "ui_DataBase.h"

DataBase::DataBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataBase)
{
    ui->setupUi(this);
}

DataBase::~DataBase()
{
    delete ui;
}
