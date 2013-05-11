#include "ui_new_venta.h"
#include "ui_ui_new_venta.h"
#include "share_include.h"
extern const char * e_articulo ;
extern const char * e_grupo ;
extern const char * e_marca ;
extern const char * e_medida ;

//Primary Keys

extern const char * pk_grupo ;
extern const char * pk_marca ;
extern const char * pk_medida ;

//campo buscado

extern const char * descripcion ;

QString defaultFilter = "habilitado=1";

ui_new_venta::ui_new_venta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta)
{
    ui->setupUi(this);

    table = new QSqlRelationalTableModel();
    table->setTable("e_articulo");
     table->select();

     table->setRelation(GRUPO,QSqlRelation(e_grupo,pk_grupo,descripcion));
     table->setRelation(MARCA,QSqlRelation(e_marca,pk_marca,descripcion));
      table->setRelation(MEDIDA,QSqlRelation(e_medida,pk_medida,descripcion));
      table->setJoinMode(QSqlRelationalTableModel::LeftJoin);
      table->setFilter("habilitado=1");


      ui->tableView_articulos_1->setModel(table);

      ui->tableView_articulos_1->setColumnHidden(HABILITADO,true);
}

ui_new_venta::~ui_new_venta()
{
    delete table;
    delete ui;
}

void ui_new_venta::on_le_nombre_textEdited(const QString &nuevoTexto)
{


        QString filtro ;
        bool hayAnd = false;
        if(!nuevoTexto.isEmpty())
        {

            filtro = "e_articulo.descripcion LIKE '"+nuevoTexto+"%'";
            hayAnd = true;
        }

        if(!ui->le_marca->text().isEmpty())
        {
            if(hayAnd)
            {
                filtro+=" AND ";
            }
            filtro+="relTblAl_2.descripcion LIKE '%1%' ";
            filtro=filtro.arg(ui->le_marca->text());
            hayAnd=true;


        }

        if(!ui->le_medida->text().isEmpty())
        {
            if(hayAnd)
            {
             filtro+=" AND ";
            }
            filtro+="relTblAl_3.descripcion LIKE '%1%' ";
            filtro=filtro.arg(ui->le_medida->text());

            hayAnd=true;
        }



        if(hayAnd)
        {
         filtro+=" AND ";
        }
        filtro+=defaultFilter;

        qDebug()<<filtro;
        table->setFilter(filtro);


    ui->tableView_articulos_1->setModel(table);







    //ui->tableView->setModel(table);


}


void ui_new_venta::on_le_marca_textEdited(const QString &nuevoTexto)
{


         QString filtro ;

         bool hayAnd = false;

         if(!nuevoTexto.isEmpty())
         {
                filtro= "relTblAl_2.descripcion LIKE '"+nuevoTexto+"%'";
                hayAnd=true;
         }

         if(!ui->le_nombre->text().isEmpty())
         {
             if(hayAnd)
             {
                 filtro+=" AND ";
             }

             filtro+="e_articulo.descripcion LIKE '%1%' ";
             filtro=filtro.arg(ui->le_nombre->text());
             hayAnd=true;
         }
         if(!ui->le_medida->text().isEmpty())
         {
             if(hayAnd)
             {
                 filtro+=" AND ";
             }
             filtro+="relTblAl_3.descripcion LIKE '%1%' ";
             filtro=filtro.arg(ui->le_medida->text());
             hayAnd=true;
         }




         if(hayAnd)
         {
             filtro+=" AND ";
         }

         filtro+=defaultFilter;

         qDebug()<<filtro;

         table->setFilter(filtro);


     ui->tableView_articulos_1->setModel(table);
}

void ui_new_venta::on_le_medida_textEdited(const QString &nuevoTexto)
{



    // Armamos el filtro
        QString filtro;

        //hayAnd sirve como bandera para armar la consulta y poner los ANDS correspondientes

        bool hayAnd = false;

        if(!nuevoTexto.isEmpty())
        {
            filtro= "relTblAl_3.descripcion LIKE '"+nuevoTexto+"%'";
            hayAnd=true;
        }


        if(!ui->le_nombre->text().isEmpty())
        {
            if(hayAnd)
            {
                filtro+=" AND ";
            }
            filtro+="e_articulo.descripcion LIKE '%1%' ";
            filtro=filtro.arg(ui->le_nombre->text());
            hayAnd=true;
        }
        if(!ui->le_marca->text().isEmpty())
        {
            if(hayAnd)
            {
                filtro+=" AND ";
            }
            filtro+="relTblAl_2.descripcion LIKE '%1%' ";
            filtro=filtro.arg(ui->le_marca->text());
            hayAnd=true;
        }



        if(hayAnd)
        {
            filtro+=" AND ";
        }
        filtro+=defaultFilter;

        qDebug()<<filtro;
        table->setFilter(filtro);


    ui->tableView_articulos_1->setModel(table);
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


