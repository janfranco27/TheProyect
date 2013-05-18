#include "ui_global_manager_articulos.h"
#include "ui_ui_global_manager_articulos.h"

#include "share_include.h"


ui_global_manager_articulos::ui_global_manager_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_global_manager_articulos)
{
    ui->setupUi(this);

    //ui_advanced_search_articulo * w = new ui_advanced_search_articulo(ui->widget);
    //w->move(0, 0);
    update_table_articulos();
    //w->setTableModel(table_model);
    //ui->tableView_result->setModel(table_model);


}

ui_global_manager_articulos::~ui_global_manager_articulos()
{
    delete ui;
}

void ui_global_manager_articulos::update_table_articulos()
{
    const int num_header = 7;

    char * e_articulo = "e_articulo";
    char * e_grupo = "e_grupo";
    char * e_marca = "e_marca";
    char * e_medida = "e_medida";

    //Primary Keys

    char * pk_grupo = "pk_grupo";
    char * pk_marca = "pk_marca";
    char * pk_medida = "pk_medida";

    //campo buscado

    char * descripcion = "descripcion";

    //Headers tabla

    char * tableHeaders[num_header] = {"Código","Grupo","Marca","Medida","Descripción","Precio","Stock"};

    //Limipiamos el model anterior
    QAbstractItemModel * anteriorModel = ui->tableView_articulos->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    QSqlRelationalTableModel * model = new QSqlRelationalTableModel();
    model->setTable(e_articulo);

   model->setRelation(GRUPO,QSqlRelation(e_grupo,pk_grupo,descripcion));
   model->setRelation(MARCA,QSqlRelation(e_marca,pk_marca,descripcion));
    model->setRelation(MEDIDA,QSqlRelation(e_medida,pk_medida,descripcion));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("habilitado=1");


    for(int i=0;i<num_header;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,tableHeaders[i]);
    }

    if(model->select())
    {

            ui->tableView_articulos->setModel(model);
            ui->busqueda->setTableModel(model);


    }
    else
    {
        QMessageBox::information(this,"Error","Ocurrio un error al cargar la información");
    }

    //Ocultamos columnas
    ui->tableView_articulos->setColumnHidden(GRUPO,true);
    ui->tableView_articulos->setColumnHidden(HABILITADO,true);

    //qDebug()<<model->query().lastQuery()<<endl;
}
