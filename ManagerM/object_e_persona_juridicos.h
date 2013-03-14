#ifndef OBJECT_E_PERSONA_JURIDICOS_H
#define OBJECT_E_PERSONA_JURIDICOS_H

#include "share_include.h"

class object_e_persona_juridicos:public object_general
{

private:
	_QSTR md_o_pk_ruc;
	_QSTR md_o_razon_social;
	_QSTR md_o_direccion;
	_QSTR md_o_telefono_fijo;
	_QSTR md_o_telefono_celular;
	_QSTR md_o_fax;
	_QSTR md_o_representante;
	_QSTR md_o_email;
	_QSTR md_o_pagina_web;
	_QSTR md_o_comentario;

public:
	object_e_persona_juridicos();
	object_e_persona_juridicos(_QSTR pk_ruc, _QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR telefono_celular, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario);
	object_e_persona_juridicos(_QSTR razon_social, _QSTR direccion, _QSTR telefono_fijo, _QSTR telefono_celular, _QSTR fax, _QSTR representante, _QSTR email, _QSTR pagina_web, _QSTR comentario);

	void mf_set_pk_ruc(_QSTR pk_ruc);
	void mf_set_razon_social(_QSTR razon_social);
	void mf_set_direccion(_QSTR direccion);
	void mf_set_telefono_fijo(_QSTR telefono_fijo);
	void mf_set_telefono_celular(_QSTR telefono_celular);
	void mf_set_fax(_QSTR fax);
	void mf_set_representante(_QSTR representante);
	void mf_set_email(_QSTR email);
	void mf_set_pagina_web(_QSTR pagina_web);
	void mf_set_comentario(_QSTR comentario);

	_QSTR mf_get_pk_ruc();
	_QSTR mf_get_razon_social();
	_QSTR mf_get_direccion();
	_QSTR mf_get_telefono_fijo();
	_QSTR mf_get_telefono_celular();
	_QSTR mf_get_fax();
	_QSTR mf_get_representante();
	_QSTR mf_get_email();
	_QSTR mf_get_pagina_web();
	_QSTR mf_get_comentario();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_persona_juridicos();
};
#endif // OBJECT_E_PERSONA_JURIDICOS_H