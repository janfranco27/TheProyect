/****************************************************************************
** Meta object code from reading C++ file 'ui_module_home.h'
**
** Created: Tue 2. Apr 01:41:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_module_home.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_module_home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_module_home[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      47,   15,   15,   15, 0x08,
      79,   15,   15,   15, 0x08,
     112,   15,   15,   15, 0x08,
     150,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_module_home[] = {
    "ui_module_home\0\0on_pushButton_ventas_clicked()\0"
    "on_pushButton_sistema_clicked()\0"
    "on_pushButton_articulo_clicked()\0"
    "on_pushButton_colaboradores_clicked()\0"
    "on_pushButton_compras_clicked()\0"
};

void ui_module_home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_module_home *_t = static_cast<ui_module_home *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_ventas_clicked(); break;
        case 1: _t->on_pushButton_sistema_clicked(); break;
        case 2: _t->on_pushButton_articulo_clicked(); break;
        case 3: _t->on_pushButton_colaboradores_clicked(); break;
        case 4: _t->on_pushButton_compras_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_module_home::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_module_home::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_module_home,
      qt_meta_data_ui_module_home, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_module_home::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_module_home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_module_home::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_module_home))
        return static_cast<void*>(const_cast< ui_module_home*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_module_home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
