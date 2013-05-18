#include "ui_module_clientes.h"
#include "ui_ui_module_clientes.h"

ui_module_clientes::ui_module_clientes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_clientes)
{
    ui->setupUi(this);
    model = new QSqlQueryModel;
    updateContentFrame();
}

void ui_module_clientes::updateContentFrame()
{
    model->setQuery(SYSTEM->getClientes());
    ui->tableView_clientes->setModel(model);
}

ui_module_clientes::~ui_module_clientes()
{
    delete ui;
}

void ui_module_clientes::on_pushButton_nuevo_clicked()
{
    ui_newedit_cliente *newedit_cliente_form = new ui_newedit_cliente(true);
    newedit_cliente_form->setWindowTitle("Nuevo colaborador");
    newedit_cliente_form->exec();

    updateContentFrame();
}

void ui_module_clientes::on_pushButton_editar_clicked()
{
    QModelIndexList selected=ui->tableView_clientes->selectionModel()->selectedRows();

    if(selected.size()!=1)
        QMessageBox::information(this,"Editar cliente","Debe seleccionar a un solo cliente!",QMessageBox::Ok);

    //fila seleccionada
    else
    {
        int row=selected.at(0).row();

        _QSTR pk_ruc=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,0)).toString();
        qDebug()<<pk_ruc<<endl;

        object_e_persona_juridica* clientePorEditar=new object_e_persona_juridica;
        clientePorEditar->mf_load(pk_ruc);
        ui_newedit_cliente *edita_cliente_form = new ui_newedit_cliente(false);
        edita_cliente_form->setObjectCliente(clientePorEditar);
        edita_cliente_form->setWindowTitle("Editar cliente");
        edita_cliente_form->llenarCamposEdicion();
        edita_cliente_form->exec();

        updateContentFrame();
    }
}

void ui_module_clientes::on_pushButton_clicked()
{
    //ui_buscarCliente *gen=new ui_buscarCliente();
    //gen->show();
}
