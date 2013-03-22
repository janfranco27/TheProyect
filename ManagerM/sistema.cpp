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


QSqlQuery Sistema::getArticulos(_QSTR codigo, _QSTR nombre , _QSTR grupo, _QSTR marca, _QSTR medida, _QSTR stock, _QSTR precio)
{

    vector<_QSTR> select;
    select.push_back("A.pk_articulo");
    select.push_back("A.descripcion");
    select.push_back("G.descripcion");
    select.push_back("MA.descripcion");
    select.push_back("ME.descripcion");
    select.push_back("precio_lista");
    select.push_back("stock");


    vector<_QSTR> from;
    from.push_back("e_articulo as A");
    from.push_back("e_grupo as G");
    from.push_back("e_marca as MA");
    from.push_back("e_medida as ME");

    vector<pair<_QSTR,_QSTR> > where;
    where.push_back(make_pair("A.pk_articulo",codigo));
    where.push_back(make_pair("A.fk_grupo",grupo));
    where.push_back(make_pair("A.fk_marca",marca));
    where.push_back(make_pair("A.fk_medida",medida));
    where.push_back(make_pair("A.descripcion",nombre));
    where.push_back(make_pair("A.precio_lista",precio));
    where.push_back(make_pair("A.stock",stock));


    vector<pair<_QSTR,_QSTR> > joins;
    joins.push_back(make_pair("A.fk_grupo","G.pk_grupo"));
    joins.push_back(make_pair("A.fk_marca","MA.pk_marca"));
    joins.push_back(make_pair("A.fk_medida","ME.pk_medida"));


    return getSelectQuery(select,from,where,joins);
}

QSqlQuery Sistema::getSelectQuery(vector<_QSTR> & select,vector<_QSTR> & from,vector<pair<_QSTR,_QSTR> >  where,vector<pair<_QSTR,_QSTR> > joins,_QSTR   extra)
{
        SYS_FUNCTION("getQuery");
        SYS_WRITE;

        _QSTR consulta;
        QSqlQuery query;
        bool error = false;

        if(select.size()>0 && from.size()>0 )
        {
            consulta = "SELECT "+select[0];


            for(int i=1;i<select.size();i++)
            {
                consulta+=","+select[i];
            }


            consulta+=" FROM "+from[0];

            for(int i=1;i<from.size();i++)
            {
                consulta+=","+from[i];

            }

             bool primero = true;
            if(where.size()>0)
            {
                consulta+=" WHERE ";

                for(int i=0;i<where.size();i++)
                {
                    if(where[i].second!="")
                    {
                        //Si es la primer condicion
                        if(primero)
                        {
                            primero = false;
                        }
                        else
                        {
                            consulta+=" AND ";
                        }
                        consulta+=where[i].first+" = ?";


                    }

                }

            }

            if(joins.size()>0)
            {

                for(int i=0;i<joins.size();i++)
                {
                    if(joins[i].second!="")
                    {

                        consulta+=" AND "+joins[i].first+" = "+joins[i].second;


                    }

                }

            }

            if(extra!="")
            {
                consulta+=" "+extra;
            }



            qDebug()<<consulta;

            query.prepare(consulta);

            for(int i=0;i<where.size();i++)
            {
                if(where[i].second!="")
                {
                    query.addBindValue(where[i].second);
                }
            }

            if(query.exec())
            {
                qDebug()<<"query  OK";
            }
            else
            {
                    qDebug()<<"query  NO";
            }
        }
        else
        {
            error = true;

        }


        if(error)
        {
            qDebug()<<"Error! No se puede construir la consulta";
        }

          return query;


}

int Sistema::getAutoIncrement(const _QSTR tablename)
{
    QSqlQuery query;

    query.prepare("SHOW TABLE STATUS LIKE '"+tablename+"'");

    query.exec();


    query.next();

    int pos = query.record().indexOf("Auto_increment");

    return query.value(pos).toInt();
}

QSqlQuery Sistema::getBoletas()
{

    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_boleta_venta");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getFacturas()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_factura_venta");

    return getSelectQuery(select,from);

}

QSqlQuery Sistema::getBancos()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_banco");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getProveedores()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_proveedor");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getMarcas()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_marca");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getMedidas()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_medida");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getGrupos()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_grupo");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getArticulos()
{
    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where;
    select.push_back("*");
    from.push_back("e_articulo");
    where.push_back(make_pair("habilitado","1"));

    return getSelectQuery(select,from);
}

void Sistema::loadComboBoxFromVector(QComboBox *box, vector<_QSTR> &nombres, bool obligatorio)
{

    box->clear();

    if(!obligatorio)
        box->addItem("- Seleccione -");
    for(int i=0;i<(int)nombres.size();i++)
    {
        box->addItem(nombres[i]);
    }
}

vector<_QSTR> Sistema::getDescripcion(const char *tablename)
{
    vector<_QSTR> salida;

    vector<_QSTR> select;
    select.push_back("descripcion");

    vector<_QSTR> from;
    from.push_back(tablename);

    QSqlQuery query = getSelectQuery(select,from);

    while(query.next())
    {
        salida.push_back(query.value(0).toString());
    }

    return salida;
}

QSqlQuery Sistema::getColaboradores()
{
    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where;
    select.push_back("*");
    from.push_back("e_colaborador");
    where.push_back(make_pair("habilitado","1"));

    return getSelectQuery(select,from,where);
}

vector<_QSTR> Sistema::getAllTiposUsuarios()
{
    _QSTR consulta="SELECT descripcion FROM e_tipo_usuario";
    TUPLES result=FREEQUERY(consulta);
    vector<_QSTR> tiposUsuario;
    for(int i=0;i<result.size();i++)
    {
        tiposUsuario.push_back(result[i][0].toString());
    }

    return tiposUsuario;
}
vector<_QSTR> Sistema::getAllTiendas()
{
    _QSTR consulta="SELECT nombre FROM e_tienda";
    TUPLES result=FREEQUERY(consulta);
    vector<_QSTR> tiendas;
    for(int i=0;i<result.size();i++)
    {
        tiendas.push_back(result[i][0].toString());
    }
    return tiendas;
}

_QSTR Sistema::getTienda(_QSTR nombreTienda)
{
    _QSTR consulta="SELECT pk_ruc FROM e_tienda where nombre='"+nombreTienda+"'";
    TUPLES result = FREEQUERY(consulta);
    return result[0][0].toString();
}

_QSTR Sistema::getTipoUsuario(_QSTR nombreUsuario)
{
    _QSTR consulta="SELECT pk_tipo_usuario FROM e_tipo_usuario where descripcion='"+nombreUsuario+"'";
    TUPLES result = FREEQUERY(consulta);
    return result[0][0].toString();
}

bool Sistema::deleteColaborador(_QSTR dni)
{
    QSqlQuery query;

    query.prepare("UPDATE e_colaborador SET habilitado='0' WHERE pk_dni = ?");
    query.bindValue(0,dni);
    query.exec();

    if(query.exec())
    {
        //state OK
        //w!
        return true;
    }else{
        //state FAILED
        //w!
        return false;
    }
}

