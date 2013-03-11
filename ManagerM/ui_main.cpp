#include "ui_main.h"
#include "ui_ui_main.h"

#include "share_include.h"

ui_main::ui_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ui_main)
{
    ui->setupUi(this);

    ui->label_usuario->setText(QString(USER_GET_NICK_NAME.c_str()));
    ui->menuBar->hide();

    form_area_trabajo = new ui_area_trabajo;

}

ui_main::~ui_main()
{
    delete ui;
}

void ui_main::on_actionAcerca_de_ManagerM_triggered()
{
    QMessageBox::about(this,C_ABOUT_MANAGERM_TITLE,C_ABOUT_MANAGERM_DESCRIPCION);
}


void ui_main::on_actionPantalla_Completa_triggered()
{
    if(isFullScreen())
    {
        showMaximized();
    }else{
        showFullScreen();
    }

    //wlapp
}

void ui_main::on_actionSalir_triggered()
{
    close();
}


void ui_main::on_actionCerrar_Sesion_triggered()
{
    //cerrar sesion

    close();

    ui_login *form_login = new ui_login;
    form_login->show();

}

void ui_main::on_pushButton_colaboradores_clicked()
{

    ui_colaborador * colaboForm = new ui_colaborador;

    colaboForm->show();
}



void ui_main::on_pushButton_sistema_clicked()
{
    ui_opciones* form_opciones = new ui_opciones;
    form_opciones->show();


}

void ui_main::keyPressEvent(QKeyEvent *event)
{
    /*
    if(event->key() == Qt::Key_Alt)
    {
        ui->menuBar->setHidden(!(ui->menuBar->isHidden()));
        qDebug()<<"Press ALT"<<endl;
    }
    */
}

void ui_main::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Alt)
    {
        ui->menuBar->setHidden(!(ui->menuBar->isHidden()));

    }
}

void ui_main::on_pushButton_articulo_clicked()
{
    ui_articulo *form_articulo = new ui_articulo;
    form_articulo->show();
}

void ui_main::on_pushButton_ventas_clicked()
{
    form_area_trabajo->setModulo(VENTAS);
    form_area_trabajo->show();
   // form_area_trabajo->showMaximized();

}
