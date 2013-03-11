/****************************************************************************
** Meta object code from reading C++ file 'ui_tree_ventas.h'
**
** Created: Mon 11. Mar 08:52:46 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_tree_ventas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_tree_ventas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_tree_ventas[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   25,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_tree_ventas[] = {
    "ui_tree_ventas\0\0boleta()\0index\0"
    "on_treeWidget_doubleClicked(QModelIndex)\0"
};

void ui_tree_ventas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_tree_ventas *_t = static_cast<ui_tree_ventas *>(_o);
        switch (_id) {
        case 0: _t->boleta(); break;
        case 1: _t->on_treeWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_tree_ventas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_tree_ventas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_tree_ventas,
      qt_meta_data_ui_tree_ventas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_tree_ventas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_tree_ventas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_tree_ventas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_tree_ventas))
        return static_cast<void*>(const_cast< ui_tree_ventas*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_tree_ventas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ui_tree_ventas::boleta()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
