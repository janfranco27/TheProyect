/****************************************************************************
** Meta object code from reading C++ file 'ui_module_clientes.h'
**
** Created: Sun 14. Apr 21:17:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_module_clientes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_module_clientes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_module_clientes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      50,   19,   19,   19, 0x08,
      81,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_module_clientes[] = {
    "ui_module_clientes\0\0on_pushButton_nuevo_clicked()\0"
    "on_pushButton_editar_clicked()\0"
    "on_pushButton_clicked()\0"
};

void ui_module_clientes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_module_clientes *_t = static_cast<ui_module_clientes *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_nuevo_clicked(); break;
        case 1: _t->on_pushButton_editar_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_module_clientes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_module_clientes::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_module_clientes,
      qt_meta_data_ui_module_clientes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_module_clientes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_module_clientes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_module_clientes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_module_clientes))
        return static_cast<void*>(const_cast< ui_module_clientes*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_module_clientes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
