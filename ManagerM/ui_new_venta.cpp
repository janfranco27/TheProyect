#include "ui_new_venta.h"
#include "ui_ui_new_venta.h"
#include "share_include.h"
ui_new_venta::ui_new_venta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta)
{
    ui->setupUi(this);

    QCompleter * comp = new QCompleter(SYSTEM->getListOfValues("e_articulo","descripcion"));

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

void ui_new_venta::on_pushButton_siguiente_clicked()
{
    int nextPage = ui->stackedWidget_ventas->currentIndex() + 1;
    if (nextPage < ui->stackedWidget_ventas->count())
        ui->stackedWidget_ventas->setCurrentIndex(nextPage);
}

void ui_new_venta::on_pushButton_atras_clicked()
{
    int prevPage = ui->stackedWidget_ventas->currentIndex()-1;
    if (prevPage >= 0)
        ui->stackedWidget_ventas->setCurrentIndex(prevPage);
}

void ui_new_venta::on_cb_tipo_comprobante_activated(const QString &arg1)
{
    if(arg1=="Boleta")
    {
        ui->gridLayout_6->removeWidget(ui->widget_venta);
        ui_new_venta_boleta *boleta=new ui_new_venta_boleta;
        ui->gridLayout_6->addWidget(boleta,2,0);
        boleta->show();
        qDebug()<<"boleta"<<endl;
    }
    if(arg1=="Factura")
    {
        ui->gridLayout_6->removeWidget(ui->widget_venta);
        ui_new_venta_factura *factura=new ui_new_venta_factura;
        ui->gridLayout_6->addWidget(factura,3,0);
        factura->show();
        qDebug()<<"Factura"<<endl;
    }
}
