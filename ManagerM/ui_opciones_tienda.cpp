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

void ui_opciones_tienda::on_pushButton_guardar_clicked()
{
    object_e_tienda *tienda = new object_e_tienda;

    tienda->mf_set_pk_ruc(ui->lineEdit_ruc->text());
    tienda->mf_set_comentario(ui->textEdit_comentario->toPlainText());
    tienda->mf_set_direccion(ui->lineEdit_direccion->text());
    tienda->mf_set_email(ui->lineEdit_email->text());
    tienda->mf_set_fax(ui->lineEdit_fax->text());
    tienda->mf_set_nombre(ui->lineEdit_nombre->text());
    tienda->mf_set_pagina_web(ui->lineEdit_pagina_web->text());
    tienda->mf_set_telefono_fijo(ui->lineEdit_telefono->text());

    tienda->mf_add();


}
