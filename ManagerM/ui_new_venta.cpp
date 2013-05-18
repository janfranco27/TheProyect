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

<<<<<<< HEAD

=======
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
    table = new QSqlRelationalTableModel();
    table->setTable("e_articulo");
     table->select();

     table->setRelation(GRUPO,QSqlRelation(e_grupo,pk_grupo,descripcion));
     table->setRelation(MARCA,QSqlRelation(e_marca,pk_marca,descripcion));
      table->setRelation(MEDIDA,QSqlRelation(e_medida,pk_medida,descripcion));
      table->setJoinMode(QSqlRelationalTableModel::LeftJoin);
      table->setFilter("habilitado=1");


    //por defecto es una boleta
    QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
    ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
    delete tmpWidget;
    ui_new_venta_boleta *boleta=new ui_new_venta_boleta;
    ui->gridLayout_6->addWidget(boleta,1,0);
    boleta->show();

<<<<<<< HEAD
<<<<<<< HEAD
   // QCompleter * comp = new QCompleter(SYSTEM->getListOfValues("e_articulo","descripcion"));
=======
    QCompleter * comp = new QCompleter(SYSTEM->getListOfValues("e_articulo","descripcion"));
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
=======
    QCompleter * comp = new QCompleter(SYSTEM->getListOfValues("e_articulo","descripcion"));
>>>>>>> <zx


      ui->tableView_articulos_1->setModel(table);

      ui->tableView_articulos_1->setColumnHidden(HABILITADO,true);



      //Table view de articulos seleccionados
     seleccionados_model = new QStandardItemModel();


      //Seteamos los nombres de las columnas del nuevo view




      ui->tableView_seleccionados->setModel(seleccionados_model);
      ui->tableView_seleccionados2->setModel(seleccionados_model);


      //Inicializamos
      montoTotal=0;
      updatePrecioView();

}

ui_new_venta::~ui_new_venta()
{
    delete table;
    delete seleccionados_model;
    delete ui;
}


void ui_new_venta::table_view_seleccionados_addHeaders()
{

    int n_columns = table->columnCount();

    for(int i=0;i<n_columns;i++)
    {
          seleccionados_model->setHeaderData(i,Qt::Horizontal,table->headerData(i,Qt::Horizontal).toString());
    }


    seleccionados_model->setHeaderData(CANTIDAD,Qt::Horizontal,C_HEADER_CANTIDAD);

    hideHabilitadoSeleccionadosColumn(true);

}

void ui_new_venta::hideHabilitadoSeleccionadosColumn(bool hide)
{
    ui->tableView_seleccionados->setColumnHidden(HABILITADO,hide);
    ui->tableView_seleccionados2->setColumnHidden(HABILITADO,hide);
}

void ui_new_venta::updatePrecioView()
{
    ui->le_total->setText(QString::number(montoTotal));

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
    /*QWidget* widget = ui.TPCheckBoxLayout_G->itemAtPosition(i,j)->widget();	 ui.TPCheckBoxLayout_G->removeItem(ui.TPCheckBoxLayout_G->itemAtPosition(i,j));
    delete ui.TPCheckBoxLayout_G->itemAtPosition(i,j);
    delete widget;
    */
    if(arg1=="Boleta")
    {
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        ui_new_venta_boleta *boleta=new ui_new_venta_boleta;
        ui->gridLayout_6->addWidget(boleta,1,0);
        boleta->show();
        qDebug()<<"boleta"<<endl;
    }
    else if(arg1=="Factura")
    {
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        ui_new_venta_factura *factura=new ui_new_venta_factura;
        ui->gridLayout_6->addWidget(factura,1,0);
        factura->show();
        qDebug()<<"Factura"<<endl;
    }
    else if(arg1=="Proforma")
    {
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        ui_new_venta_proforma *proforma=new ui_new_venta_proforma;
        ui->gridLayout_6->addWidget(proforma,1,0);
        proforma->show();
        qDebug()<<"Proforma"<<endl;
    }
    else if(arg1=="Cotización")
    {
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        ui_new_venta_cotizacion *cotizacion=new ui_new_venta_cotizacion;
        ui->gridLayout_6->addWidget(cotizacion,1,0);
        cotizacion->show();
        qDebug()<<"Cotizacion"<<endl;
    }
<<<<<<< HEAD
}



