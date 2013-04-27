#include "ui_new_venta_cotizacion.h"
#include "ui_ui_new_venta_cotizacion.h"

ui_new_venta_cotizacion::ui_new_venta_cotizacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_cotizacion)
{
    ui->setupUi(this);
}

ui_new_venta_cotizacion::~ui_new_venta_cotizacion()
{
    delete ui;
}
