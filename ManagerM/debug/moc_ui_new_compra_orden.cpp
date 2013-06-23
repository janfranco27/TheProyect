/****************************************************************************
** Meta object code from reading C++ file 'ui_new_compra_orden.h'
**
<<<<<<< HEAD
** Created: Sat 22. Jun 17:08:57 2013
=======
** Created: Sat 22. Jun 20:09:14 2013
>>>>>>> Cambios modulos colaborador-cliente I
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
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      63,   20,   20,   20, 0x08,
      97,   20,   20,   20, 0x08,
     128,   20,   20,   20, 0x08,
     161,   20,   20,   20, 0x08,
     195,   20,   20,   20, 0x08,
     238,  233,   20,   20, 0x08,
     287,  233,   20,   20, 0x08,
     340,   20,   20,   20, 0x08,
     384,   20,   20,   20, 0x08,
     432,   20,   20,   20, 0x08,
     479,   20,   20,   20, 0x08,
     530,   20,   20,   20, 0x08,
     565,  559,   20,   20, 0x08,
     614,  559,   20,   20, 0x08,
     666,  661,   20,   20, 0x08,
     705,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_compra_orden[] = {
    "ui_new_compra_orden\0\0"
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
    "on_external_pushButton_add()\0index\0"
    "on_comboBox_tipo_moneda_currentIndexChanged(int)\0"
    "on_comboBox_modalidad_currentIndexChanged(int)\0"
    "date\0on_dateEdit_emision_dateChanged(QDate)\0"
    "on_widget_tipo_cambio_closing()\0"
};

void ui_new_compra_orden::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_compra_orden *_t = static_cast<ui_new_compra_orden *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_ingresarArticulos_clicked(); break;
        case 1: _t->on_pushButton_registrar_clicked(); break;
        case 2: _t->on_pushButton_editar_clicked(); break;
        case 3: _t->on_pushButton_cancelar_clicked(); break;
        case 4: _t->on_pushButton_proveedor_clicked(); break;
        case 5: _t->on_pushButton_transportista_clicked(); break;
        case 6: _t->on_lineEdit_codigoProveedor_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEdit_codigoTransportista_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_proveedorNombre_returnPressed(); break;
        case 9: _t->on_lineEdit_transportistaNombre_returnPressed(); break;
        case 10: _t->on_lineEdit_proveedorNombre_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_lineEdit_transportistaNombre_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_external_pushButton_add(); break;
        case 13: _t->on_comboBox_tipo_moneda_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_comboBox_modalidad_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_dateEdit_emision_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 16: _t->on_widget_tipo_cambio_closing(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
