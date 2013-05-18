#include "ui_new_compra_orden.h"
#include "ui_ui_new_compra_orden.h"

#include "share_include.h"
ui_new_compra_orden::ui_new_compra_orden(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_compra_orden)
{
    ui->setupUi(this);

    numRowsVisible = 0;
    md_c = new QCompleter(this);
    md_c->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    md_c->setCaseSensitivity(Qt::CaseInsensitive);
    md_c->setWrapAround(false);
    ui->lineEdit_ingresarArticulo->setCompleter(md_c);

    QRegExp regExp_ruc("[0-9]{11,11}");
    ui->lineEdit_codigoProveedor->setValidator(new QRegExpValidator(regExp_ruc));

    init_lineEdit_proveedorNombre();
    ui->lineEdit_codigoTransportista->setValidator(new QRegExpValidator(regExp_ruc));
    init_lineEdit_transportistaNombre();


    QRegExp regExp_serie("[0-9]{3,3}");
    QRegExp regExp_numero("[0-9]{6,6}");

    QRegExp regExp_decimal("[0-9]+.[0-9]{2,2}");


    //ui->lineEdit_codigo->setReadOnly(true);

    ui->dateEdit_emision->setDate(QDate::currentDate());
    ui->dateEdit_sistema->setDate(QDate::currentDate());

    ui->lineEdit_serie->setValidator(new QRegExpValidator(regExp_serie));
    ui->lineEdit_numero->setValidator(new QRegExpValidator(regExp_numero));

    //ui->lineEdit_numeroPercepcion->setValidator(new QRegExpValidator(regExp_decimal));

    ui->lineEdit_subtotal->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_igv->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_total->setValidator(new QRegExpValidator(regExp_decimal));


}

ui_new_compra_orden::~ui_new_compra_orden()
{
    delete ui;
}


void ui_new_compra_orden::setText_lineEdit_ruc(QString str)
{
    ui->lineEdit_codigoProveedor->setText(str);
}
void ui_new_compra_orden::setText_lineEdit_razon_social(QString str)
{
    ui->lineEdit_proveedorNombre->setText(str);
}
void ui_new_compra_orden::init_lineEdit_proveedorNombre()
{
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;


    // Completer para proveedor
    // SELECT
    select.push_back("pj.razon_social");
    // FROM
    str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_PROVEEDOR)+" AS p ";
    str_from += "ON pj.pk_ruc=p.pk_ruc ORDER BY pj.razon_social";
    from.push_back(str_from);
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);

    //query.exec("SELECT pj.razon_social FROM e_persona_juridica pj INNER JOIN e_proveedor p ON pj.pk_ruc=p.pk_ruc ORDER BY pj.razon_social");
    QStringList list;

    if(query.isSelect())
    {
        while(query.next())
        {
            list<<query.value(0).toString();
            //ui->lineEdit_transportistaNombre->insert(query.value(0).toString()+"  ");
        }

    }



    QStringListModel * model0 = new QStringListModel(this);
    model0->setStringList(list);
    //QSortFilterProxyModel *proxyModel0 = new QSortFilterProxyModel(this);
    //proxyModel0->setSourceModel(model0);
    QCompleter * c0 = new QCompleter(this);
    c0->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    c0->setCaseSensitivity(Qt::CaseInsensitive);
    c0->setWrapAround(false);
    c0->setModel(model0);

    ui->lineEdit_proveedorNombre->setCompleter(c0);
    connect(c0, SIGNAL(activated(QString)), this, SLOT(on_lineEdit_proveedorNombre_activated(QString)));
}

void ui_new_compra_orden::init_lineEdit_transportistaNombre()
{
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;
    // Completer para transportista

    // SELECT
    select.push_back("pj.razon_social");
    // FROM
    str_from = QString(TABLE_NAME_E_ARTICULO)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_TRANSPORTISTA)+" AS t ";
    str_from += "ON pj.pk_ruc=t.pk_ruc ORDER BY pj.razon_social";
    from.push_back(str_from);
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);

    QStringList list1;
    while(query.next())
    {
        list1<<query.value(0).toString();
    }


    QStringListModel * model1= new QStringListModel(this);
    model1->setStringList(list1);
    //QSortFilterProxyModel *proxyModel0 = new QSortFilterProxyModel(this);
    //proxyModel0->setSourceModel(model0);
    QCompleter * c1 = new QCompleter(this);
    c1->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    c1->setCaseSensitivity(Qt::CaseInsensitive);
    c1->setWrapAround(false);
    c1->setModel(model1);

    ui->lineEdit_transportistaNombre->setCompleter(c1);
    connect(c1, SIGNAL(activated(QString)), this, SLOT(on_lineEdit_transportistaNombre_activated(QString)));
}

