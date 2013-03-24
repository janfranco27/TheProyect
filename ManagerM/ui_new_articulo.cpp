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

    update_form();
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
    if(ui->cb_grupo->currentIndex()==0)
    {
        articulo[2] = "";
    }
    else
    {
        articulo[2] = ui->cb_grupo->currentText();
    }
    if(ui->cb_marca->currentIndex()==0)
    {
        articulo[3] = "";
    }
    else
    {
        articulo[3] = ui->cb_marca->currentText();
    }

    if(ui->cb_medida->currentIndex()==0)
    {
        articulo[4] = "";
    }
    else
    {
        articulo[4] = ui->cb_medida->currentText();
    }

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

        //Incrementamos el codigo del articulo en 1
        incrementar_codigo();
        clear_input();

    }
}

void ui_new_articulo::on_btn_aceptar_clicked()
{
    int n_elementos = ui->tableWidget->rowCount();
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar "+QString::number(n_elementos)+" productos ?","Aceptar","Cancelar");
    bool ok = true;

        if(rpta==0)
        {
            qDebug()<<"Registrando: "<<n_elementos<<endl;
            object_e_articulo articulo;
            for(int i=0;i<n_elementos;i++)
            {




                    int grupo_index = ui->cb_grupo->findText(ui->tableWidget->item(i,2)->text());

                    int marca_index = ui->cb_marca->findText(ui->tableWidget->item(i,3)->text());
                    int medida_index = ui->cb_medida->findText(ui->tableWidget->item(i,4)->text());


                    QString grupo,marca,medida;

                     //No selecciono grupo
                    if(grupo_index==-1)
                    {
                        grupo="";
                    }
                    else
                    {
                        grupo = QString::number(grupo_index);
                    }

                    //No selecciono grupo
                    if(marca_index==-1)
                    {
                       marca="";
                    }
                    else
                    {
                       marca = QString::number(marca_index);
                    }

                    //No selecciono grupo
                    if(medida_index==-1)
                    {
                      medida="";
                    }
                    else
                    {
                      medida = QString::number(medida_index);
                    }

                    articulo.mf_set_descripcion(ui->tableWidget->item(i,1)->text());
                    articulo.mf_set_fk_grupo(grupo);
                    articulo.mf_set_fk_marca(marca);
                    articulo.mf_set_fk_medida(medida);
                    articulo.mf_set_stock(ui->tableWidget->item(i,5)->text());
                    articulo.mf_set_precio_lista(ui->tableWidget->item(i,6)->text());
                    articulo.mf_set_habilitado(C_HABILITADO);

                    //Si ocurrio un error al insertar en la BD
                    if(!articulo.mf_add())
                    {
                        ok = false;
                        break;
                    }

            }


            if(ok)
            {
                QMessageBox::information(this,"Registro correcto",C_CORRECTO_REGISTRO_ARTICULO)        ;
                reset_form();

            }
            else
            {
                QMessageBox::information(this,"Error en el registro",C_ERROR_REGISTRO_ARTICULO)        ;
            }
        }
        else
        {
              qDebug()<<"Cancel: "<<n_elementos<<endl;

        }
}

void ui_new_articulo::on_btn_borrar_clicked()
{
    reset_form();

}

void ui_new_articulo::on_btn_cancelar_clicked()
{
    close();
}

void ui_new_articulo::on_btn_add_grupo_clicked()
{
     openOpcionesArticuloWith(GRUPO);
}

void ui_new_articulo::on_btn_add_marca_clicked()
{
    openOpcionesArticuloWith(MARCA);
}

void ui_new_articulo::on_btn_add_medida_clicked()
{
    openOpcionesArticuloWith(MEDIDA);
}

void ui_new_articulo::openOpcionesArticuloWith(int tab)
{
    ui_opciones_articulo * form_opciones = new ui_opciones_articulo();
    connect(form_opciones,SIGNAL(closing()),this,SLOT(update_form()));
    form_opciones->setCurrentTab(tab);
    form_opciones->setAttribute(Qt::WA_DeleteOnClose);
    form_opciones->show();
}

void ui_new_articulo::update_form()
{

    //Obtenemos el valor correcto del codigo de articulo
    ui->l_resultado_2->setVisible(false);
    ui->l_codigoop->setText(QString::number(SYSTEM->getAutoIncrement("e_articulo")));


    //Actualizamos los combobox con la informacion de la BD

    vector<_QSTR> grupo = SYSTEM->getDescripcion("e_grupo");
    vector<_QSTR> marca = SYSTEM->getDescripcion("e_marca");
    vector<_QSTR> medida = SYSTEM->getDescripcion("e_medida");
    vector<_QSTR> proveedor = SYSTEM->getDescripcion("e_proveedor");


    SYSTEM->loadComboBoxFromVector(ui->cb_grupo,grupo,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_marca,marca,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_medida,medida,false);
    SYSTEM->loadComboBoxFromVector(ui->cb_proveedor,proveedor,false);

}

void ui_new_articulo::closeEvent(QCloseEvent *ev)
{
    emit closing();
}

void ui_new_articulo::reset_form()
{

    //Borramos los line edit y combobox
    clear_input();

    //Reestablecemos el valor correcto de la numeracion y actualizamos los valores de combobox
    update_form();

    //Borramos los articulos de la tabla
    while(ui->tableWidget->rowCount())
    {
           ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
    }
}

void ui_new_articulo::incrementar_codigo()
{
    //Incrementamos la numeracion del codigo de articullo

    ui->l_codigoop->setText(QString::number(ui->l_codigoop->text().toInt()+1));
}

void ui_new_articulo::clear_input()
{
    //Borra todos los line edits y deselecciona los combobox

    ui->le_nombre_2->clear();
    ui->cb_grupo->setCurrentIndex(0);
    ui->cb_marca->setCurrentIndex(0);
    ui->cb_medida->setCurrentIndex(0);
    ui->cb_proveedor->setCurrentIndex(0);
    ui->le_precio_2->clear();
    ui->le_stock_2->clear();
    ui->l_resultado_2->setVisible(false);

    ui->le_nombre_2->setFocus(Qt::OtherFocusReason);
}
