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

void ui_new_venta_factura::printValues(_QSTR a1,_QSTR a2)
{
    ui->lineEdit_ruc->setText(a1);
    ui->lineEdit_nombre->setText(a2);
}
void ui_new_venta_factura::on_pushButton_clicked()
{
    ui_search_cliente *search_cliente=new ui_search_cliente;

    //trying

    connect(search_cliente,SIGNAL(returnInformation(_QSTR,_QSTR)),this,SLOT(printValues(_QSTR,_QSTR)));
    search_cliente->open();
}
