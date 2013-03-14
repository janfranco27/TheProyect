#include "ui_new_articulo.h"
#include "ui_ui_new_articulo.h"
#include "share_include.h"
const int numHeaders = 7;

//_QSTR headers[numHeaders] = {"Código","Nombre","Grupo","Marca","Medida","Precio","Stock"};
enum {MEDIDA,GRUPO,MARCA};
ui_new_articulo::ui_new_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_articulo)
{
    ui->setupUi(this);

     ui->l_resultado_2->setVisible(false);
     ui->l_codigoop->setText(QString::number(SYSTEM->getAutoIncrement("e_articulo")));

     vector<_QSTR> grupo = SYSTEM->getDescripcion("e_grupo");
     vector<_QSTR> marca = SYSTEM->getDescripcion("e_marca");
     vector<_QSTR> medida = SYSTEM->getDescripcion("e_medida");
     vector<_QSTR> proveedor = SYSTEM->getDescripcion("e_proveedor");


     SYSTEM->loadComboBoxFromVector(ui->cb_grupo,grupo,false);
     SYSTEM->loadComboBoxFromVector(ui->cb_marca,marca,false);
     SYSTEM->loadComboBoxFromVector(ui->cb_medida,medida,false);
     SYSTEM->loadComboBoxFromVector(ui->cb_proveedor,proveedor,false);
}

ui_new_articulo::~ui_new_articulo()
{
    delete ui;
}



bool ui_new_articulo::validateRegistrarForm()
{
        if(ui->le_precio_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: precio" );
           return false;
       }
       else    if(ui->le_nombre_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: nombre" );
           return false;
       }
       else    if(ui->le_stock_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: stock" );
           return false;
       }

   return true;
}

void ui_new_articulo::on_pushButton_agregar_clicked()
{
    vector<_QSTR> articulo(numHeaders);


    articulo[0] = ui->l_codigoop->text();
    articulo[1] = ui->le_nombre_2->text();
    articulo[2] =QString::number( ui->cb_grupo->currentIndex());
    articulo[3] = QString::number(ui->cb_marca->currentIndex());
    articulo[4] = QString::number(ui->cb_medida->currentIndex());
    articulo[5] = ui->le_stock_2->text();
    articulo[6] = ui->le_precio_2->text();

    if(validateRegistrarForm())
    {
        int count = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(count);

        ui->l_resultado_2->setVisible(true);
        for(int i=0;i<numHeaders;i++)
         {
            ui->tableWidget->setItem(count,i,new QTableWidgetItem(articulo[i]));
         }

    }
}

void ui_new_articulo::on_btn_aceptar_clicked()
{
    int n_elementos = ui->tableWidget->rowCount();
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar "+QString::number(n_elementos)+" productos ?","Aceptar","Cancelar");

        if(rpta==0)
        {
            qDebug()<<"Registrando: "<<n_elementos<<endl;
            object_e_articulo articulo;
            for(int i=0;i<n_elementos;i++)
            {


                    articulo.mf_set_descripcion(ui->tableWidget->item(i,1)->text());
                    articulo.mf_set_fk_grupo(ui->tableWidget->item(i,2)->text());
                    articulo.mf_set_fk_marca(ui->tableWidget->item(i,3)->text());
                    articulo.mf_set_fk_medida(ui->tableWidget->item(i,4)->text());
                    articulo.mf_set_stock(ui->tableWidget->item(i,5)->text());
                    articulo.mf_set_precio_lista(ui->tableWidget->item(i,6)->text());


                    if(articulo.mf_add())
                    {
                        QMessageBox::information(this,"Registro correcto","Los articulos fueron registrados correctamente")        ;
                    }
                    else
                    {
                        QMessageBox::information(this,"Error en el registro","Ocurrio un error al momento de registrar, intente de nuevo")        ;
                    }
            }
        }
        else
        {
              qDebug()<<"Cancel: "<<n_elementos<<endl;

        }
}

void ui_new_articulo::on_btn_borrar_clicked()
{
    ui->le_nombre_2->clear();
    ui->cb_grupo->setCurrentIndex(0);
    ui->cb_marca->setCurrentIndex(0);
    ui->cb_medida->setCurrentIndex(0);
    ui->cb_proveedor->setCurrentIndex(0);
    ui->le_precio_2->clear();
    ui->le_stock_2->clear();
    ui->l_resultado_2->setVisible(false);


}

void ui_new_articulo::on_btn_cancelar_clicked()
{
    close();
}

void ui_new_articulo::on_btn_add_grupo_clicked()
{
    ui_opciones_articulo * form_opciones = new ui_opciones_articulo();
    form_opciones->setCurrentTab(GRUPO);
    form_opciones->setAttribute(Qt::WA_DeleteOnClose);
    form_opciones->show();
}

void ui_new_articulo::on_btn_add_marca_clicked()
{
    ui_opciones_articulo * form_opciones = new ui_opciones_articulo();
    form_opciones->setCurrentTab(MARCA);
    form_opciones->setAttribute(Qt::WA_DeleteOnClose);
    form_opciones->show();
}

void ui_new_articulo::on_btn_add_medida_clicked()
{
    ui_opciones_articulo * form_opciones = new ui_opciones_articulo();
    form_opciones->setCurrentTab(MEDIDA);
    form_opciones->setAttribute(Qt::WA_DeleteOnClose);
    form_opciones->show();
}
