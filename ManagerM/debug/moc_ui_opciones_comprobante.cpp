/****************************************************************************
** Meta object code from reading C++ file 'ui_opciones_comprobante.h'
**
** Created: Tue Jul 2 11:11:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_opciones_comprobante.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_opciones_comprobante.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_opciones_comprobante[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,
      91,   85,   24,   24, 0x08,
     133,   85,   24,   24, 0x08,
     174,   24,   24,   24, 0x08,
     205,   24,   24,   24, 0x08,
     236,   24,   24,   24, 0x08,
     267,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_opciones_comprobante[] = {
    "ui_opciones_comprobante\0\0"
    "on_pushButton_new_b_clicked()\0"
    "on_pushButton_new_f_clicked()\0index\0"
    "on_tableView_factura_clicked(QModelIndex)\0"
    "on_tableView_boleta_clicked(QModelIndex)\0"
    "on_pushButton_save_b_clicked()\0"
    "on_pushButton_save_f_clicked()\0"
    "on_pushButton_usar_f_clicked()\0"
    "on_pushButton_usar_b_clicked()\0"
};

void ui_opciones_comprobante::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_opciones_comprobante *_t = static_cast<ui_opciones_comprobante *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_new_b_clicked(); break;
        case 1: _t->on_pushButton_new_f_clicked(); break;
        case 2: _t->on_tableView_factura_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_tableView_boleta_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_save_b_clicked(); break;
        case 5: _t->on_pushButton_save_f_clicked(); break;
        case 6: _t->on_pushButton_usar_f_clicked(); break;
        case 7: _t->on_pushButton_usar_b_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_opciones_comprobante::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_opciones_comprobante::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_opciones_comprobante,
      qt_meta_data_ui_opciones_comprobante, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_opciones_comprobante::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_opciones_comprobante::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_opciones_comprobante::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_opciones_comprobante))
        return static_cast<void*>(const_cast< ui_opciones_comprobante*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_opciones_comprobante::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
