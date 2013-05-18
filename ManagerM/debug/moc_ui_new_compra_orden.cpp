/****************************************************************************
** Meta object code from reading C++ file 'ui_new_compra_orden.h'
**
** Created: Thu 16. May 22:14:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_compra_orden.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_compra_orden.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_compra_orden[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      61,   20,   20,   20, 0x08,
     105,   20,   20,   20, 0x08,
     147,   20,   20,   20, 0x08,
     181,   20,   20,   20, 0x08,
     212,   20,   20,   20, 0x08,
     245,   20,   20,   20, 0x08,
     279,   20,   20,   20, 0x08,
     322,  317,   20,   20, 0x08,
     371,  317,   20,   20, 0x08,
     424,   20,   20,   20, 0x08,
     468,   20,   20,   20, 0x08,
     516,   20,   20,   20, 0x08,
     563,   20,   20,   20, 0x08,
     614,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_compra_orden[] = {
    "ui_new_compra_orden\0\0"
    "on_pushButton_buscarProveedor_clicked()\0"
    "on_pushButton_buscarTransportista_clicked()\0"
    "on_pushButton_ingresarArticulos_clicked()\0"
    "on_pushButton_registrar_clicked()\0"
    "on_pushButton_editar_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
    "on_pushButton_proveedor_clicked()\0"
    "on_pushButton_transportista_clicked()\0"
    "arg1\0on_lineEdit_codigoProveedor_textChanged(QString)\0"
    "on_lineEdit_codigoTransportista_textChanged(QString)\0"
    "on_lineEdit_proveedorNombre_returnPressed()\0"
    "on_lineEdit_transportistaNombre_returnPressed()\0"
    "on_lineEdit_proveedorNombre_activated(QString)\0"
    "on_lineEdit_transportistaNombre_activated(QString)\0"
    "on_lineEdit_ingresarArticulo_returnPressed()\0"
};

void ui_new_compra_orden::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_compra_orden *_t = static_cast<ui_new_compra_orden *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_buscarProveedor_clicked(); break;
        case 1: _t->on_pushButton_buscarTransportista_clicked(); break;
        case 2: _t->on_pushButton_ingresarArticulos_clicked(); break;
        case 3: _t->on_pushButton_registrar_clicked(); break;
        case 4: _t->on_pushButton_editar_clicked(); break;
        case 5: _t->on_pushButton_cancelar_clicked(); break;
        case 6: _t->on_pushButton_proveedor_clicked(); break;
        case 7: _t->on_pushButton_transportista_clicked(); break;
        case 8: _t->on_lineEdit_codigoProveedor_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_lineEdit_codigoTransportista_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_lineEdit_proveedorNombre_returnPressed(); break;
        case 11: _t->on_lineEdit_transportistaNombre_returnPressed(); break;
        case 12: _t->on_lineEdit_proveedorNombre_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_lineEdit_transportistaNombre_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_lineEdit_ingresarArticulo_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_new_compra_orden::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_compra_orden::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_compra_orden,
      qt_meta_data_ui_new_compra_orden, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_compra_orden::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_compra_orden::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_compra_orden::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_compra_orden))
        return static_cast<void*>(const_cast< ui_new_compra_orden*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_compra_orden::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
