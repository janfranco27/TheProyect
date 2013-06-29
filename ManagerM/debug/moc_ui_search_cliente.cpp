/****************************************************************************
** Meta object code from reading C++ file 'ui_search_cliente.h'
**
** Created: Thu 27. Jun 23:10:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_search_cliente.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_search_cliente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_search_cliente[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   61,   18,   18, 0x08,
     102,   61,   18,   18, 0x08,
     152,  146,   18,   18, 0x08,
     201,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_search_cliente[] = {
    "ui_search_cliente\0\0ruc,nombre\0"
    "returnInformation(_QSTR,_QSTR)\0arg1\0"
    "on_lineEdit_ruc_textEdited(QString)\0"
    "on_lineEdit_razonSocial_textEdited(QString)\0"
    "index\0on_tableView_clientes_doubleClicked(QModelIndex)\0"
    "on_buttonBox_accepted()\0"
};

void ui_search_cliente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_search_cliente *_t = static_cast<ui_search_cliente *>(_o);
        switch (_id) {
        case 0: _t->returnInformation((*reinterpret_cast< _QSTR(*)>(_a[1])),(*reinterpret_cast< _QSTR(*)>(_a[2]))); break;
        case 1: _t->on_lineEdit_ruc_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_razonSocial_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_tableView_clientes_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_search_cliente::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_search_cliente::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui_search_cliente,
      qt_meta_data_ui_search_cliente, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_search_cliente::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_search_cliente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_search_cliente::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_search_cliente))
        return static_cast<void*>(const_cast< ui_search_cliente*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui_search_cliente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ui_search_cliente::returnInformation(_QSTR _t1, _QSTR _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
