#include "ui_opciones_articulo.h"
#include "ui_ui_opciones_articulo.h"

ui_opciones_articulo::ui_opciones_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_articulo)
{
    ui->setupUi(this);

    model_marca = new QSqlQueryModel;
    model_medida = new QSqlQueryModel;
    model_grupo = new QSqlQueryModel;

    update_table_medidas();
    update_table_marcas();
    update_table_grupos();

    ui->lineEdit_grupo->setFocus(Qt::OtherFocusReason);
    ui->lineEdit_medida->setFocus(Qt::OtherFocusReason);
    ui->lineEdit_marca->setFocus(Qt::OtherFocusReason);
}

ui_opciones_articulo::~ui_opciones_articulo()
{
    delete ui;
}

void ui_opciones_articulo::update_table_grupos()
{
     model_grupo->setQuery(SYSTEM->getGrupos());
     ui->tableView_grupo->setModel(model_grupo);
}

void ui_opciones_articulo::setCurrentTab(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}

void ui_opciones_articulo::update_table_medidas()
{
     model_medida->setQuery(SYSTEM->getMedidas());
     ui->tableView_medida->setModel(model_medida);
}

void ui_opciones_articulo::update_table_marcas()
{
     model_marca->setQuery(SYSTEM->getMarcas());
     ui->tableView_marca->setModel(model_marca);
}

void ui_opciones_articulo::on_pushButton_save_grupo_clicked()
{
    object_e_grupo* grupo = new object_e_grupo;
    grupo->mf_set_descripcion(ui->lineEdit_grupo->text());
    grupo->mf_add();

    ui->lineEdit_grupo->clear();
}

void ui_opciones_articulo::on_pushButton_save_medida_clicked()
{
    object_e_medida* medida = new object_e_medida;
    medida->mf_set_descripcion(ui->lineEdit_medida->text());
    medida->mf_add();


    ui->lineEdit_medida->clear();
}

void ui_opciones_articulo::on_pushButton_save_marca_clicked()
{

    object_e_marca* marca = new object_e_marca;
    marca->mf_set_descripcion(ui->lineEdit_marca->text());
    marca->mf_add();


    ui->lineEdit_marca->clear();
}

void ui_opciones_articulo::closeEvent(QCloseEvent *ev)
{
    emit closing();

}

void ui_opciones_articulo::on_tabWidget_currentChanged(int index)
{

    /*model_grupo->setQuery("SELECT * FROM e_grupo");
    model_grupo->setHeaderData(0, Qt::Horizontal, tr("Código"));
    model_grupo->setHeaderData(1, Qt::Horizontal, tr("Descripción"));

    model_medida->setQuery("SELECT * FROM e_medida");
    model_medida->setHeaderData(0, Qt::Horizontal, tr("Código"));
    model_medida->setHeaderData(1, Qt::Horizontal, tr("Descripción"));

    model_marca->setQuery("SELECT * FROM e_marca");
    model_marca->setHeaderData(0, Qt::Horizontal, tr("Código"));
    model_marca->setHeaderData(1, Qt::Horizontal, tr("Descripción"));

    ui->tableView_grupo->setModel(model_grupo);
    ui->tableView_medida->setModel(model_medida);
    ui->tableView_marca->setModel(model_marca);*/

    switch(index)
    {
    case marca:

        //update_table_marcas();
        ui->tableView_marca->show();
        break;

    case medida:
        //update_table_medidas();
        ui->tableView_medida->show();
        break;

    case grupo:
        //update_table_grupos();
        ui->tableView_grupo->show();
        break;

    default:
        break;
    }
}


