#include "AddTumor.h"
#include "ui_AddTumor.h"

AddTumor::AddTumor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTumor)
{
    ui->setupUi(this);
}

AddTumor::~AddTumor()
{
    delete ui;
}
