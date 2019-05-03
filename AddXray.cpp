#include "AddXray.h"
#include "ui_AddXray.h"

AddXray::AddXray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddXray)
{
    ui->setupUi(this);
}

AddXray::~AddXray()
{
    delete ui;
}
