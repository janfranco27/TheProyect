/****************************************************************************
** Meta object code from reading C++ file 'ui_module_articulos.h'
**
<<<<<<< HEAD
** Created: Sat 27. Apr 23:27:38 2013
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 27. Apr 10:39:04 2013
=======
** Created: Sat 27. Apr 11:01:31 2013
>>>>>>> db
=======
** Created: Sat 27. Apr 18:08:39 2013
>>>>>>> EditPersonalInformation
=======
** Created: Sat 27. Apr 12:27:43 2013
>>>>>>> busqueda articulos
>>>>>>> f1059c91f4ab739db208fcd51e558f2d7a474144
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_module_articulos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_module_articulos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_module_articulos[] = {

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
      21,   20,   20,   20, 0x08,
      53,   20,   20,   20, 0x08,
      86,   20,   20,   20, 0x08,
     111,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_module_articulos[] = {
    "ui_module_articulos\0\0"
    "on_pushButton_nuevo_2_clicked()\0"
    "on_pushButton_editar_2_clicked()\0"
    "update_table_articulos()\0"
    "on_pushButton_eliminar_2_clicked()\0"
};

void ui_module_articulos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_module_articulos *_t = static_cast<ui_module_articulos *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_nuevo_2_clicked(); break;
        case 1: _t->on_pushButton_editar_2_clicked(); break;
        case 2: _t->update_table_articulos(); break;
        case 3: _t->on_pushButton_eliminar_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_module_articulos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_module_articulos::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_module_articulos,
      qt_meta_data_ui_module_articulos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_module_articulos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_module_articulos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_module_articulos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_module_articulos))
        return static_cast<void*>(const_cast< ui_module_articulos*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_module_articulos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
