/****************************************************************************
** Meta object code from reading C++ file 'ui_edit_transportista.h'
**
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Fri 28. Jun 20:56:15 2013
=======
** Created: Thu 27. Jun 23:10:34 2013
>>>>>>> 822853736d658c17163f92d7ff1fd6f9bb017fd8
=======
** Created: Thu 27. Jun 23:10:34 2013
>>>>>>> 822853736d658c17163f92d7ff1fd6f9bb017fd8
=======
** Created: Sat 29. Jun 16:25:06 2013
>>>>>>> Se jodieron las interfaces <<<<< Revisa MILTON
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_edit_transportista.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_edit_transportista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_edit_transportista[] = {

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
      23,   22,   22,   22, 0x08,
      52,   22,   22,   22, 0x08,
      85,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_edit_transportista[] = {
    "ui_edit_transportista\0\0"
    "on_pushButton_link_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
    "on_pushButton_guardar_clicked()\0"
};

void ui_edit_transportista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_edit_transportista *_t = static_cast<ui_edit_transportista *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_link_clicked(); break;
        case 1: _t->on_pushButton_cancelar_clicked(); break;
        case 2: _t->on_pushButton_guardar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_edit_transportista::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_edit_transportista::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_edit_transportista,
      qt_meta_data_ui_edit_transportista, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_edit_transportista::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_edit_transportista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_edit_transportista::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_edit_transportista))
        return static_cast<void*>(const_cast< ui_edit_transportista*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_edit_transportista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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