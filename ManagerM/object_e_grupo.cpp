#include "share_include.h"

object_e_grupo::object_e_grupo()
{
    SYS_FUNCTION("construct_0");
	SYS_WRITE;
}

object_e_grupo::object_e_grupo(_QSTR pk_grupo, _QSTR descripcion)
{
    SYS_FUNCTION("construct_1");
	SYS_WRITE;

	md_o_pk_grupo = pk_grupo;
	md_o_descripcion = descripcion;
}
object_e_grupo::object_e_grupo(_QSTR descripcion)
{
    SYS_FUNCTION("construct_2");
	SYS_WRITE;

	md_o_descripcion = descripcion;
}
object_e_grupo::~object_e_grupo()
{

}


void object_e_grupo::mf_set_pk_grupo(_QSTR pk_grupo)
{
    SYS_FUNCTION("mf_set_pk_grupo");
	SYS_WRITE;

	md_o_pk_grupo = pk_grupo;
}
void object_e_grupo::mf_set_descripcion(_QSTR descripcion)
{
    SYS_FUNCTION("mf_set_descripcion");
	SYS_WRITE;

	md_o_descripcion = descripcion;
}

_QSTR object_e_grupo::mf_get_pk_grupo()
{
    SYS_FUNCTION("mf_get_pk_grupo");
	SYS_WRITE;

	return md_o_pk_grupo;
}
_QSTR object_e_grupo::mf_get_descripcion()
{
    SYS_FUNCTION("mf_get_descripcion");
	SYS_WRITE;

	return md_o_descripcion;
}

bool object_e_grupo::mf_load(_QSTR pk)
{
    SYS_FUNCTION("mf_load");
	SYS_WRITE;

	QSqlQuery query;

	query.prepare("SELECT * FROM e_grupo WHERE pk_grupo = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_grupo = query.value(0).toString();
		md_o_descripcion = query.value(1).toString();

        SYS_STATE("OK");
		SYS_WRITE;

		return true;
	}else{
        SYS_STATE("FAILED");
		SYS_WRITE;

		return false;
	}
}
bool object_e_grupo::mf_add()
{
    SYS_FUNCTION("mf_add");
	SYS_WRITE;

	QSqlQuery query;

	query.prepare("INSERT INTO e_grupo(descripcion) VALUES(?)");
	query.bindValue(0, md_o_descripcion);

	if(query.exec())
	{
        SYS_STATE("OK");
		SYS_WRITE;

		return true;

	}else{
        SYS_STATE("FAILED");
		SYS_WRITE;

		return false;
	}
}

bool object_e_grupo::mf_update()
{
    SYS_FUNCTION("mf_update");
	SYS_WRITE;

	QSqlQuery query;

	query.prepare("UPDATE e_grupo SET descripcion = ? WHERE pk_grupo = ?");
	query.bindValue(0, md_o_descripcion);
	query.bindValue(1, md_o_pk_grupo);

	if(query.exec())
	{
        SYS_STATE("OK");
		SYS_WRITE;

		return true;

	}else{
        SYS_STATE("FAILED");
		SYS_WRITE;

		return false;
	}
}

bool object_e_grupo::mf_remove()
{
    SYS_FUNCTION("mf_remove");
	SYS_WRITE;

	QSqlQuery query;

	query.prepare("DELETE e_grupo FROM pk_grupo = ?");
	query.bindValue(0, md_o_pk_grupo);

	if(query.exec())
	{
        SYS_STATE("OK");
		SYS_WRITE;

		return true;

	}else{
        SYS_STATE("FAILED");
		SYS_WRITE;

		return false;
	}
}

