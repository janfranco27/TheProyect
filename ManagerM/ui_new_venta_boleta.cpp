#include "ui_new_venta_boleta.h"
#include "ui_ui_new_venta_boleta.h"

ui_new_venta_boleta::ui_new_venta_boleta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_boleta)
{
    ui->setupUi(this);
}

ui_new_venta_boleta::~ui_new_venta_boleta()
{
    delete ui;
}
