#include "object_e_orden_compra_funciones.h"

object_e_orden_compra_funciones::object_e_orden_compra_funciones()
{
	//file e_orden_compra
	//function construct_0
	//w!
}

object_e_orden_compra_funciones::~object_e_orden_compra_funciones()
{
	//file e_orden_compra
	//function destruct_0
	//w!
}

/*
QSqlQueryModel* object_e_orden_compra_funciones::mf_model_e_orden_compra()
{
	QSqlQueryModel* model = new QSqlQueryModel;
	QString str_query = "SELECT ";

	str_query += "pk_orden_compra";
	str_query += "fk_comprobante";
	str_query += "fk_transportista";
	str_query += "fk_proveedor";
	str_query += "fk_tipo_pago";
	str_query += "total";
	str_query += "igv";

	str_query += " FROM e_orden_compra";
	str_query += " WHERE";
	model->setQuery(str_query);
	return model;
}
*/
