/****************************************************************************
** Meta object code from reading C++ file 'ui_tipo_cambio_dolar.h'
**
** Created: Thu Jul 4 21:43:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_tipo_cambio_dolar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_tipo_cambio_dolar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_tipo_cambio_dolar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   32,   21,   21, 0x08,
      68,   21,   21,   21, 0x08,
      96,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_tipo_cambio_dolar[] = {
    "ui_tipo_cambio_dolar\0\0closing()\0date\0"
    "on_dateEdit_dateChanged(QDate)\0"
    "on_pushButton_new_clicked()\0"
    "on_pushButton_edit_clicked()\0"
};

void ui_tipo_cambio_dolar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_tipo_cambio_dolar *_t = static_cast<ui_tipo_cambio_dolar *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_new_clicked(); break;
        case 3: _t->on_pushButton_edit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_tipo_cambio_dolar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_tipo_cambio_dolar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_tipo_cambio_dolar,
      qt_meta_data_ui_tipo_cambio_dolar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_tipo_cambio_dolar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_tipo_cambio_dolar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_tipo_cambio_dolar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_tipo_cambio_dolar))
        return static_cast<void*>(const_cast< ui_tipo_cambio_dolar*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_tipo_cambio_dolar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ui_tipo_cambio_dolar::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
