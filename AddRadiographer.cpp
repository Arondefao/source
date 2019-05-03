#include "AddRadiographer.h"
#include "ui_addradiographer.h"

AddRadiographer::AddRadiographer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRadiographer)
{
    ui->setupUi(this);
}

AddRadiographer::~AddRadiographer()
{
    delete ui;
}
