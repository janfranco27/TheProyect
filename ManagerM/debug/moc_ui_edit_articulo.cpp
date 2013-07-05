/****************************************************************************
** Meta object code from reading C++ file 'ui_edit_articulo.h'
**
** Created: Thu Jul 4 21:40:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_edit_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_edit_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_edit_articulo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      43,   17,   17,   17, 0x08,
      69,   17,   17,   17, 0x08,
      96,   17,   17,   17, 0x08,
     124,   17,   17,   17, 0x08,
     148,   17,   17,   17, 0x08,
     173,   17,   17,   17, 0x08,
     201,   17,   17,   17, 0x08,
     230,   17,   17,   17, 0x08,
     260,   17,   17,   17, 0x08,
     293,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_edit_articulo[] = {
    "ui_edit_articulo\0\0on_btn_aceptar_clicked()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_add_marca_clicked()\0"
    "on_btn_add_medida_clicked()\0"
    "update_comboBox_Marca()\0"
    "update_comboBox_Medida()\0"
    "update_comboBox_Proveedor()\0"
    "select_last_inserted_Marca()\0"
    "select_last_inserted_Medida()\0"
    "select_last_inserted_Proveedor()\0"
    "on_btn_add_proveedor_clicked()\0"
};

void ui_edit_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_edit_articulo *_t = static_cast<ui_edit_articulo *>(_o);
        switch (_id) {
        case 0: _t->on_btn_aceptar_clicked(); break;
        case 1: _t->on_btn_cancelar_clicked(); break;
        case 2: _t->on_btn_add_marca_clicked(); break;
        case 3: _t->on_btn_add_medida_clicked(); break;
        case 4: _t->update_comboBox_Marca(); break;
        case 5: _t->update_comboBox_Medida(); break;
        case 6: _t->update_comboBox_Proveedor(); break;
        case 7: _t->select_last_inserted_Marca(); break;
        case 8: _t->select_last_inserted_Medida(); break;
        case 9: _t->select_last_inserted_Proveedor(); break;
        case 10: _t->on_btn_add_proveedor_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_edit_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_edit_articulo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui_edit_articulo,
      qt_meta_data_ui_edit_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_edit_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_edit_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_edit_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_edit_articulo))
        return static_cast<void*>(const_cast< ui_edit_articulo*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui_edit_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
