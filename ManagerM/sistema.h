#ifndef SISTEMA_H
#define SISTEMA_H

#include "share_include.h"

class Sistema
{
private:

public:

    _STR code_grupo;
    _STR code_marca;
    _STR code_medida;

public:
    Sistema();

    bool validarUsuario(_QSTR nick, _QSTR pass);

    bool is_dbConfigurate();

    QSqlQuery getArticulos(_QSTR codigo, _QSTR nombre , _QSTR grupo, _QSTR marca, _QSTR medida, _QSTR stock, _QSTR precio);
    QSqlQuery getSelectQuery(vector<_QSTR> & select,vector<_QSTR> & from,vector<pair<_QSTR,_QSTR> >  where = vector<pair<_QSTR,_QSTR> >(),vector<pair<_QSTR,_QSTR> > joins = vector<pair<_QSTR,_QSTR> >(),_QSTR   extra="");
    int getAutoIncrement(const _QSTR tablename);
    QSqlQuery getBoletas();
    QSqlQuery getFacturas();



};


#endif // SISTEMA_H
