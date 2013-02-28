#include "sistema.h"


Sistema::Sistema()
{
}



bool Sistema::validarUsuario(_QSTR nick, _QSTR pass)
{

    _QSTR consulta = "SELECT pk_dni FROM e_usuario WHERE nick = '"+nick+"' and clave = '"+pass+"'";

    TUPLES result = FREEQUERY(consulta);


    if(!result.empty())
    {
        USER_SET_NICK_NAME(nick.toStdString());


        return true;

    }


    return false;
}

bool Sistema::is_dbConfigurate()
{
    ifstream db_cfg;
    db_cfg.open(C_DB_FILE_DEFAULT_CONFIG_NAME);

    if(db_cfg.is_open())
    {
        qDebug()<<"Open"<<endl;
        return true;
    }else{
        qDebug()<<"No config_db"<<endl;
        return false;
    }
}

