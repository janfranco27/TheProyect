/****************************************************************************
** Meta object code from reading C++ file 'ui_new_articulo.h'
**
<<<<<<< HEAD
** Created: Sun 23. Jun 20:58:14 2013
=======
** Created: Sat 22. Jun 10:15:44 2013
>>>>>>> check
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
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   16,   27,   16, 0x08,
      56,   16,   16,   16, 0x08,
      88,   16,   16,   16, 0x08,
     113,   16,   16,   16, 0x08,
     137,   16,   16,   16, 0x08,
     163,   16,   16,   16, 0x08,
     190,   16,   16,   16, 0x08,
     217,   16,   16,   16, 0x08,
     245,   16,   16,   16, 0x08,
     259,   16,   16,   16, 0x08,
     283,   16,   16,   16, 0x08,
     308,   16,   16,   16, 0x08,
     339,  336,   16,   16, 0x08,
     364,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_articulo[] = {
    "ui_new_articulo\0\0closing()\0bool\0"
    "validateRegistrarForm()\0"
    "on_pushButton_agregar_clicked()\0"
    "on_btn_aceptar_clicked()\0"
    "on_btn_borrar_clicked()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_add_grupo_clicked()\0"
    "on_btn_add_marca_clicked()\0"
    "on_btn_add_medida_clicked()\0update_form()\0"
    "update_comboBox_Marca()\0"
    "update_comboBox_Medida()\0"
    "update_comboBox_Proveedor()\0ev\0"
    "closeEvent(QCloseEvent*)\0"
    "on_btn_add_proveedor_clicked()\0"
};

void ui_new_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_articulo *_t = static_cast<ui_new_articulo *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: { bool _r = _t->validateRegistrarForm();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_agregar_clicked(); break;
        case 3: _t->on_btn_aceptar_clicked(); break;
        case 4: _t->on_btn_borrar_clicked(); break;
        case 5: _t->on_btn_cancelar_clicked(); break;
        case 6: _t->on_btn_add_grupo_clicked(); break;
        case 7: _t->on_btn_add_marca_clicked(); break;
        case 8: _t->on_btn_add_medida_clicked(); break;
        case 9: _t->update_form(); break;
        case 10: _t->update_comboBox_Marca(); break;
        case 11: _t->update_comboBox_Medida(); break;
        case 12: _t->update_comboBox_Proveedor(); break;
        case 13: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 14: _t->on_btn_add_proveedor_clicked(); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void ui_new_articulo::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
