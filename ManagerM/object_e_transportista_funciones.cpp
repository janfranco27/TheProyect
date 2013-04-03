#include "object_e_transportista_funciones.h"

object_e_transportista_funciones::object_e_transportista_funciones()
{
	//file e_transportista
	//function construct_0
	//w!
}

object_e_transportista_funciones::~object_e_transportista_funciones()
{
	//file e_transportista
	//function destruct_0
	//w!
}


QSqlQueryModel* object_e_transportista_funciones::mf_model_e_transportista()
{
    QSqlQueryModel* model = new QSqlQueryModel;
    QString str_query = "SELECT";
    str_query += " t.pk_ruc";
    str_query += ", pj.razon_social";
    str_query += ", pj.direccion";

    str_query += " FROM e_persona_juridicos pj, e_transportista t";
    str_query += " WHERE t.pk_ruc = pj.pk_ruc";
    // SELECT t.pk_ruc, pj.razon_social, pj.direccion FROM e_persona_juridicos pj, e_transportista t WHERE t.pk_ruc = pj.pk_ruc;

    model->setQuery(str_query);
    return model;
}

