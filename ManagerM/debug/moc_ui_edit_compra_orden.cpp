/****************************************************************************
** Meta object code from reading C++ file 'ui_edit_compra_orden.h'
**
<<<<<<< HEAD
** Created: Sat 11. May 12:57:29 2013
=======
** Created: Sat 11. May 15:40:37 2013
>>>>>>> fa606a52b2bab31aea78aa989b6645b6ad87f82f
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_edit_compra_orden.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_edit_compra_orden.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_edit_compra_orden[] = {

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

static const char qt_meta_stringdata_ui_edit_compra_orden[] = {
    "ui_edit_compra_orden\0"
};

void ui_edit_compra_orden::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_edit_compra_orden::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_edit_compra_orden::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_edit_compra_orden,
      qt_meta_data_ui_edit_compra_orden, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_edit_compra_orden::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_edit_compra_orden::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_edit_compra_orden::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_edit_compra_orden))
        return static_cast<void*>(const_cast< ui_edit_compra_orden*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_edit_compra_orden::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
