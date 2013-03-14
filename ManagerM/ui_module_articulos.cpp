#include "ui_module_articulos.h"
#include "ui_ui_module_articulos.h"
#include "ui_new_articulo.h"
ui_module_articulos::ui_module_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_articulos)
{
    ui->setupUi(this);

    update_table_articulos();

}

ui_module_articulos::~ui_module_articulos()
{
    delete ui;
}

void ui_module_articulos::on_pushButton_nuevo_2_clicked()
{
    ui_new_articulo * form_new_articulo = new ui_new_articulo();
    form_new_articulo->setAttribute(Qt::WA_DeleteOnClose);
    form_new_articulo->show();

}

void ui_module_articulos::update_table_articulos()
{

    QSqlQueryModel * model = new QSqlQueryModel();
       model->setQuery(SYSTEM->getArticulos());
    ui->tableView_articulos->setModel(model);
}
