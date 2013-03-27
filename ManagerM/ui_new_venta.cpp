#include "ui_new_venta.h"
#include "ui_ui_new_venta.h"
#include "share_include.h"
ui_new_venta::ui_new_venta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta)
{
    ui->setupUi(this);

    QCompleter * comp = new QCompleter(SYSTEM->getArticulosDescripcion(),this);

    comp->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    comp->setCompletionPrefix("pin");
    ui->le_nombre->setCompleter(comp);

}

ui_new_venta::~ui_new_venta()
{
    delete ui;
}

void ui_new_venta::on_le_nombre_textEdited(const QString &arg1)
{

    QSqlRelationalTableModel * table = new QSqlRelationalTableModel();
    //table->setTable("e_articulo");
    //table->setFilter("descripcion = "+arg1);
    //table->select();



    qDebug()<<arg1<<endl;



    //ui->tableView->setModel(table);


}
