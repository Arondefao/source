#ifndef ADDPATIENT_H
#define ADDPATIENT_H

#include <QWidget>

namespace Ui {
class AddPatient;
}

class AddPatient : public QWidget
{
    Q_OBJECT

public:
    explicit AddPatient(QWidget *parent = nullptr);
    ~AddPatient();

private:
    Ui::AddPatient *ui;
};

#endif // ADDPATIENT_H