void ui_new_compra_orden::on_pushButton_buscarProveedor_clicked()
{

}

void ui_new_compra_orden::on_pushButton_buscarTransportista_clicked()
{

}

void ui_new_compra_orden::on_pushButton_ingresarArticulos_clicked()
{
    /*
    ui_new_compra_orden_ingresar_articulos* w = new ui_new_compra_orden_ingresar_articulos;
    w->setAttribute(Qt::WA_DeleteOnClose);

    w->show();
    */
}

// Son para mismo boton los siguientes 2 metodos slot
/*

*/
void ui_new_compra_orden::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        /*
        object_e_tipo_comprobante obj_tipo_comprobante;
        object_e_tipo_comprobante_funciones obj_tipo_comprobante_funciones;

        int pk_tipo_comprobante = obj_tipo_comprobante_funciones.mf_pk_tipo_comprobante_max();
        _QSTR str_pk_tipo_comprobante;
        str_pk_tipo_comprobante.setNum(pk_tipo_comprobante+1);

        obj_tipo_comprobante.mf_set_pk_tipo_comprobante(str_pk_tipo_comprobante);
        obj_tipo_comprobante.mf_set_descripcion(TABLE_NAME_E_ORDEN_COMPRA);
        */

        object_e_comprobante obj_comprobante;
        object_e_comprobante_funciones obj_comprobante_funciones;

        int pk_comprobante = obj_comprobante_funciones.mf_pk_comprobante_max();
        _QSTR str_pk_comprobante;
        str_pk_comprobante.setNum(pk_comprobante+1);

        obj_comprobante.mf_set_pk_comprobante(str_pk_comprobante);
        obj_comprobante.mf_set_pk_tienda("01234567891");

        _QSTR str_pk_tipo_comprobante;
        str_pk_tipo_comprobante.setNum(ORDEN_COMPRA);
        obj_comprobante.mf_set_tipo(str_pk_tipo_comprobante);
        //obj_comprobante.mf_set_emitido();
        //obj_comprobante.mf_set_habilitado();
        obj_comprobante.mf_set_fecha_emision(ui->dateEdit_emision->text());
        obj_comprobante.mf_set_fecha_sistema(ui->dateEdit_sistema->text());
        obj_comprobante.mf_set_serie(ui->lineEdit_serie->text());
        obj_comprobante.mf_set_numero(ui->lineEdit_numero->text());

        obj_comprobante.mf_add();


        object_e_orden_compra obj_orden_compra;
        //object_e_orden_compra_funciones obj_orden_compra_funciones;

        //int pk_orden_compra = obj_orden_compra_funciones.mf_pk_orden_compra_max();
        //_QSTR str_pk_orden_compra;
        //str_pk_orden_compra.setNum(pk_orden_compra+1);
        //obj_orden_compra.mf_set_fk_comprobante();
        //obj_orden_compra.mf_set_pk_orden_compra(str_pk_orden_compra);
        //obj_orden_compra.mf_set_pk_comprobante(str_pk_comprobante);
        obj_orden_compra.mf_set_fk_proveedor(ui->lineEdit_codigoProveedor->text());
        obj_orden_compra.mf_set_fk_transportista(ui->lineEdit_codigoTransportista->text());

        QString str_current_index;
        str_current_index.setNum(ui->comboBox_tipo_moneda->currentIndex());
        obj_orden_compra.mf_set_fk_tipo_pago(str_current_index);
        obj_orden_compra.mf_set_igv(ui->lineEdit_igv->text());
        obj_orden_compra.mf_set_total(ui->lineEdit_total->text());


        obj_orden_compra.mf_add();

        this->close();
    } else {

    }

}

