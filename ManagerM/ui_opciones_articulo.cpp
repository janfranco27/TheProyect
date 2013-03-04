#include "ui_opciones_articulo.h"
#include "ui_ui_opciones_articulo.h"

ui_opciones_articulo::ui_opciones_articulo(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::ui_opciones_articulo)
{
    ui->setupUi(this);




    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM e_grupo");
    model->setHeaderData(0, Qt::Horizontal, tr("Código"));
    model->setHeaderData(1, Qt::Horizontal, tr("Descripción"));
    ui->tableView_grupo->setModel(model);
    ui->tableView_grupo->show();
}

ui_opciones_articulo::~ui_opciones_articulo()
{
    delete ui;
}

void ui_opciones_articulo::on_pushButton_save_grupo_clicked()
{
   object_e_grupo* grupo = new object_e_grupo;
   grupo->mf_set_descripcion(ui->lineEdit_grupo->text());
   grupo->mf_add();

   ui->lineEdit_grupo->clear();

}


