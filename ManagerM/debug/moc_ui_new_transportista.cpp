/****************************************************************************
** Meta object code from reading C++ file 'ui_new_transportista.h'
**
<<<<<<< HEAD
** Created: Sat 27. Apr 23:28:05 2013
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 27. Apr 10:39:31 2013
=======
** Created: Sat 27. Apr 11:02:09 2013
>>>>>>> db
=======
** Created: Sat 27. Apr 18:09:41 2013
>>>>>>> EditPersonalInformation
=======
** Created: Sat 27. Apr 12:28:11 2013
>>>>>>> busqueda articulos
>>>>>>> f1059c91f4ab739db208fcd51e558f2d7a474144
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_transportista.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_transportista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_transportista[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      56,   21,   21,   21, 0x08,
      87,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_transportista[] = {
    "ui_new_transportista\0\0"
    "on_pushButton_registrar_clicked()\0"
    "on_pushButton_editar_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
};

void ui_new_transportista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_transportista *_t = static_cast<ui_new_transportista *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_registrar_clicked(); break;
        case 1: _t->on_pushButton_editar_clicked(); break;
        case 2: _t->on_pushButton_cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_new_transportista::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_transportista::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_transportista,
      qt_meta_data_ui_new_transportista, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_transportista::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_transportista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_transportista::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_transportista))
        return static_cast<void*>(const_cast< ui_new_transportista*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_transportista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
