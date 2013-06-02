#include "ui_new_venta.h"
#include "ui_ui_new_venta.h"

#include "ui_new_venta_boleta.h"
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


    //por defecto es una boleta
    QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
    ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
    delete tmpWidget;
    venta_boletas=new ui_new_venta_boleta;
    ui->gridLayout_6->addWidget(venta_boletas,1,0);
    venta_boletas->show();
    tipoComprobante=boleta;

    //llenamos serie y numero de acuerdo al sistema
    vector<_QSTR> serie_numero=SYSTEM->getSerieNumero(boleta);
    ui->lineEdit_serie->setText(serie_numero[0]);
    ui->lineEdit_numero->setText(serie_numero[0]);


   // QCompleter * comp = new QCompleter(SYSTEM->getListOfValues("e_articulo","descripcion"));

      ui->tableView_articulos_1->setModel(table);

      ui->tableView_articulos_1->setColumnHidden(HABILITADO,true);



      //Table view de articulos seleccionados
     seleccionados_model = new QStandardItemModel();


      //Seteamos los nombres de las columnas del nuevo view




      ui->tableView_seleccionados->setModel(seleccionados_model);
      ui->tableView_seleccionados2->setModel(seleccionados_model);
      ui->tableView_articulos3->setModel(seleccionados_model);

      //Inicializamos
      montoTotal=0;
      updatePrecioView();

      //seteamos la fecha con el dia actual:
      QDate date = QDate::currentDate();
      ui->dateEdit_fecha_emision->setDate(date);


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
    ui->tableView_articulos3->setColumnHidden(HABILITADO,hide);

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
    {
        ui->stackedWidget_ventas->setCurrentIndex(nextPage);
        actualizaContenido();
    }
    else
    {
        //guardarDocumento();
        if(guardarComprobante())
        {
            SYSTEM->messageInformation(C_COMPROBANTE,C_COMPROBANTE_TEXT);
            //actualizamos valor actual en serie y numero de comprobante
            close();
        }
        else
            SYSTEM->messageCritical(C_WRONG_COMPROBANTE,C_WRONG_COMPROBANTE_TEXT);
    }
}

bool ui_new_venta::guardarComprobante()
{
    std::stringstream ss;
    ss<<SYSTEM->getNumeroComprobante();
    _QSTR codigoComprobante=QString::fromStdString(ss.str());
    ss.str( std::string() );
    ss.clear();
    ss<<tipoComprobante;
    _QSTR tipoComp=QString::fromStdString(ss.str());
    qDebug()<<"tipocomprobate"<<tipoComprobante;
    //colaborador para saber la tienda en la wue estamos
    object_e_colaborador* colaborador=new object_e_colaborador;
    colaborador->mf_load(QString::fromStdString(USER_GET_DNI));
    _QSTR fk_tienda=colaborador->mf_get_fk_tienda();
    delete colaborador;
    _QSTR numero=ui->lineEdit_numero->text();
    _QSTR serie=ui->lineEdit_serie->text();
    _QSTR fecha_sistema=QDate::currentDate().toString("yyyy-MM-dd");
    _QSTR fecha_emision=ui->dateEdit_fecha_emision->date().toString("yyyy-MM-dd");
    _QSTR emitido=C_NO_HABILITADO;
    _QSTR habilitado=C_NO_HABILITADO;
    //GET IGV
    _QSTR igv=SYSTEM->getIGV();
    object_e_comprobante* comprobante=new object_e_comprobante(codigoComprobante,fk_tienda,
                                          tipoComp,numero,serie,fecha_sistema,fecha_emision,
                                          emitido,habilitado);
    _QSTR total=ui->le_total->text();
    if(comprobante->mf_add())
    {
        qDebug()<<"sin problemas"<<endl;
        vector<_QSTR> valores;
        if(tipoComprobante==boleta)
        {
            valores=venta_boletas->getValores();
            object_e_boleta_venta* boletaAsociada=new object_e_boleta_venta(codigoComprobante,valores[1],valores[0],
                                                                            valores[2],total);
            if(boletaAsociada->mf_add())
            {
                qDebug()<<"boelta guardada"<<endl;
            }
            else return false;
        }
        else if(tipoComprobante==factura)
        {
            valores=venta_facturas->getValores();
            object_e_factura_venta* facturaAsociada=new object_e_factura_venta(codigoComprobante,valores[0],total,igv);
            if(facturaAsociada->mf_add())
            {
                qDebug()<<"factura guardada"<<endl;
            }
            else return false;

        }
        else if(tipoComprobante==proforma)
        {
            valores=venta_proformas->getValores();
            _QSTR dni="",fk_cliente="";
            if(valores[0].length()==8)dni=valores[0];
            else if(valores[0].length()==11)fk_cliente=valores[0];
            object_e_proforma_venta* proformaAsociada=new object_e_proforma_venta(codigoComprobante,fk_cliente,valores[1],dni,valores[2],total,igv);
            if(proformaAsociada->mf_add())
            {
                qDebug()<<"proforma guardada"<<endl;
            }
            else return false;
        }
        else if(tipoComprobante==cotizacion)
        {
            valores=venta_cotizaciones->getValores();
            _QSTR dni="",fk_cliente="";
            if(valores[0].length()==8)dni=valores[0];
            else if(valores[0].length()==11)fk_cliente=valores[0];
            object_e_cotizacion_venta* cotizacionAsociada=new object_e_cotizacion_venta(codigoComprobante,fk_cliente,valores[1],dni,valores[2],total,igv);
            if(cotizacionAsociada->mf_add())
            {
                qDebug()<<"cotizacion guardada"<<endl;
            }
            else return false;
        }
        return true;
    }
    else return false;
}

