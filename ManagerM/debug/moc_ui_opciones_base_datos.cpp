/****************************************************************************
** Meta object code from reading C++ file 'ui_opciones_base_datos.h'
**
<<<<<<< HEAD
** Created: Mon 13. May 21:56:19 2013
=======
<<<<<<< HEAD
** Created: Sat 11. May 12:55:10 2013
=======
** Created: Sat 11. May 15:38:33 2013
>>>>>>> fa606a52b2bab31aea78aa989b6645b6ad87f82f
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_opciones_base_datos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_opciones_base_datos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_opciones_base_datos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_opciones_base_datos[] = {
    "ui_opciones_base_datos\0\0"
    "on_pushButton_guardar_clicked()\0"
};

void ui_opciones_base_datos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_opciones_base_datos *_t = static_cast<ui_opciones_base_datos *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_guardar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_opciones_base_datos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_opciones_base_datos::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_ui_opciones_base_datos,
      qt_meta_data_ui_opciones_base_datos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_opciones_base_datos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_opciones_base_datos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_opciones_base_datos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_opciones_base_datos))
        return static_cast<void*>(const_cast< ui_opciones_base_datos*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int ui_opciones_base_datos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
