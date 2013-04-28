#include "ui_edit_proveedor.h"
#include "ui_ui_edit_proveedor.h"

ui_edit_proveedor::ui_edit_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_edit_proveedor)
{
    ui->setupUi(this);
}

ui_edit_proveedor::~ui_edit_proveedor()
{
    delete ui;
}

void ui_edit_proveedor::on_pushButton_aceptar_clicked()
{
    object_e_proveedor* proveedor = new object_e_proveedor;
    object_e_persona_juridica* persona_juridica = new object_e_persona_juridica;

    proveedor->mf_set_pk_ruc(ui->lineEdit_ruc->text());
    proveedor->mf_set_nombre_vendedor(ui->lineEdit_nombre->text());
    proveedor->mf_set_celular_vendedor(ui->lineEdit_celular_proveedor->text());

    persona_juridica->mf_set_pk_ruc(ui->lineEdit_ruc->text());
    persona_juridica->mf_set_comentario(ui->lineEdit_comentario->text());
    persona_juridica->mf_set_direccion(ui->lineEdit_direccion->text());
    persona_juridica->mf_set_email(ui->lineEdit_email->text());
    persona_juridica->mf_set_fax(ui->lineEdit_fax->text());
    persona_juridica->mf_set_pagina_web(ui->lineEdit_pagina_web->text());
    persona_juridica->mf_set_razon_social(ui->lineEdit_razon_social->text());
    persona_juridica->mf_set_representante(ui->lineEdit_representante->text());
    //persona_juridica->mf_set_telefono_celular(ui->lineEdit_celular->text());
    persona_juridica->mf_set_telefono_fijo(ui->lineEdit_telefono->text());

    persona_juridica->mf_add();
    proveedor->mf_add();

    emit on_pushButton_aceptar_clicked();

}
