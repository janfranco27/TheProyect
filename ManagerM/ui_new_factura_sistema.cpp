#include "ui_new_factura_sistema.h"
#include "ui_ui_new_factura_sistema.h"

ui_new_factura_sistema::ui_new_factura_sistema(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_factura_sistema)
{
    ui->setupUi(this);
}

ui_new_factura_sistema::~ui_new_factura_sistema()
{
    delete ui;
}
