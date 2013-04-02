#include "share_include.h"

object_e_sistema::object_e_sistema()
{
	//file e_sistema
	//function construct_0
	//w!
}

object_e_sistema::object_e_sistema(_QSTR pk_code, _QSTR igv)
{
	//file e_sistema
	//function construct_1
	//w!

	md_o_pk_code = pk_code;
	md_o_igv = igv;
}
object_e_sistema::object_e_sistema(_QSTR igv)
{
	//file e_sistema
	//function construct_2
	//w!

	md_o_igv = igv;
}
object_e_sistema::~object_e_sistema()
{

}


void object_e_sistema::mf_set_pk_code(_QSTR pk_code)
{
	//function mf_set_pk_code
	//w!

	md_o_pk_code = pk_code;
}
void object_e_sistema::mf_set_igv(_QSTR igv)
{
	//function mf_set_igv
	//w!

	md_o_igv = igv;
}

_QSTR object_e_sistema::mf_get_pk_code()
{
	//function mf_get_pk_code
	//w!

	return md_o_pk_code;
}
_QSTR object_e_sistema::mf_get_igv()
{
	//function mf_get_igv
	//w!

	return md_o_igv;
}

bool object_e_sistema::mf_load(_QSTR pk)
{
	//function mf_load
	//w!

	QSqlQuery query;

	query.prepare("SELECT * FROM e_sistema WHERE pk_code = ?");
	query.bindValue(0,pk);
	query.exec();

	if(query.next())
	{
		md_o_pk_code = query.value(0).toString();
		md_o_igv = query.value(1).toString();

		//state OK
		//w!

		return true;
	}else{
		//state FAILED
		//w!

		return false;
	}
}
bool object_e_sistema::mf_add()
{
	//function mf_add
	//w!

	QSqlQuery query;

	string str_query = "INSERT INTO e_sistema(";
	if (md_o_pk_code != "")
		str_query += "pk_code";
	str_query += ", igv";
	str_query += ") VALUES(?";
	if (md_o_pk_code!= "")
	{
		str_query += ", ?";
	}
	str_query += ")";

	query.prepare(QString(str_query.c_str()));
	int integer = 0;
	if (md_o_pk_code != "")
	{
		query.bindValue(0, md_o_pk_code);
		integer++;
	}
	query.bindValue(integer++, md_o_igv);

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

bool object_e_sistema::mf_update()
{
	//function mf_update
	//w!

	QSqlQuery query;

	query.prepare("UPDATE e_sistema SET igv = ? WHERE pk_code = ?");
	query.bindValue(0, md_o_igv);
	query.bindValue(1, md_o_pk_code);

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

bool object_e_sistema::mf_remove()
{
	//function mf_remove
	//w!

	QSqlQuery query;

	query.prepare("DELETE e_sistema FROM pk_code = ?");
	query.bindValue(0, md_o_pk_code);

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

