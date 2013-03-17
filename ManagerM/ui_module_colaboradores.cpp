#include "ui_module_colaboradores.h"
#include "ui_ui_module_colaboradores.h"

ui_module_colaboradores::ui_module_colaboradores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_colaboradores)
{
    ui->setupUi(this);
    model = new QSqlQueryModel;

    updateContentFrame();
}

ui_module_colaboradores::~ui_module_colaboradores()
{
    delete ui;
}

void ui_module_colaboradores::updateContentFrame()
{
    model->setQuery(SYSTEM->getColaboradores());
    ui->tableView_colaboradores->setModel(model);
}

void ui_module_colaboradores::on_pushButton_nuevo_clicked()
{
    ui_newedit_colaborador *newedit_colaborador_form = new ui_newedit_colaborador(true);
    newedit_colaborador_form->setWindowTitle("Nuevo colaborador");
    newedit_colaborador_form->exec();

    updateContentFrame();
}

void ui_module_colaboradores::on_pushButton_editar_clicked()
{
    QModelIndexList selected=ui->tableView_colaboradores->selectionModel()->selectedRows();

    if(selected.size()!=1)
        QMessageBox::information(this,"Editar colaborador","Debe seleccionar a un solo colaborador!",QMessageBox::Ok);

    //fila seleccionada
    else
    {
        int row=selected.at(0).row();

        _QSTR pk_dni=ui->tableView_colaboradores->model()->data(ui->tableView_colaboradores->model()->index(row,0)).toString();
        qDebug()<<pk_dni<<endl;
        object_e_colaborador* colaboradorPorEditar=new object_e_colaborador;
        colaboradorPorEditar->mf_load(pk_dni);
        ui_newedit_colaborador *edita_colaborador_form = new ui_newedit_colaborador(false);
        edita_colaborador_form->setObjectColaborador(colaboradorPorEditar);
        edita_colaborador_form->setWindowTitle("Editar colaborador");
        edita_colaborador_form->llenarCamposEdicion();
        edita_colaborador_form->exec();

        updateContentFrame();
    }
}

void ui_module_colaboradores::on_pushButton_eliminar_clicked()
{
    QModelIndexList selectedList = ui->tableView_colaboradores->selectionModel()->selectedRows();
    if(selectedList.size()==0)
            QMessageBox::information(this,"Eliminar Colaborador", "Debe seleccionar al menos un colaborador");
    else
    {
        bool result=true;
        for (int i = 0; i < selectedList.size(); ++i)
        {
            QModelIndex index = selectedList.at(i);
            int row=index.row();

            _QSTR pk_dni=ui->tableView_colaboradores->model()->data(ui->tableView_colaboradores->model()->index(row,0)).toString();
            qDebug()<<"ELIMINANDO "<<pk_dni<<endl;
            result=SYSTEM->deleteColaborador(pk_dni);
        }
        if(result)
        {
            QMessageBox::information(this,"Eliminar Colaborador", "Colaboradores eliminados");
            updateContentFrame();
        }
        else
            QMessageBox::information(this,"Eliminar Colaborador", "Problema eliminando colaboradores.\nVuelva a intentarlo");
    }
}
