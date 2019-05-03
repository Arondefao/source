#include "AddPublication.h"
#include "ui_AddPublication.h"

AddPublication::AddPublication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddPublication)
{
    ui->setupUi(this);
}

AddPublication::~AddPublication()
{
    delete ui;
}
