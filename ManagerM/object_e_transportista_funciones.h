#ifndef OBJECT_E_TRANSPORTISTA_FUNCIONES_H
#define OBJECT_E_TRANSPORTISTA_FUNCIONES_H

#include <QSqlTableModel>

class object_e_transportista_funciones
{
public:
    object_e_transportista_funciones();
    ~object_e_transportista_funciones();

    QSqlQueryModel* mf_model_transportistas();
};

#endif // OBJECT_E_TRANSPORTISTA_FUNCIONES_H
