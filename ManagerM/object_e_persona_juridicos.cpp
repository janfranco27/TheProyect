#include "share_include.h"

object_e_persona_juridicos::object_e_persona_juridicos()
{
	//function construct_0
	//w!
}

object_e_persona_juridicos::object_e_persona_juridicos(_QSTR pk_ruc, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR telefono_celular, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario)
{
	//function construct_1
	//w!

	md_o_pk_ruc = pk_ruc;
	md_o_razon_social = razon_social;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_telefono_celular = telefono_celular;
	md_o_fax = fax;
	md_o_representante = representante;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
}
object_e_persona_juridicos::object_e_persona_juridicos(_QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR telefono_celular, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario)
{
	//function construct_2
	//w!

	md_o_razon_social = razon_social;
	md_o_direccion = direccion;
	md_o_telefono_fijo = telefono_fijo;
	md_o_telefono_celular = telefono_celular;
	md_o_fax = fax;
	md_o_representante = representante;
	md_o_email = email;
	md_o_pagina_web = pagina_web;
	md_o_comentario = comentario;
}
object_e_persona_juridicos::~object_e_persona_juridicos()
{

}


void object_e_persona_juridicos::mf_set_pk_ruc(_QSTR pk_ruc)
{
	//function mf_set_pk_ruc
	//w!

	md_o_pk_ruc = pk_ruc;
}
void object_e_persona_juridicos::mf_set_razon_social(_QSTR razon_social)
{
	//function mf_set_razon_social
	//w!

	md_o_razon_social = razon_social;
}
void object_e_persona_juridicos::mf_set_direccion(_QSTR direccion)
{
	//function mf_set_direccion
	//w!

	md_o_direccion = direccion;
}
void object_e_persona_juridicos::mf_set_telefono_fijo(_QSTR telefono_fijo)
{
	//function mf_set_telefono_fijo
	//w!

	md_o_telefono_fijo = telefono_fijo;
}
void object_e_persona_juridicos::mf_set_telefono_celular(_QSTR telefono_celular)
{
	//function mf_set_telefono_celular
	//w!

	md_o_telefono_celular = telefono_celular;
}
void object_e_persona_juridicos::mf_set_fax(_QSTR fax)
{
	//function mf_set_fax
	//w!

	md_o_fax = fax;
}
void object_e_persona_juridicos::mf_set_representante(_QSTR representante)
{
	//function mf_set_representante
	//w!

	md_o_representante = representante;
}
void object_e_persona_juridicos::mf_set_email(_QSTR email)
{
	//function mf_set_email
	//w!

	md_o_email = email;
}
void object_e_persona_juridicos::mf_set_pagina_web(_QSTR pagina_web)
{
	//function mf_set_pagina_web
	//w!

	md_o_pagina_web = pagina_web;
}
void object_e_persona_juridicos::mf_set_comentario(_QSTR comentario)
{
	//function mf_set_comentario
	//w!

	md_o_comentario = comentario;
}

_QSTR object_e_persona_juridicos::mf_get_pk_ruc()
{
	//function mf_get_pk_ruc
	//w!

	return md_o_pk_ruc;
}
_QSTR object_e_persona_juridicos::mf_get_razon_social()
{
	//function mf_get_razon_social
	//w!

	return md_o_razon_social;
}
_QSTR object_e_persona_juridicos::mf_get_direccion()
{
	//function mf_get_direccion
	//w!

	return md_o_direccion;
}
_QSTR object_e_persona_juridicos::mf_get_telefono_fijo()
{
	//function mf_get_telefono_fijo
	//w!

	return md_o_telefono_fijo;
}
_QSTR object_e_persona_juridicos::mf_get_telefono_celular()
{
	//function mf_get_telefono_celular
	//w!

	return md_o_telefono_celular;
}
_QSTR object_e_persona_juridicos::mf_get_fax()
{
	//function mf_get_fax
	//w!

	return md_o_fax;
}
_QSTR object_e_persona_juridicos::mf_get_representante()
{
	//function mf_get_representante
	//w!

	return md_o_representante;
}
_QSTR object_e_persona_juridicos::mf_get_email()
{
	//function mf_get_email
	//w!

	return md_o_email;
}
_QSTR object_e_persona_juridicos::mf_get_pagina_web()
{
	//function mf_get_pagina_web
	//w!

	return md_o_pagina_web;
}
_QSTR object_e_persona_juridicos::mf_get_comentario()
{
	//function mf_get_comentario
	//w!

	return md_o_comentario;
}

bool object_e_persona_juridicos::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_persona_juridicos WHERE pk_ruc = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_ruc = query.value(0).toString();
		md_o_razon_social = query.value(1).toString();
		md_o_direccion = query.value(2).toString();
		md_o_telefono_fijo = query.value(3).toString();
		md_o_telefono_celular = query.value(4).toString();
		md_o_fax = query.value(5).toString();
		md_o_representante = query.value(6).toString();
		md_o_email = query.value(7).toString();
		md_o_pagina_web = query.value(8).toString();
		md_o_comentario = query.value(9).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_persona_juridicos::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	query.prepare("INSERT INTO e_persona_juridicos(razon_social, direccion, telefono_fijo, telefono_celular, fax, representante, email, pagina_web, comentario) VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?)");
	query.bindValue(0, md_o_razon_social);
	query.bindValue(1, md_o_direccion);
	query.bindValue(2, md_o_telefono_fijo);
	query.bindValue(3, md_o_telefono_celular);
	query.bindValue(4, md_o_fax);
	query.bindValue(5, md_o_representante);
	query.bindValue(6, md_o_email);
	query.bindValue(7, md_o_pagina_web);
	query.bindValue(8, md_o_comentario);

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

bool object_e_persona_juridicos::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_persona_juridicos SET razon_social = ?, direccion = ?, telefono_fijo = ?, telefono_celular = ?, fax = ?, representante = ?, email = ?, pagina_web = ?, comentario = ? WHERE pk_ruc = ?");
	query.bindValue(0, md_o_razon_social);
	query.bindValue(1, md_o_direccion);
	query.bindValue(2, md_o_telefono_fijo);
	query.bindValue(3, md_o_telefono_celular);
	query.bindValue(4, md_o_fax);
	query.bindValue(5, md_o_representante);
	query.bindValue(6, md_o_email);
	query.bindValue(7, md_o_pagina_web);
	query.bindValue(8, md_o_comentario);
	query.bindValue(9, md_o_pk_ruc);

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

bool object_e_persona_juridicos::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_persona_juridicos FROM pk_ruc = ?");
	query.bindValue(0, md_o_pk_ruc);

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

