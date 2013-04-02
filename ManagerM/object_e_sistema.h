#ifndef OBJECT_E_SISTEMA_H
#define OBJECT_E_SISTEMA_H

#include "share_include.h"

class object_e_sistema:public object_general
{

private:
	_QSTR md_o_pk_code;
	_QSTR md_o_igv;

public:
	object_e_sistema();
	object_e_sistema(_QSTR pk_code, _QSTR igv);
	object_e_sistema(_QSTR igv);

	void mf_set_pk_code(_QSTR pk_code);
	void mf_set_igv(_QSTR igv);

	_QSTR mf_get_pk_code();
	_QSTR mf_get_igv();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_sistema();
};
#endif // OBJECT_E_SISTEMA_H