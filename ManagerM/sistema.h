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

    //QMessageBox* message_box;

public:
    Sistema();

    bool validarUsuario(_QSTR nick, _QSTR pass);

    bool is_dbConfigurate();

    QSqlQuery getArticulos(_QSTR codigo, _QSTR nombre , _QSTR grupo, _QSTR marca, _QSTR medida, _QSTR stock, _QSTR precio);
    QSqlQuery getSelectQuery(vector<_QSTR> & select,vector<_QSTR> & from,vector<pair<_QSTR,_QSTR> >  where = vector<pair<_QSTR,_QSTR> >(),vector<pair<_QSTR,_QSTR> > joins = vector<pair<_QSTR,_QSTR> >(),_QSTR   extra="");
    QSqlQuery getDeleteQuery(_QSTR from,vector<pair<_QSTR,_QSTR> >  where );
    QSqlQuery getUpdateQuery(_QSTR from,vector<pair<_QSTR,_QSTR> >  set,vector<pair<_QSTR,_QSTR> >  where= vector<pair<_QSTR,_QSTR> >() );
    //Obtiene todos los valores ORDENADOS de la tabla y campo deseado
    QStringList getListOfValues(_QSTR tableName,_QSTR columnName);
    QStringList getListOfValuesNotSorted(_QSTR tableName,_QSTR columnName);

    int getAutoIncrement(const _QSTR tablename);
    void loadComboBoxFromVector(QComboBox *box, vector<_QSTR> &nombres, bool obligatorio);
    void loadComboBoxFromVector(QComboBox *box, QStringList nombres, bool obligatorio);
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
    //---
    QSqlQuery getBoletaSistema();
    QSqlQuery getFacturaSistema();

    //--


   vector<_QSTR> getAllTiposUsuarios();
   vector<_QSTR> getAllTiendas();
   vector<_QSTR> getAllRegiones();
   _QSTR getTienda(_QSTR nombreTienda);
   _QSTR getTipoUsuario(_QSTR nombreUsuario);
   _QSTR getProveedorPK(_QSTR nombreVendedor);
   _QSTR getNombreProveedor(_QSTR proveedorPK);
   _QSTR getProveedorPKFromArticulo(_QSTR articuloPK);

   bool deleteProveedor_Articulo(_QSTR proveedorPK, _QSTR articuloPK);
   bool deleteColaborador(_QSTR dni);
   //Modifica solo el proveedor (3er parametro)
   bool updateProveedor_Articulo(_QSTR proveedorPK, _QSTR articuloPK,_QSTR nuevoProveedorPK);


   QSqlQuery getClientes();
   _QSTR getRegion(_QSTR codigo_region);

   _QSTR getTienda();
   _QSTR getAdministrador();
   _QSTR getCodigoRegion(_QSTR region);
   void init_e_tipo_usuario();

   int messageInformation(_QSTR title,_QSTR message);
   int messageQuestion(_QSTR title,_QSTR message);
   int messageWarning(_QSTR title,_QSTR message);
   int messageCritical(_QSTR title,_QSTR message);
   
   //-----------
   _QSTR getDNIColaborador(_QSTR nick,_QSTR pass="");
   bool nickColaboradorValido(_QSTR nick);
   QSqlQuery getRucNombreClientes(_QSTR filtro="");

    int getNumeroComprobante();
    vector<_QSTR> getSerieNumero(int tipoComprobante);
    _QSTR getIGV();

};


#endif // SISTEMA_H
