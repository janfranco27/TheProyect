/****************************************************************************
** Meta object code from reading C++ file 'ui_tool_bar.h'
**
<<<<<<< HEAD
** Created: Sat 27. Apr 23:27:19 2013
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 27. Apr 10:38:46 2013
=======
** Created: Sat 27. Apr 11:01:03 2013
>>>>>>> db
=======
** Created: Sat 27. Apr 18:07:57 2013
>>>>>>> EditPersonalInformation
=======
** Created: Sat 27. Apr 12:27:24 2013
>>>>>>> busqueda articulos
>>>>>>> f1059c91f4ab739db208fcd51e558f2d7a474144
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_tool_bar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_tool_bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_tool_bar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      42,   12,   12,   12, 0x08,
      73,   12,   12,   12, 0x08,
     106,   12,   12,   12, 0x08,
     142,   12,   12,   12, 0x08,
     176,   12,   12,   12, 0x08,
     208,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_tool_bar[] = {
    "ui_tool_bar\0\0on_pushButton_home_clicked()\0"
    "on_pushButton_ventas_clicked()\0"
    "on_pushButton_opciones_clicked()\0"
    "on_pushButton_colaborador_clicked()\0"
    "on_pushButton_articulos_clicked()\0"
    "on_pushButton_compras_clicked()\0"
    "on_pushButton_cliente_clicked()\0"
};

void ui_tool_bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_tool_bar *_t = static_cast<ui_tool_bar *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_home_clicked(); break;
        case 1: _t->on_pushButton_ventas_clicked(); break;
        case 2: _t->on_pushButton_opciones_clicked(); break;
        case 3: _t->on_pushButton_colaborador_clicked(); break;
        case 4: _t->on_pushButton_articulos_clicked(); break;
        case 5: _t->on_pushButton_compras_clicked(); break;
        case 6: _t->on_pushButton_cliente_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_tool_bar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_tool_bar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_tool_bar,
      qt_meta_data_ui_tool_bar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_tool_bar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_tool_bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_tool_bar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_tool_bar))
        return static_cast<void*>(const_cast< ui_tool_bar*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_tool_bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
