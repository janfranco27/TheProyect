/****************************************************************************
** Meta object code from reading C++ file 'ui_new_venta.h'
**
<<<<<<< HEAD
** Created: Sun 5. May 00:16:43 2013
=======
** Created: Sat 27. Apr 20:45:17 2013
>>>>>>> Commit
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_venta.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_venta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_venta[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x08,
      52,   13,   13,   13, 0x08,
      86,   13,   13,   13, 0x08,
     116,   14,   13,   13, 0x08,
     158,   14,   13,   13, 0x08,
     190,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_venta[] = {
    "ui_new_venta\0\0arg1\0on_le_nombre_textEdited(QString)\0"
    "on_pushButton_siguiente_clicked()\0"
    "on_pushButton_atras_clicked()\0"
    "on_cb_tipo_comprobante_activated(QString)\0"
    "on_le_marca_textEdited(QString)\0"
    "on_le_medida_textEdited(QString)\0"
};

void ui_new_venta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_venta *_t = static_cast<ui_new_venta *>(_o);
        switch (_id) {
        case 0: _t->on_le_nombre_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_siguiente_clicked(); break;
        case 2: _t->on_pushButton_atras_clicked(); break;
        case 3: _t->on_cb_tipo_comprobante_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_le_marca_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_le_medida_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_new_venta::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_venta::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_venta,
      qt_meta_data_ui_new_venta, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_venta::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_venta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_venta::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_venta))
        return static_cast<void*>(const_cast< ui_new_venta*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_venta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
