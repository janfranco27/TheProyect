#include "ui_table_ventas.h"
#include "ui_ui_table_ventas.h"
#include "share_include.h"
ui_table_ventas::ui_table_ventas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ui_table_ventas)
{
    ui->setupUi(this);


}

ui_table_ventas::~ui_table_ventas()
{
    delete ui;
}

void ui_table_ventas::llenaBoleta()
{


    QSqlQuery query = SYSTEM->getBoletas();
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery(query);

    ui->tableView->setModel(model);
}
