/****************************************************************************
** Meta object code from reading C++ file 'ui_new_articulo.h'
**
** Created: Fri 15. Mar 20:10:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_articulo[] = {

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
      22,   16,   17,   16, 0x08,
      46,   16,   16,   16, 0x08,
      78,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,
     127,   16,   16,   16, 0x08,
     153,   16,   16,   16, 0x08,
     180,   16,   16,   16, 0x08,
     207,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_articulo[] = {
    "ui_new_articulo\0\0bool\0validateRegistrarForm()\0"
    "on_pushButton_agregar_clicked()\0"
    "on_btn_aceptar_clicked()\0"
    "on_btn_borrar_clicked()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_add_grupo_clicked()\0"
    "on_btn_add_marca_clicked()\0"
    "on_btn_add_medida_clicked()\0"
};

void ui_new_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_articulo *_t = static_cast<ui_new_articulo *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->validateRegistrarForm();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_pushButton_agregar_clicked(); break;
        case 2: _t->on_btn_aceptar_clicked(); break;
        case 3: _t->on_btn_borrar_clicked(); break;
        case 4: _t->on_btn_cancelar_clicked(); break;
        case 5: _t->on_btn_add_grupo_clicked(); break;
        case 6: _t->on_btn_add_marca_clicked(); break;
        case 7: _t->on_btn_add_medida_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_new_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_articulo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_articulo,
      qt_meta_data_ui_new_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_articulo))
        return static_cast<void*>(const_cast< ui_new_articulo*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
