#include "ui_opciones_tienda.h"
#include "ui_ui_opciones_tienda.h"

ui_opciones_tienda::ui_opciones_tienda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_tienda)
{
    ui->setupUi(this);
}

ui_opciones_tienda::~ui_opciones_tienda()
{
    delete ui;
}
