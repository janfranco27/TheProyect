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

void ui_main::on_pushButton_showMenuBar_clicked()
{
    if(ui->menuBar->isHidden())
    {
        ui->menuBar->show();
    }else{
        ui->menuBar->hide();
    }
}

void ui_main::on_pushButton_sistema_clicked()
{
    ui_opciones* form_opciones = new ui_opciones;
    form_opciones->show();


}
