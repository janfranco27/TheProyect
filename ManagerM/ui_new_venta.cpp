#include "ui_new_venta.h"
#include "ui_ui_new_venta.h"

ui_new_venta::ui_new_venta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta)
{
    ui->setupUi(this);
}

ui_new_venta::~ui_new_venta()
{
    delete ui;
}
