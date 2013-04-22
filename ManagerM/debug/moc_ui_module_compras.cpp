/****************************************************************************
** Meta object code from reading C++ file 'ui_module_compras.h'
**
** Created: Sun 21. Apr 22:25:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_module_compras.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_module_compras.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_module_compras[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      55,   18,   18,   18, 0x08,
      92,   18,   18,   18, 0x08,
     131,   18,   18,   18, 0x08,
     169,   18,   18,   18, 0x08,
     206,   18,   18,   18, 0x08,
     244,   18,   18,   18, 0x08,
     284,   18,   18,   18, 0x08,
     323,   18,   18,   18, 0x08,
     368,   18,   18,   18, 0x08,
     414,   18,   18,   18, 0x08,
     462,   18,   18,   18, 0x08,
     498,   18,   18,   18, 0x08,
     535,   18,   18,   18, 0x08,
     574,   18,   18,   18, 0x08,
     614,   18,   18,   18, 0x08,
     655,   18,   18,   18, 0x08,
     698,   18,   18,   18, 0x08,
     742,   18,   18,   18, 0x08,
     787,   18,   18,   18, 0x08,
     846,  834,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_module_compras[] = {
    "ui_module_compras\0\0"
    "on_pushButton_nuevo_clicked_orden()\0"
    "on_pushButton_editar_clicked_orden()\0"
    "on_pushButton_eliminar_clicked_orden()\0"
    "on_pushButton_generar_clicked_orden()\0"
    "on_pushButton_nuevo_clicked_guiaRR()\0"
    "on_pushButton_editar_clicked_guiaRR()\0"
    "on_pushButton_eliminar_clicked_guiaRR()\0"
    "on_pushButton_generar_clicked_guiaRR()\0"
    "on_pushButton_nuevo_clicked_factura_compra()\0"
    "on_pushButton_editar_clicked_factura_compra()\0"
    "on_pushButton_eliminar_clicked_factura_compra()\0"
    "on_pushButton_nuevo_clicked_flete()\0"
    "on_pushButton_editar_clicked_flete()\0"
    "on_pushButton_eliminar_clicked_flete()\0"
    "on_pushButton_nuevo_clicked_proveedor()\0"
    "on_pushButton_editar_clicked_proveedor()\0"
    "on_pushButton_eliminar_clicked_proveedor()\0"
    "on_pushButton_nuevo_clicked_transportista()\0"
    "on_pushButton_editar_clicked_transportista()\0"
    "on_pushButton_eliminar_clicked_transportista()\0"
    "item,column\0"
    "on_treeWidget_compras_itemDoubleClicked(QTreeWidgetItem*,int)\0"
};

void ui_module_compras::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_module_compras *_t = static_cast<ui_module_compras *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_nuevo_clicked_orden(); break;
        case 1: _t->on_pushButton_editar_clicked_orden(); break;
        case 2: _t->on_pushButton_eliminar_clicked_orden(); break;
        case 3: _t->on_pushButton_generar_clicked_orden(); break;
        case 4: _t->on_pushButton_nuevo_clicked_guiaRR(); break;
        case 5: _t->on_pushButton_editar_clicked_guiaRR(); break;
        case 6: _t->on_pushButton_eliminar_clicked_guiaRR(); break;
        case 7: _t->on_pushButton_generar_clicked_guiaRR(); break;
        case 8: _t->on_pushButton_nuevo_clicked_factura_compra(); break;
        case 9: _t->on_pushButton_editar_clicked_factura_compra(); break;
        case 10: _t->on_pushButton_eliminar_clicked_factura_compra(); break;
        case 11: _t->on_pushButton_nuevo_clicked_flete(); break;
        case 12: _t->on_pushButton_editar_clicked_flete(); break;
        case 13: _t->on_pushButton_eliminar_clicked_flete(); break;
        case 14: _t->on_pushButton_nuevo_clicked_proveedor(); break;
        case 15: _t->on_pushButton_editar_clicked_proveedor(); break;
        case 16: _t->on_pushButton_eliminar_clicked_proveedor(); break;
        case 17: _t->on_pushButton_nuevo_clicked_transportista(); break;
        case 18: _t->on_pushButton_editar_clicked_transportista(); break;
        case 19: _t->on_pushButton_eliminar_clicked_transportista(); break;
        case 20: _t->on_treeWidget_compras_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_module_compras::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_module_compras::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_module_compras,
      qt_meta_data_ui_module_compras, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_module_compras::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_module_compras::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_module_compras::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_module_compras))
        return static_cast<void*>(const_cast< ui_module_compras*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_module_compras::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
