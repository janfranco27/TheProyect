#include "ui_module_ventas.h"
#include "ui_ui_module_ventas.h"

ui_module_ventas::ui_module_ventas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_ventas)
{
    ui->setupUi(this);
}

ui_module_ventas::~ui_module_ventas()
{
    delete ui;
}
