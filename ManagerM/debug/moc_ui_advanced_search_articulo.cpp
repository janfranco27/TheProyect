/****************************************************************************
** Meta object code from reading C++ file 'ui_advanced_search_articulo.h'
**
** Created: Sun 23. Jun 21:00:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_advanced_search_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_advanced_search_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_advanced_search_articulo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      43,   28,   28,   28, 0x0a,
      58,   28,   28,   28, 0x0a,
      72,   28,   28,   28, 0x0a,
      87,   28,   28,   28, 0x0a,
     107,   28,   28,   28, 0x0a,
     135,   28,   28,   28, 0x0a,
     149,   28,   28,   28, 0x0a,
     164,   28,   28,   28, 0x08,
     188,   28,   28,   28, 0x08,
     216,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_advanced_search_articulo[] = {
    "ui_advanced_search_articulo\0\0filterTodos()\0"
    "filterCodigo()\0filterMarca()\0"
    "filterMedida()\0filterDescripcion()\0"
    "filter_tipo_2_Descripcion()\0filterStock()\0"
    "filterPrecio()\0on_toolButton_clicked()\0"
    "on_lineEdit_returnPressed()\0"
    "on_tb_borrar_clicked()\0"
};

void ui_advanced_search_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_advanced_search_articulo *_t = static_cast<ui_advanced_search_articulo *>(_o);
        switch (_id) {
        case 0: _t->filterTodos(); break;
        case 1: _t->filterCodigo(); break;
        case 2: _t->filterMarca(); break;
        case 3: _t->filterMedida(); break;
        case 4: _t->filterDescripcion(); break;
        case 5: _t->filter_tipo_2_Descripcion(); break;
        case 6: _t->filterStock(); break;
        case 7: _t->filterPrecio(); break;
        case 8: _t->on_toolButton_clicked(); break;
        case 9: _t->on_lineEdit_returnPressed(); break;
        case 10: _t->on_tb_borrar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_advanced_search_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_advanced_search_articulo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_advanced_search_articulo,
      qt_meta_data_ui_advanced_search_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_advanced_search_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_advanced_search_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_advanced_search_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_advanced_search_articulo))
        return static_cast<void*>(const_cast< ui_advanced_search_articulo*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_advanced_search_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