void ui_new_compra_orden::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}

void ui_new_compra_orden::on_pushButton_cancelar_clicked()
{
    this->close();
}

void ui_new_compra_orden::on_pushButton_proveedor_clicked()
{
    /*
    ui_search_simple_proveedor* w = new ui_search_simple_proveedor;
    w->setAttribute(Qt::WA_DeleteOnClose);
    //w->setParent_new_orden(this);
    w->show();
    */
}

void ui_new_compra_orden::on_pushButton_transportista_clicked()
{
    /*
    ui_search_transportista* obj = new ui_search_transportista;
    obj->setAttribute(Qt::WA_DeleteOnClose);
    obj->show();
    */
}

void ui_new_compra_orden::on_lineEdit_codigoProveedor_textChanged(const QString &arg1)
{
    if(arg1.size() == 11)
    {
        vector<QString > select, from;
        vector<pair<QString, QString > > where, joins;
        QString str_from;
        QString extra;
        QSqlQuery query;

        // Completer para proveedor
        // SELECT
        select.push_back("pj.razon_social");
        // FROM
        str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
        str_from += "INNER JOIN ";
        str_from += QString(TABLE_NAME_E_PROVEEDOR)+" AS p ";
        str_from += "ON pj.pk_ruc=p.pk_ruc";
        from.push_back(str_from);
        // WHERE

        where.push_back(make_pair("p.pk_ruc", ui->lineEdit_codigoProveedor->text()));
        query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
        if(query.next())
            ui->lineEdit_proveedorNombre->setText(query.value(0).toString());
    } else {
        ui->lineEdit_proveedorNombre->setText("");
    }
}



void ui_new_compra_orden::on_lineEdit_codigoTransportista_textChanged(const QString &arg1)
{
    if(arg1.size() == 11)
    {
        vector<QString > select, from;
        vector<pair<QString, QString > > where, joins;
        QString str_from;
        QString extra;
        QSqlQuery query;

        // Completer para proveedor
        // SELECT
        select.push_back("pj.razon_social");
        // FROM
        str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
        str_from += "INNER JOIN ";
        str_from += QString(TABLE_NAME_E_TRANSPORTISTA)+" AS t ";
        str_from += "ON pj.pk_ruc=t.pk_ruc";
        from.push_back(str_from);
        // WHERE

        where.push_back(make_pair("t.pk_ruc", ui->lineEdit_codigoTransportista->text()));
        query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
        if(query.next())
            ui->lineEdit_transportistaNombre->setText(query.value(0).toString());
    } else {
        ui->lineEdit_transportistaNombre->setText("");
    }
}

void ui_new_compra_orden::on_lineEdit_proveedorNombre_activated(const QString& arg)
{
    ui->lineEdit_proveedorNombre->setText(arg);
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;

    // Completer para proveedor
    // SELECT
    select.push_back("p.pk_ruc");
    // FROM
    str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_PROVEEDOR)+" AS p ";
    str_from += "ON pj.pk_ruc=p.pk_ruc";
    from.push_back(str_from);
    // WHERE

    where.push_back(make_pair("pj.razon_social", ui->lineEdit_proveedorNombre->text()));
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
    if(query.next())
        ui->lineEdit_codigoProveedor->setText(query.value(0).toString());
}

void ui_new_compra_orden::on_lineEdit_proveedorNombre_returnPressed()
{
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;

    // Completer para proveedor
    // SELECT
    select.push_back("p.pk_ruc");
    // FROM
    str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_PROVEEDOR)+" AS p ";
    str_from += "ON pj.pk_ruc=p.pk_ruc";
    from.push_back(str_from);
    // WHERE

    where.push_back(make_pair("pj.razon_social", ui->lineEdit_proveedorNombre->text()));
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
    if(query.next())
        ui->lineEdit_codigoProveedor->setText(query.value(0).toString());
}

