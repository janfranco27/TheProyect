/****************************************************************************
** Meta object code from reading C++ file 'ui_pedido_nuevo.h'
**
** Created: Fri 8. Mar 14:30:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_pedido_nuevo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_pedido_nuevo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_pedido_nuevo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ui_pedido_nuevo[] = {
    "ui_pedido_nuevo\0"
};

void ui_pedido_nuevo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_pedido_nuevo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_pedido_nuevo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_pedido_nuevo,
      qt_meta_data_ui_pedido_nuevo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_pedido_nuevo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_pedido_nuevo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_pedido_nuevo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_pedido_nuevo))
        return static_cast<void*>(const_cast< ui_pedido_nuevo*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_pedido_nuevo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
