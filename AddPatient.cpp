#include "AddPatient.h"
#include "ui_AddPatient.h"

AddPatient::AddPatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddPatient)
{
    ui->setupUi(this);
}

AddPatient::~AddPatient()
{
    delete ui;
}