void ui_new_compra_orden::on_lineEdit_transportistaNombre_returnPressed()
{
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;

    // Completer para transportista
    // SELECT
    select.push_back("t.pk_ruc");
    // FROM
    str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_TRANSPORTISTA)+" AS t ";
    str_from += "ON pj.pk_ruc=t.pk_ruc";
    from.push_back(str_from);
    // WHERE

    where.push_back(make_pair("pj.razon_social", ui->lineEdit_transportistaNombre->text()));
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
    if(query.next())
        ui->lineEdit_codigoTransportista->setText(query.value(0).toString());
}

void ui_new_compra_orden::on_lineEdit_transportistaNombre_activated(const QString& arg)
{
    ui->lineEdit_transportistaNombre->setText(arg);
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString str_from;
    QString extra;
    QSqlQuery query;

    // Completer para proveedor
    // SELECT
    select.push_back("p.pk_ruc");
    // FROM
    str_from = QString(TABLE_NAME_E_PERSONA_JURIDICA)+" AS pj ";
    str_from += "INNER JOIN ";
    str_from += QString(TABLE_NAME_E_TRANSPORTISTA)+" AS p ";
    str_from += "ON pj.pk_ruc=p.pk_ruc";
    from.push_back(str_from);
    // WHERE

    where.push_back(make_pair("pj.razon_social", ui->lineEdit_transportistaNombre->text()));
    query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
    if(query.next())
        ui->lineEdit_codigoTransportista->setText(query.value(0).toString());
}
/*
void ui_new_compra_orden::on_lineEdit_ingresarArticulo_textChanged(const QString &arg1)
{
    if(arg1.length() > 2)
    {
        vector<QString > select, from;
        vector<pair<QString, QString > > where, joins;
        QString str_from, str_where;
        QString extra;
        QSqlQuery query;

        // SELECT
        //select.push_back("a.descripcion, me.descripcion, ma.descripcion, g.descripcion, a.stock");
        select.push_back("a.descripcion, me.descripcion, ma.descripcion, a.stock");
        // FROM
        str_from = QString(TABLE_NAME_E_ARTICULO)+" AS a";
        str_from += " LEFT JOIN ";
        str_from += " "+QString(TABLE_NAME_E_MEDIDA)+" AS me";
        str_from += " ON a.fk_medida=me.pk_medida";
        str_from += " LEFT JOIN ";
        str_from += " "+QString(TABLE_NAME_E_MARCA)+" AS ma";
        str_from += " ON a.fk_marca=ma.pk_marca";
        //str_from += " LEFT JOIN";
        //str_from += " "+QString(TABLE_NAME_E_GRUPO)+" AS g";
        //str_from += " ON a.fk_grupo=g.pk_grupo";

        // WHERE
        str_where = " WHERE a.descripcion LIKE '"+ui->lineEdit_ingresarArticulo->text()+"%'";
        //str_where += " OR g.descripcion LIKE '%"+ui->lineEdit_ingresarArticulo+"%'";
        //str_where += " OR ma.descripcion LIKE '%"+ui->lineEdit_ingresarArticulo->text()+"%'";
        //str_where += " OR me.descripcion LIKE '%"+ui->lineEdit_ingresarArticulo->text()+"%'";

        str_from += str_where;

        from.push_back(str_from);

        //where.push_back(make_pair("pj.razon_social", ui->lineEdit_transportistaNombre->text()));

        // EXTRA
        QString numToStr1;
        numToStr1.setNum(numRowsVisible);

        extra = QString(" ORDER BY concat(a.descripcion, ' ', me.descripcion, ' ', ma.descripcion)");
                //+QString(" LIMIT "+numToStr1+", 8");

        query = SYSTEM->getSelectQuery(select, from, where, joins,extra);


        QStringListModel *str_list_model = new QStringListModel(md_c);// = (QStringListModel*)md_c->model();

        QStringList str_list;
        while(query.next())
        {
            str_list<<query.value(0).toString()
                      +" "+query.value(1).toString()
                      +" "+query.value(2).toString()
                      +"\nStock: "+query.value(3).toString();
            //qDebug()<<"o_O"<<endl;
        }
        str_list_model->setStringList(str_list);
        md_c->setModel(str_list_model);


    }
}
*/
void ui_new_compra_orden::on_lineEdit_ingresarArticulo_returnPressed()
{
    ui_global_manager_articulos *w = new ui_global_manager_articulos;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}
