#include "ui_new_proveedor.h"
#include "ui_ui_new_proveedor.h"



ui_new_proveedor::ui_new_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_proveedor)
{
    ui->setupUi(this);
    QRegExp regExp_numero("[0-9]{11,11}");
    ui->lineEdit_ruc->setValidator(new QRegExpValidator(regExp_numero));

    for(int i=0; i<25; i++)
        ui->comboBox_regiones->addItem("");
    /*
    QRegExp regExp_alfabeto("[A-Z]*");
    ui->comboBox_regiones->setValidator(new QRegExpValidator(regExp_alfabeto));
    */
    int count = 0;
    ui->comboBox_regiones->setItemText(count++, "AMAZONAS");
    ui->comboBox_regiones->setItemText(count++, "ANCASH");
    ui->comboBox_regiones->setItemText(count++, "APURIMAC");
    ui->comboBox_regiones->setItemText(count++, "AREQUIPA");
    ui->comboBox_regiones->setItemText(count++, "AYACUCHO");
    ui->comboBox_regiones->setItemText(count++, "CAJAMARCA");
    ui->comboBox_regiones->setItemText(count++, "CALLAO");
    ui->comboBox_regiones->setItemText(count++, "CUSCO");
    ui->comboBox_regiones->setItemText(count++, "HUANCAVELICA");
    ui->comboBox_regiones->setItemText(count++, "HUANUCO");
    ui->comboBox_regiones->setItemText(count++, "ICA");
    ui->comboBox_regiones->setItemText(count++, "JUNIN");
    ui->comboBox_regiones->setItemText(count++, "LA LIBERTAD");
    ui->comboBox_regiones->setItemText(count++, "LAMBAYEQUE");
    ui->comboBox_regiones->setItemText(count++, "LIMA");
    ui->comboBox_regiones->setItemText(count++, "LORETO");
    ui->comboBox_regiones->setItemText(count++, "MADRE DE DIOS");
    ui->comboBox_regiones->setItemText(count++, "MOQUEGUA");
    ui->comboBox_regiones->setItemText(count++, "PASCO");
    ui->comboBox_regiones->setItemText(count++, "PIURA");
    ui->comboBox_regiones->setItemText(count++, "PUNO");
    ui->comboBox_regiones->setItemText(count++, "SAN MARTIN");
    ui->comboBox_regiones->setItemText(count++, "TACNA");
    ui->comboBox_regiones->setItemText(count++, "TUMBES");
    ui->comboBox_regiones->setItemText(count++, "UCAYALI");

}

ui_new_proveedor::~ui_new_proveedor()
{
    delete ui;
}

void ui_new_proveedor::setType(int mode)
{
    if(mode == COMPRAS_NEW)
    {
        ui->pushButton_registrar->setText("Registrar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_registrar_clicked()));
        return;
    }
    if(mode == COMPRAS_EDIT)
    {
        ui->pushButton_registrar->setText("Editar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked()));
        return;
    }
    if(mode == COMPRAS_DELETE)
    {
        return;
    }
}

void ui_new_proveedor::setUiModuleCompras(ui_module_compras *w)
{
    module_compras = w;
}

void ui_new_proveedor::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar el proveedor?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        qDebug()<<"Procesando consulta"<<endl;
        object_e_persona_juridicos obj_persona_juridicos;

        obj_persona_juridicos.mf_set_pk_ruc(ui->lineEdit_ruc->text());
        obj_persona_juridicos.mf_set_comentario(ui->lineEdit_comentario->text());
        obj_persona_juridicos.mf_set_region(ui->comboBox_regiones->currentText());
        obj_persona_juridicos.mf_set_direccion(ui->lineEdit_direccion->text());
        obj_persona_juridicos.mf_set_email(ui->lineEdit_email->text());
        obj_persona_juridicos.mf_set_fax(ui->lineEdit_fax->text());
        obj_persona_juridicos.mf_set_habilitado("1");
        obj_persona_juridicos.mf_set_pagina_web(ui->lineEdit_pagina_web->text());
        obj_persona_juridicos.mf_set_razon_social(ui->lineEdit_razon_social->text());
        obj_persona_juridicos.mf_set_representante(ui->lineEdit_representante->text());
        // No debe ir este campo
        //obj_persona_juridicos.mf_set_telefono_celular("");
        obj_persona_juridicos.mf_set_telefono_fijo(ui->lineEdit_telefono->text());

        obj_persona_juridicos.mf_add();

        object_e_proveedor obj_proveedor;

        obj_proveedor.mf_set_pk_ruc(ui->lineEdit_ruc->text());
        obj_proveedor.mf_set_celular_vendedor(ui->lineEdit_celular->text());
        obj_proveedor.mf_set_nombre_vendedor(ui->lineEdit_nombre->text());

        obj_proveedor.mf_add();

        module_compras->mf_updateModel_proveedor();
        this->close();
    } else {

    }

}

void ui_new_proveedor::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en el proveedor?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}

void ui_new_proveedor::on_pushButton_cancelar_clicked()
{
    this->close();
}