void ui_new_venta::on_pushButton_atras_clicked()
{
    int prevPage = ui->stackedWidget_ventas->currentIndex()-1;
    if (prevPage >= 0)
        ui->stackedWidget_ventas->setCurrentIndex(prevPage);
    actualizaContenido();
}
void ui_new_venta::actualizaContenido()
{
    int page=ui->stackedWidget_ventas->currentIndex();
    if(page+1==ui->stackedWidget_ventas->count())
    {
        ui->pushButton_siguiente->setText("Finalizar");
        bool serie_habilitada=true;
        if(tipoComprobante==proforma||tipoComprobante==cotizacion)
            serie_habilitada=false;

        ui->lineEdit_numero->setEnabled(serie_habilitada);
        ui->lineEdit_serie->setEnabled(serie_habilitada);
    }
    else
        ui->pushButton_siguiente->setText("Siguiente>>");

}

void ui_new_venta::on_cb_tipo_comprobante_activated(const QString &arg1)
{
    /*QWidget* widget = ui.TPCheckBoxLayout_G->itemAtPosition(i,j)->widget();	 ui.TPCheckBoxLayout_G->removeItem(ui.TPCheckBoxLayout_G->itemAtPosition(i,j));
    delete ui.TPCheckBoxLayout_G->itemAtPosition(i,j);
    delete widget;
    */
    if(arg1=="Boleta")
    {
        tipoComprobante=boleta;
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));

        delete tmpWidget;

        venta_boletas=new ui_new_venta_boleta;
        ui->gridLayout_6->addWidget(venta_boletas,1,0);
        venta_boletas->show();
        qDebug()<<"boleta"<<endl;
        vector<_QSTR> serie_numero=SYSTEM->getSerieNumero(boleta);
        ui->lineEdit_serie->setText(serie_numero[0]);
        ui->lineEdit_numero->setText(serie_numero[0]);
    }
    else if(arg1=="Factura")
    {
        tipoComprobante=factura;
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        venta_facturas=new ui_new_venta_factura;
        ui->gridLayout_6->addWidget(venta_facturas,1,0);
        venta_facturas->show();
        qDebug()<<"Factura"<<endl;
        vector<_QSTR> serie_numero=SYSTEM->getSerieNumero(factura);
        ui->lineEdit_serie->setText(serie_numero[0]);
        ui->lineEdit_numero->setText(serie_numero[0]);
    }
    else if(arg1=="Proforma")
    {
        tipoComprobante=proforma;
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        venta_proformas=new ui_new_venta_proforma;
        ui->gridLayout_6->addWidget(venta_proformas,1,0);
        venta_proformas->show();
        qDebug()<<"Proforma"<<endl;
        ui->lineEdit_serie->setText("");
        ui->lineEdit_numero->setText("");
    }
    else if(arg1=="Cotización")
    {
        tipoComprobante=cotizacion;
        QWidget *tmpWidget=ui->gridLayout_6->itemAtPosition(1,0)->widget();
        ui->gridLayout_6->removeItem(ui->gridLayout_6->itemAtPosition(1,0));
        delete tmpWidget;
        venta_cotizaciones=new ui_new_venta_cotizacion;
        ui->gridLayout_6->addWidget(venta_cotizaciones,1,0);
        venta_cotizaciones->show();
        qDebug()<<"Cotizacion"<<endl;
        ui->lineEdit_serie->setText("");
        ui->lineEdit_numero->setText("");
    }
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



}



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
