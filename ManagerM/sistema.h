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
    void loadComboBoxFromVector(QComboBox *box, vector<_QSTR> &nombres, bool obligatorio);
    vector<_QSTR> getDescripcion(const char *tablename);
    QSqlQuery getBoletas();
    QSqlQuery getFacturas();
    QSqlQuery getBancos();
    QSqlQuery getProveedores();
    QSqlQuery getMarcas();
    QSqlQuery getMedidas();
    QSqlQuery getGrupos();
    QSqlQuery getArticulos();
    QSqlQuery getColaboradores();
   vector<_QSTR> getAllTiposUsuarios();
   vector<_QSTR> getAllTiendas();
   _QSTR getTienda(_QSTR nombreTienda);
   _QSTR getTipoUsuario(_QSTR nombreUsuario);
   bool deleteColaborador(_QSTR dni);



};


#endif // SISTEMA_H
