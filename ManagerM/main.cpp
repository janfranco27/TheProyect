#include <QtGui/QApplication>
#include "ui_main.h"

#include "share_include.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SYS_LOG_FILE(C_LOG_FILE_NAME);
    SYS_LOGX_FILE(C_LOG_FILE_ERROR_NAME);

    SYS_APP(C_APP_NAME);
    SYS_STATE(STATE_STAR_APP);

    SYS_WRITE;

    DATABASE_CONFIG(C_DB_FILE_CONFIG_NAME);

    if(DATABASE_CONNECT)
    {
        ui_login *login_form = new ui_login;
        login_form->show();
    }else{
        ui_opciones_base_datos *db_form = new ui_opciones_base_datos;
        db_form->show();
    }

   // APP_SHOW_MAXIMIZED;

    /*ui_main app_managerm;
    app_managerm.showMaximized();
    */

    return a.exec();
}
