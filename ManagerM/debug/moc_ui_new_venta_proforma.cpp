/****************************************************************************
** Meta object code from reading C++ file 'ui_new_venta_proforma.h'
**
<<<<<<< HEAD
** Created: Sun 23. Jun 21:00:51 2013
=======
** Created: Sat 22. Jun 10:18:01 2013
>>>>>>> check
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_venta_proforma.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_venta_proforma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_venta_proforma[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   23,   22,   22, 0x0a,
      50,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_venta_proforma[] = {
    "ui_new_venta_proforma\0\0,\0"
    "printValues(_QSTR,_QSTR)\0"
    "on_pushButton_clicked()\0"
};

void ui_new_venta_proforma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_venta_proforma *_t = static_cast<ui_new_venta_proforma *>(_o);
        switch (_id) {
        case 0: _t->printValues((*reinterpret_cast< _QSTR(*)>(_a[1])),(*reinterpret_cast< _QSTR(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_new_venta_proforma::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_venta_proforma::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_venta_proforma,
      qt_meta_data_ui_new_venta_proforma, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_venta_proforma::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_venta_proforma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_venta_proforma::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_venta_proforma))
        return static_cast<void*>(const_cast< ui_new_venta_proforma*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_venta_proforma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
