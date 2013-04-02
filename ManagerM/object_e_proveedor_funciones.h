#ifndef OBJECT_E_PROVEEDOR_FUNCIONES_H
#define OBJECT_E_PROVEEDOR_FUNCIONES_H

#include <QSqlTableModel>

class object_e_proveedor_funciones
{
public:
    object_e_proveedor_funciones();
    ~object_e_proveedor_funciones();

    QSqlQueryModel* mf_model_proveedores();
};

#endif // OBJECT_E_PROVEEDOR_FUNCIONES_H
