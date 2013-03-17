/****************************************************************************
** Meta object code from reading C++ file 'ui_articulo.h'
**
** Created: Sat 16. Mar 11:27:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_articulo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
      68,   62,   12,   12, 0x08,
     101,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_articulo[] = {
    "ui_articulo\0\0on_btn_borrar_clicked()\0"
    "on_btn_aceptar_clicked()\0index\0"
    "on_tabWidget_currentChanged(int)\0"
    "on_btn_registrar_clicked()\0"
};

void ui_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_articulo *_t = static_cast<ui_articulo *>(_o);
        switch (_id) {
        case 0: _t->on_btn_borrar_clicked(); break;
        case 1: _t->on_btn_aceptar_clicked(); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_btn_registrar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_articulo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_articulo,
      qt_meta_data_ui_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_articulo))
        return static_cast<void*>(const_cast< ui_articulo*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
