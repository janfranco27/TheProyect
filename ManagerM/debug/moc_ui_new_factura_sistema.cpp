/****************************************************************************
** Meta object code from reading C++ file 'ui_new_factura_sistema.h'
**
** Created: Thu Jul 4 21:42:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_factura_sistema.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_factura_sistema.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_factura_sistema[] = {

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
      24,   23,   23,   23, 0x08,
      52,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_factura_sistema[] = {
    "ui_new_factura_sistema\0\0"
    "on_pushButton_new_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
};

void ui_new_factura_sistema::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_factura_sistema *_t = static_cast<ui_new_factura_sistema *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_new_clicked(); break;
        case 1: _t->on_pushButton_cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_new_factura_sistema::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_factura_sistema::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_factura_sistema,
      qt_meta_data_ui_new_factura_sistema, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_factura_sistema::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_factura_sistema::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_factura_sistema::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_factura_sistema))
        return static_cast<void*>(const_cast< ui_new_factura_sistema*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_factura_sistema::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
