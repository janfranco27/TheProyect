/****************************************************************************
** Meta object code from reading C++ file 'ui_opciones_articulo.h'
**
** Created: Thu Jul 4 21:39:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_opciones_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_opciones_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_opciones_articulo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   32,   21,   21, 0x08,
      71,   21,   21,   21, 0x08,
     107,   21,   21,   21, 0x08,
     145,  142,   21,   21, 0x08,
     170,   21,   21,   21, 0x08,
     204,   32,   21,   21, 0x08,
     244,   21,   21,   21, 0x08,
     279,   32,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_opciones_articulo[] = {
    "ui_opciones_articulo\0\0closing()\0index\0"
    "on_tabWidget_currentChanged(int)\0"
    "on_pushButton_save_medida_clicked()\0"
    "on_pushButton_save_marca_clicked()\0"
    "ev\0closeEvent(QCloseEvent*)\0"
    "on_pushButton_new_marca_clicked()\0"
    "on_tableView_marca_clicked(QModelIndex)\0"
    "on_pushButton_new_medida_clicked()\0"
    "on_tableView_medida_clicked(QModelIndex)\0"
};

void ui_opciones_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_opciones_articulo *_t = static_cast<ui_opciones_articulo *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_save_medida_clicked(); break;
        case 3: _t->on_pushButton_save_marca_clicked(); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_new_marca_clicked(); break;
        case 6: _t->on_tableView_marca_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_new_medida_clicked(); break;
        case 8: _t->on_tableView_medida_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_opciones_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_opciones_articulo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_opciones_articulo,
      qt_meta_data_ui_opciones_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_opciones_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_opciones_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_opciones_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_opciones_articulo))
        return static_cast<void*>(const_cast< ui_opciones_articulo*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_opciones_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ui_opciones_articulo::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
