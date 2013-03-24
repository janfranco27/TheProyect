#include "ui_new_venta_factura.h"
#include "ui_ui_new_venta_factura.h"

ui_new_venta_factura::ui_new_venta_factura(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_factura)
{
    ui->setupUi(this);
}

ui_new_venta_factura::~ui_new_venta_factura()
{
    delete ui;
}
