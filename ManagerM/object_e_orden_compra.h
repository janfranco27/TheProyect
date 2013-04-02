#ifndef OBJECT_E_ORDEN_COMPRA_H
#define OBJECT_E_ORDEN_COMPRA_H

#include "share_include.h"

#define TABLE_NAME_E_ORDEN_COMPRA "e_orden_compra"
class object_e_orden_compra:public object_general
{

private:
	_QSTR md_o_pk_orden_compra;
	_QSTR md_o_fk_comprobante;
	_QSTR md_o_fk_transportista;
	_QSTR md_o_fk_proveedor;
	_QSTR md_o_fk_tipo_pago;
	_QSTR md_o_total;
	_QSTR md_o_igv;

public:
	object_e_orden_compra();
	object_e_orden_compra(_QSTR pk_orden_compra, _QSTR fk_comprobante, _QSTR fk_transportista, _QSTR fk_proveedor, _QSTR fk_tipo_pago, _QSTR total, _QSTR igv);
	object_e_orden_compra(_QSTR fk_comprobante, _QSTR fk_transportista, _QSTR fk_proveedor, _QSTR fk_tipo_pago, _QSTR total, _QSTR igv);

	void mf_set_pk_orden_compra(_QSTR pk_orden_compra);
	void mf_set_fk_comprobante(_QSTR fk_comprobante);
	void mf_set_fk_transportista(_QSTR fk_transportista);
	void mf_set_fk_proveedor(_QSTR fk_proveedor);
	void mf_set_fk_tipo_pago(_QSTR fk_tipo_pago);
	void mf_set_total(_QSTR total);
	void mf_set_igv(_QSTR igv);

	_QSTR mf_get_pk_orden_compra();
	_QSTR mf_get_fk_comprobante();
	_QSTR mf_get_fk_transportista();
	_QSTR mf_get_fk_proveedor();
	_QSTR mf_get_fk_tipo_pago();
	_QSTR mf_get_total();
	_QSTR mf_get_igv();

	bool mf_load(_QSTR pk);
	bool mf_add();
	bool mf_update();
	bool mf_remove();

	~object_e_orden_compra();
};
#endif // OBJECT_E_ORDEN_COMPRA_H
	/*
	object_e_orden_compra obj_e_orden_compra;
	obj_e_orden_compra.mf_set_pk_orden_compra();
	obj_e_orden_compra.mf_set_fk_comprobante();
	obj_e_orden_compra.mf_set_fk_transportista();
	obj_e_orden_compra.mf_set_fk_proveedor();
	obj_e_orden_compra.mf_set_fk_tipo_pago();
	obj_e_orden_compra.mf_set_total();
	obj_e_orden_compra.mf_set_igv();

	obj_e_orden_compra.mf_get_pk_orden_compra();
	obj_e_orden_compra.mf_get_fk_comprobante();
	obj_e_orden_compra.mf_get_fk_transportista();
	obj_e_orden_compra.mf_get_fk_proveedor();
	obj_e_orden_compra.mf_get_fk_tipo_pago();
	obj_e_orden_compra.mf_get_total();
	obj_e_orden_compra.mf_get_igv();
	*/
