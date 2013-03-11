#include "share_include.h"

object_e_articulo::object_e_articulo()
{
	//function construct_0
	//w!
}

object_e_articulo::object_e_articulo(_QSTR pk_articulo, _QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock)
{
	//function construct_1
	//w!

	md_o_pk_articulo = pk_articulo;
	md_o_fk_grupo = fk_grupo;
	md_o_fk_marca = fk_marca;
	md_o_fk_medida = fk_medida;
	md_o_descripcion = descripcion;
	md_o_precio_lista = precio_lista;
	md_o_stock = stock;
}
object_e_articulo::object_e_articulo(_QSTR fk_grupo, _QSTR fk_marca, _QSTR fk_medida, _QSTR descripcion, _QSTR precio_lista, _QSTR stock)
{
	//function construct_2
	//w!

	md_o_fk_grupo = fk_grupo;
	md_o_fk_marca = fk_marca;
	md_o_fk_medida = fk_medida;
	md_o_descripcion = descripcion;
	md_o_precio_lista = precio_lista;
	md_o_stock = stock;
}
object_e_articulo::~object_e_articulo()
{

}


void object_e_articulo::mf_set_pk_articulo(_QSTR pk_articulo)
{
	//function mf_set_pk_articulo
	//w!

	md_o_pk_articulo = pk_articulo;
}
void object_e_articulo::mf_set_fk_grupo(_QSTR fk_grupo)
{
	//function mf_set_fk_grupo
	//w!

	md_o_fk_grupo = fk_grupo;
}
void object_e_articulo::mf_set_fk_marca(_QSTR fk_marca)
{
	//function mf_set_fk_marca
	//w!

	md_o_fk_marca = fk_marca;
}
void object_e_articulo::mf_set_fk_medida(_QSTR fk_medida)
{
	//function mf_set_fk_medida
	//w!

	md_o_fk_medida = fk_medida;
}
void object_e_articulo::mf_set_descripcion(_QSTR descripcion)
{
	//function mf_set_descripcion
	//w!

	md_o_descripcion = descripcion;
}
void object_e_articulo::mf_set_precio_lista(_QSTR precio_lista)
{
	//function mf_set_precio_lista
	//w!

	md_o_precio_lista = precio_lista;
}
void object_e_articulo::mf_set_stock(_QSTR stock)
{
	//function mf_set_stock
	//w!

	md_o_stock = stock;
}

_QSTR object_e_articulo::mf_get_pk_articulo()
{
	//function mf_get_pk_articulo
	//w!

	return md_o_pk_articulo;
}
_QSTR object_e_articulo::mf_get_fk_grupo()
{
	//function mf_get_fk_grupo
	//w!

	return md_o_fk_grupo;
}
_QSTR object_e_articulo::mf_get_fk_marca()
{
	//function mf_get_fk_marca
	//w!

	return md_o_fk_marca;
}
_QSTR object_e_articulo::mf_get_fk_medida()
{
	//function mf_get_fk_medida
	//w!

	return md_o_fk_medida;
}
_QSTR object_e_articulo::mf_get_descripcion()
{
	//function mf_get_descripcion
	//w!

	return md_o_descripcion;
}
_QSTR object_e_articulo::mf_get_precio_lista()
{
	//function mf_get_precio_lista
	//w!

	return md_o_precio_lista;
}
_QSTR object_e_articulo::mf_get_stock()
{
	//function mf_get_stock
	//w!

	return md_o_stock;
}

bool object_e_articulo::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_articulo WHERE pk_articulo = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_articulo = query.value(0).toString();
		md_o_fk_grupo = query.value(1).toString();
		md_o_fk_marca = query.value(2).toString();
		md_o_fk_medida = query.value(3).toString();
		md_o_descripcion = query.value(4).toString();
		md_o_precio_lista = query.value(5).toString();
		md_o_stock = query.value(6).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_articulo::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_articulo(fk_grupo, fk_marca, fk_medida, descripcion, precio_lista, stock) VALUES(?, ?, ?, ?, ?, ?)");
	query.bindValue(0, md_o_fk_grupo);
	query.bindValue(1, md_o_fk_marca);
	query.bindValue(2, md_o_fk_medida);
	query.bindValue(3, md_o_descripcion);
	query.bindValue(4, md_o_precio_lista);
	query.bindValue(5, md_o_stock);

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

bool object_e_articulo::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_articulo SET fk_grupo = ?, fk_marca = ?, fk_medida = ?, descripcion = ?, precio_lista = ?, stock = ? WHERE pk_articulo = ?");
	query.bindValue(0, md_o_fk_grupo);
	query.bindValue(1, md_o_fk_marca);
	query.bindValue(2, md_o_fk_medida);
	query.bindValue(3, md_o_descripcion);
	query.bindValue(4, md_o_precio_lista);
	query.bindValue(5, md_o_stock);
	query.bindValue(6, md_o_pk_articulo);

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

bool object_e_articulo::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_articulo FROM pk_articulo = ?");
	query.bindValue(0, md_o_pk_articulo);

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

