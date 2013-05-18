#include "sistema.h"
#include <QSqlError>

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


            for(int i=1;i<(int)select.size();i++)
            {
                consulta+=","+select[i];
            }


            consulta+=" FROM "+from[0];

            for(int i=1;i<(int)from.size();i++)
            {
                consulta+=","+from[i];

            }

             bool primero = true;
            if(where.size()>0)
            {
                consulta+=" WHERE ";

                for(int i=0;i<(int)where.size();i++)
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

                for(int i=0;i<(int)joins.size();i++)
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

            for(int i=0;i<(int)where.size();i++)
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
                    qDebug()<<query.lastError()<<endl;
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

QSqlQuery Sistema::getDeleteQuery(_QSTR from, vector<pair<_QSTR, _QSTR> > where)
{
    _QSTR consulta = "DELETE FROM "+from  +" WHERE ";

    for(int i=0;i<(int)where.size();i++)
    {

        if(i==0)
        {
            consulta+= where[i].first + " = "+ where[i].second;
        }
        else
        {
            consulta+=" AND "+ where[i].first + " = "+ where[i].second;
        }
    }

    QSqlQuery query(consulta);


    if(query.exec())
    {
        qDebug()<<"query  OK";
    }
    else
    {
            qDebug()<<query.lastError()<<endl;
            qDebug()<<"query  NO";
    }

    return query;

}

QSqlQuery Sistema::getUpdateQuery(_QSTR from, vector<pair<_QSTR, _QSTR> > set, vector<pair<_QSTR, _QSTR> > where)
{
    _QSTR consulta = "UPDATE "+from  +" SET ";

    for(int i=0;i<(int)set.size();i++)
    {

        if(i==0)
        {
            consulta+= set[i].first + " = "+ set[i].second;
        }
        else
        {
            consulta+=", "+ set[i].first + " = "+ set[i].second;
        }
    }

    consulta+=" WHERE ";
    for(int i=0;i<(int)where.size();i++)
    {

        if(i==0)
        {
            consulta+= where[i].first + " = "+ where[i].second;
        }
        else
        {
            consulta+=", "+ where[i].first + " = "+ where[i].second;
        }
    }

    QSqlQuery query(consulta);


    if(query.exec())
    {
        qDebug()<<"query  OK";
    }
    else
    {
            qDebug()<<query.lastQuery();
            qDebug()<<query.lastError()<<endl;
            qDebug()<<"query  NO";
    }

    return query;

}

QStringList Sistema::getListOfValues(_QSTR tableName, _QSTR columnName)
{

    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where,joins;
    _QSTR extra = "ORDER BY "+columnName;

    select.push_back(columnName);
    from.push_back(tableName);

     QSqlQuery query = getSelectQuery(select,from,where,joins,extra);

     QStringList lista;

     while(query.next())
     {
        lista<<query.value(0).toString();
     }

     return lista;

}

QStringList Sistema::getListOfValuesNotSorted(_QSTR tableName, _QSTR columnName)
{

    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where,joins;


    select.push_back(columnName);
    from.push_back(tableName);

     QSqlQuery query = getSelectQuery(select,from,where,joins);

     QStringList lista;

     while(query.next())
     {
        lista<<query.value(0).toString();
     }

     return lista;
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

void Sistema::loadComboBoxFromVector(QComboBox *box, vector<_QSTR> & nombres, bool obligatorio)
{

    box->clear();

    if(!obligatorio)
        box->addItem("- Seleccione -");
    for(int i=0;i<(int)nombres.size();i++)
    {
        box->addItem(nombres[i]);
    }
}

void Sistema::loadComboBoxFromVector(QComboBox *box, QStringList nombres, bool obligatorio)
{
    box->clear();

    if(!obligatorio)
        box->addItem("- Seleccione -");
    for(int i=0;i<(int)nombres.size();i++)
    {
        box->addItem(nombres.at(i));
    }
}
vector<_QSTR> Sistema:: getDescripcion(const char *tablename)
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

QSqlQuery Sistema::getBoletaSistema()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_boleta_sistema");

    return getSelectQuery(select,from);
}

QSqlQuery Sistema::getFacturaSistema()
{
    vector<_QSTR> select,from;
    select.push_back("*");
    from.push_back("e_factura_sistema");

    return getSelectQuery(select,from);
}

vector<_QSTR> Sistema::getAllTiposUsuarios()
{
    vector<_QSTR> select,from;
    select.push_back("descripcion");
    from.push_back("e_tipo_usuario");

    QSqlQuery query=getSelectQuery(select,from);
    vector<_QSTR> tiposUsuario;
<<<<<<< HEAD
<<<<<<< HEAD
    if(query.exec())
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> <zx
    {
        while(query.next())
        {
            tiposUsuario.push_back(query.value(0).toString());
        }
    }
    return tiposUsuario;
}
vector<_QSTR> Sistema::getAllTiendas()
{
    vector<_QSTR> select,from;
    select.push_back("nombre");
    from.push_back("e_tienda");
    QSqlQuery query=getSelectQuery(select,from);

    vector<_QSTR> tiendas;
<<<<<<< HEAD
<<<<<<< HEAD
    if(query.exec())
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> <zx
    {
        while(query.next())
        {
            tiendas.push_back(query.value(0).toString());
        }
    }
    return tiendas;
}

vector<_QSTR> Sistema::getAllRegiones()
{
    vector<_QSTR> select,from;
    select.push_back("nombre_region");
    from.push_back("e_region");
    QSqlQuery query=getSelectQuery(select,from);
    vector<_QSTR> region;
<<<<<<< HEAD
<<<<<<< HEAD
    if(query.exec())
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
=======
    for(int i=0;i<(int)result.size();i++)
>>>>>>> <zx
    {
        while(query.next())
        {
            region.push_back(query.value(0).toString());
        }
    }
    return region;
}

_QSTR Sistema::getTienda(_QSTR nombreTienda)
{
    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where;
    select.push_back("pk_ruc");
    from.push_back("e_tienda");
    where.push_back(make_pair("nombre",nombreTienda));
    QSqlQuery query=getSelectQuery(select,from,where);

    if(query.exec())
    {
        query.next();
        return query.value(0).toString();
    }
    return "";
}

_QSTR Sistema::getTipoUsuario(_QSTR nombreUsuario)
{
    vector<_QSTR> select,from;
    vector<pair<_QSTR,_QSTR> > where;
    select.push_back("pk_tipo_usuario");
    from.push_back("e_tipo_usuario");
    where.push_back(make_pair("descripcion",nombreUsuario));
    QSqlQuery query=getSelectQuery(select,from,where);

    if(query.exec())
    {
        query.next();
        return query.value(0).toString();
    }
    return "";

}

_QSTR Sistema::getProveedorPK(_QSTR nombreVendedor)
{
    vector<_QSTR> select;
    select.push_back("pk_ruc");

    vector<_QSTR> from;
    from.push_back("e_proveedor");

    vector<pair<_QSTR,_QSTR> > where;

    where.push_back(make_pair("nombre_vendedor",nombreVendedor));


    QSqlQuery query = getSelectQuery(select,from,where);

    if(query.exec())
    {
        query.next();
        return query.value(0).toString();
    }
    else
        return "";

}

_QSTR Sistema::getNombreProveedor(_QSTR proveedorPK)
{
    vector<_QSTR> select;
    select.push_back("nombre_vendedor");

    vector<_QSTR> from;
    from.push_back("e_proveedor");

    vector<pair<_QSTR,_QSTR> > where;

    where.push_back(make_pair("pk_ruc",proveedorPK));


    QSqlQuery query = getSelectQuery(select,from,where);

    if(query.exec())
    {
        query.next();
        return query.value(0).toString();
    }
    else
        return "";




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
bool Sistema::updateProveedor_Articulo(_QSTR proveedorPK, _QSTR articuloPK, _QSTR nuevoProveedorPK)
{


        vector<pair<_QSTR,_QSTR> > set;
        set.push_back(make_pair("pk_proveedor",nuevoProveedorPK));

        vector<pair<_QSTR,_QSTR> > where;
        where.push_back(make_pair("pk_proveedor",proveedorPK));
        where.push_back(make_pair("pk_articulo",articuloPK));


        QSqlQuery query = getUpdateQuery("r_proveedor_articulo",set,where);


        return query.next();
}
QSqlQuery Sistema::getClientes()
{
    QSqlQuery query;
    _QSTR cons="SELECT e_cliente.pk_ruc,nombre_region,razon_social,direccion,telefono_fijo,telefono_celular, fax, "
            "representante, email,pagina_web,comentario FROM e_persona_juridica, e_cliente,e_region "
            "WHERE e_cliente.pk_ruc=e_persona_juridica.pk_ruc AND fk_region=pk_codigo_region";
    query.prepare(cons);
    if(query.exec())
    {
        //state OK
        //w!
         qDebug()<<"query  OK";
    }else{
        //state FAILED
        //w!
         qDebug()<<"query  NO";
    }
    return query;
}

_QSTR Sistema::getRegion(_QSTR codigo_region)
{
    QSqlQuery query;

    query.prepare("SELECT nombre_region FROM e_region WHERE pk_codigo_region="+codigo_region);
    query.exec();

    query.next();

    if(query.size()==0)
    {
        return "";
    }else{
        return query.value(0).toString();
    }
}

_QSTR Sistema::getTienda()
{
    QSqlQuery query;

    query.prepare("SELECT pk_ruc FROM e_tienda");
    query.exec();

    query.next();

    if(query.size()==0)
    {
        return "";
    }else{
        return query.value(0).toString();
    }





}

_QSTR Sistema::getAdministrador()
{
    QSqlQuery query;

    query.prepare("SELECT pk_dni FROM e_usuario WHERE fk_tipo_usuario=1");
    query.exec();

    query.next();

    if(query.size()==0)
    {
        return "";
    }else{
        return query.value(0).toString();
    }
}

_QSTR Sistema::getCodigoRegion(_QSTR region)
{
    QSqlQuery query;

    query.prepare("SELECT pk_codigo_region FROM e_region WHERE nombre_region='"+region+"'");
    query.exec();

    query.next();

    if(query.size()==0)
    {
        return "";
    }else{
        qDebug()<<"CODIGO REGION "<<query.value(0).toString()<<endl;
        return query.value(0).toString();
    }
}

void Sistema::init_e_tipo_usuario()
{
    QSqlQuery query;
    query.prepare("INSERT INTO e_tipo_usuario(descripcion,permisos) VALUES(?,?)");
    query.bindValue(0,"Administrador");
    query.bindValue(1,"1");
    query.exec();

    //inicializar todos los tipos de usuarios;

}

int Sistema::messageInformation(_QSTR title, _QSTR message)
{
    return QMessageBox::information(0,title,message,QMessageBox::Ok);

}

int Sistema::messageQuestion(_QSTR title, _QSTR message)
{
    return QMessageBox::question(0,title,message,QMessageBox::Yes,QMessageBox::No);
}

int Sistema::messageWarning(_QSTR title, _QSTR message)
{
    return QMessageBox::warning(0,title,message,QMessageBox::Yes,QMessageBox::No);
}

int Sistema::messageCritical(_QSTR title, _QSTR message)
{
    return QMessageBox::critical(0,title,message,QMessageBox::Yes,QMessageBox::No);
}

_QSTR Sistema::getDNIColaborador(_QSTR nick, _QSTR pass)
{
    vector<_QSTR> select;
    select.push_back("pk_dni");
    vector<_QSTR> from;
    from.push_back("e_usuario");

    vector<pair<_QSTR,_QSTR> > where;
    where.push_back(make_pair("nick",nick));
    if(pass!="")
        where.push_back(make_pair("clave",pass));

    QSqlQuery query=getSelectQuery(select,from,where);

    if(query.next())
        return query.value(0).toString();
    else return "";
}

bool Sistema::nickColaboradorValido(_QSTR nick)
{
    /*vector<_QSTR> select;
    select.push_back("nick");
    vector<_QSTR> from;
    from.push_back("e_usuario");

    vector<pair<_QSTR,_QSTR> > where;
    where.push_back(make_pair("nick",nick));
    if(pass!="")
        where.push_back(make_pair("clave",pass));

    QSqlQuery query=getSelectQuery(select,from,where);

    if(query.next())
        return query.value(0).toString();
    else return "";*/return true;
}

QSqlQuery Sistema::getRucNombreClientes(_QSTR filtro)
{
    QSqlQuery query;
    _QSTR cons="SELECT e_cliente.pk_ruc,razon_social FROM e_persona_juridica, e_cliente WHERE e_cliente.pk_ruc=e_persona_juridica.pk_ruc ";

    if(filtro!="")
        cons+=filtro;

    qDebug()<<cons<<endl<<endl;
    query.prepare(cons);
    if(query.exec())
    {
        //state OK
        //w!
         qDebug()<<"query  OK";
    }else{
        //state FAILED
        //w!
         qDebug()<<"query  NO";
    }
    return query;
}

_QSTR Sistema::getProveedorPKFromArticulo(_QSTR articuloPK)
{
    vector<_QSTR> select;
    select.push_back("pk_proveedor");

    vector<_QSTR> from;
    from.push_back("r_proveedor_articulo");

    vector<pair<_QSTR,_QSTR> > where;

    where.push_back(make_pair("pk_articulo",articuloPK));


    QSqlQuery query = getSelectQuery(select,from,where);



    if(query.next())
        return query.value(0).toString();
    else
        return "";


}

bool Sistema::deleteProveedor_Articulo(_QSTR proveedorPK, _QSTR articuloPK)
{

    vector<pair<_QSTR,_QSTR> > where;
    where.push_back(make_pair("pk_proveedor",proveedorPK));
    where.push_back(make_pair("pk_articulo",articuloPK));
    QSqlQuery query = getDeleteQuery("r_proveedor_articulo",where);

    return query.isValid();

}


