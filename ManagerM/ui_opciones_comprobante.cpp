#include "ui_opciones_comprobante.h"
#include "ui_ui_opciones_comprobante.h"

ui_opciones_comprobante::ui_opciones_comprobante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_comprobante)
{
    ui->setupUi(this);
}

ui_opciones_comprobante::~ui_opciones_comprobante()
{
    delete ui;
}
