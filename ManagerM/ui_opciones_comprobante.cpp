#include "ui_opciones_comprobante.h"
#include "ui_ui_opciones_comprobante.h"

ui_opciones_comprobante::ui_opciones_comprobante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_comprobante)
{
    ui->setupUi(this);

    pk_boleta = "";
    pk_factura = "";

    model_boletas = new QSqlQueryModel;
    model_facturas = new QSqlQueryModel;

    update_table_boletas();
    update_table_facturas();
}

ui_opciones_comprobante::~ui_opciones_comprobante()
{
    delete ui;
}

void ui_opciones_comprobante::update_table_boletas()
{
    model_boletas->setQuery(SYSTEM->getBoletaSistema());
    ui->tableView_boleta->setModel(model_boletas);
}

void ui_opciones_comprobante::update_table_facturas()
{
     model_facturas->setQuery(SYSTEM->getFacturaSistema());
     ui->tableView_factura->setModel(model_facturas);
}

void ui_opciones_comprobante::on_pushButton_new_b_clicked()
{
    ui_new_boleta_sistema* boleta_form = new ui_new_boleta_sistema;
    boleta_form->setAttribute(Qt::WA_DeleteOnClose);
    boleta_form->mf_set_parent_form(this);
    boleta_form->mf_set_parent(0);
    boleta_form->show();
}

void ui_opciones_comprobante::on_pushButton_new_f_clicked()
{
    ui_new_factura_sistema* factura_form = new ui_new_factura_sistema;
    factura_form->setAttribute(Qt::WA_DeleteOnClose);
    factura_form->mf_set_parent_form(this);
    factura_form->mf_set_parent(0);
    factura_form->show();
}
