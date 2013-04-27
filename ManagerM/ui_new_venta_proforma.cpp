#include "ui_new_venta_proforma.h"
#include "ui_ui_new_venta_proforma.h"

ui_new_venta_proforma::ui_new_venta_proforma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_proforma)
{
    ui->setupUi(this);
}

ui_new_venta_proforma::~ui_new_venta_proforma()
{
    delete ui;
}
