#include "ui_global_manager_articulos.h"
#include "ui_ui_global_manager_articulos.h"


ui_global_manager_articulos::ui_global_manager_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_global_manager_articulos)
{
    ui->setupUi(this);

    //ui_advanced_search_articulo * w = new ui_advanced_search_articulo(ui->widget);
    //w->move(0, 0);
    update_table_articulos();
    ui->label_grupo->hide();
    ui->comboBox_grupo->hide();
    ui->horizontalSpacer_10->invalidate();
    //w->setTableModel(table_model);
    //ui->tableView_result->setModel(table_model);
    searcher = new Searcher_Articulos;
    vector<pair<QWidget*, int> > pairs;
    pairs.push_back(make_pair(ui->lineEdit_descripcion, 1));
    pairs.push_back(make_pair(ui->comboBox_marca, 0));
    pairs.push_back(make_pair(ui->comboBox_medida, 0));
    pairs.push_back(make_pair(ui->comboBox_grupo, 0));
    searcher->search_type_and_cb(pairs, ui->tableView_articulos);
    qDebug()<<"Init global searcher"<<endl;

}

ui_global_manager_articulos::~ui_global_manager_articulos()
{
    delete ui;
    delete searcher;
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

    vector<_QSTR> v_marca = SYSTEM->getDescripcion("e_marca");
    SYSTEM->loadComboBoxFromVector(ui->comboBox_marca,v_marca,false);
    ui->comboBox_marca->setItemText(0, "Ninguno");

    vector<_QSTR> v_medida = SYSTEM->getDescripcion("e_medida");
    SYSTEM->loadComboBoxFromVector(ui->comboBox_medida,v_medida,false);
    ui->comboBox_medida->setItemText(0, "Ninguno");

    vector<_QSTR> v_grupo = SYSTEM->getDescripcion("e_grupo");
    SYSTEM->loadComboBoxFromVector(ui->comboBox_grupo,v_grupo,false);
    ui->comboBox_grupo->setItemText(0, "Ninguno");

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
            //ui->busqueda->setTableModel(model);
            //ui->busqueda->showOnlyLineEdit();
    }
    else
    {
        QMessageBox::information(this,"Error","Ocurrio un error al cargar la información");
    }

    //Ocultamos columnas
    //ui->tableView_articulos->setColumnHidden(GRUPO,true);
    ui->tableView_articulos->setColumnHidden(HABILITADO,true);

    //qDebug()<<model->query().lastQuery()<<endl;
}