void ui_new_venta::on_pushButton_down_clicked()
{




    QModelIndexList  list = ui->tableView_articulos_1->selectionModel()->selectedRows();

    QAbstractItemModel * item_model = ui->tableView_articulos_1->model();

    int n_columns = item_model->columnCount();

   QStandardItemModel * select_model = (QStandardItemModel*)ui->tableView_seleccionados->model();

        bool error = false;
        QString descripcionArticuloError = "";

    foreach(QModelIndex index ,list)
    {
        int row = index.row();

        int nueva_row = select_model->rowCount();


        int selectedArticuloStock = item_model->data(item_model->index(row,STOCK)).toInt();
        int cantidad = ui->sp_cantidad->value();

        if(cantidad<=selectedArticuloStock)
        {
            for(int i=0;i<n_columns;i++)
            {


                select_model->setItem(nueva_row,i,new QStandardItem(item_model->data(item_model->index(row,i)).toString()));

            }

            //Seteamos la cantidad

            select_model->setItem(nueva_row,CANTIDAD,new QStandardItem(ui->sp_cantidad->text()));


            //Actualizamos el monto total

            montoTotal+= (item_model->data(item_model->index(row,PRECIO)).toDouble());
            updatePrecioView();

            if(nueva_row==0)
            {
                    //La tabla de seleccionadas estaba vacia
                    //Entonces añadimos los labels de las columnas

                table_view_seleccionados_addHeaders();

            }
        }
        else
        {
            descripcionArticuloError += (item_model->data(item_model->index(row,DESCRIPCION)).toString())+" ";
            error = true;

        }

    }


    if(error)
    {
        SYSTEM->messageInformation(C_ERROR,"Error con: "+descripcionArticuloError+"\n "+ C_NO_STOCK );
    }



=======
>>>>>>> <zx
}



<<<<<<< HEAD
=======
void ui_new_venta::on_pushButton_down_clicked()
{




    QModelIndexList  list = ui->tableView_articulos_1->selectionModel()->selectedRows();

    QAbstractItemModel * item_model = ui->tableView_articulos_1->model();

    int n_columns = item_model->columnCount();

   QStandardItemModel * select_model = (QStandardItemModel*)ui->tableView_seleccionados->model();

        bool error = false;
        QString descripcionArticuloError = "";

    foreach(QModelIndex index ,list)
    {
        int row = index.row();

        int nueva_row = select_model->rowCount();


        int selectedArticuloStock = item_model->data(item_model->index(row,STOCK)).toInt();
        int cantidad = ui->sp_cantidad->value();

        if(cantidad<=selectedArticuloStock)
        {
            for(int i=0;i<n_columns;i++)
            {


                select_model->setItem(nueva_row,i,new QStandardItem(item_model->data(item_model->index(row,i)).toString()));

            }

            //Seteamos la cantidad

            select_model->setItem(nueva_row,CANTIDAD,new QStandardItem(ui->sp_cantidad->text()));


            //Actualizamos el monto total

            montoTotal+= (item_model->data(item_model->index(row,PRECIO)).toDouble());
            updatePrecioView();

            if(nueva_row==0)
            {
                    //La tabla de seleccionadas estaba vacia
                    //Entonces añadimos los labels de las columnas

                table_view_seleccionados_addHeaders();

            }
        }
        else
        {
            descripcionArticuloError += (item_model->data(item_model->index(row,DESCRIPCION)).toString())+" ";
            error = true;

        }

    }


    if(error)
    {
        SYSTEM->messageInformation(C_ERROR,"Error con: "+descripcionArticuloError+"\n "+ C_NO_STOCK );
    }



}



>>>>>>> <zx
void ui_new_venta::on_pushButton_up_clicked()
{

    QModelIndexList  list = ui->tableView_seleccionados->selectionModel()->selectedRows();

    foreach(QModelIndex index ,list)
    {
        int row = index.row();

         montoTotal-= (seleccionados_model->data(seleccionados_model->index(row,PRECIO)).toDouble());
         updatePrecioView();

        seleccionados_model->removeRow(row);
    }
}
