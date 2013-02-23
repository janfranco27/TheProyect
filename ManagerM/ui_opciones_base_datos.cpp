#include "ui_opciones_base_datos.h"
#include "ui_ui_opciones_base_datos.h"

ui_opciones_base_datos::ui_opciones_base_datos(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::ui_opciones_base_datos)
{
    ui->setupUi(this);
}

ui_opciones_base_datos::~ui_opciones_base_datos()
{
    delete ui;
}
