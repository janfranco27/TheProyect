#include "ui_login.h"
#include "ui_ui_login.h"

#include "share_include.h"

ui_login::ui_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_login)
{
    ui->setupUi(this);
    //------------------------
    md_p_ui_parent = 0;
    //------------------------

}

ui_login::~ui_login()
{
    delete ui;
    //-------------------
    delete md_p_ui_parent;
    //-------------------
}

//-------------------------------------------------------------
void ui_login::mf_set_ui_parent(ui_main *ui_parent)
{
    md_p_ui_parent = ui_parent;
}

ui_main* ui_login::mf_get_ui_parent()
{
    return md_p_ui_parent;
}

//-------------------------------------------------------------

void ui_login::on_pushButton_cancelar_clicked()
{
    close();
}

void ui_login::on_pushButton_aceptar_clicked()
{

    _QSTR usuario = ui->lineEdit_usuario->text();
    _QSTR text = ui->lineEdit_contrasenia->text();
    if(SYSTEM->validarUsuario(usuario,text))//revisar con la base de datos si el usuario es valido
    {
        //dar permmisos



        close();        
        APP_SHOW_MAXIMIZED;
        APP_STATUS_BAR(C_LOGIN_LOGGED);


    }else{
        //mensaje de usuario invalido
        QMessageBox::information(this,"Error","Usuario no valido");
    }
}
