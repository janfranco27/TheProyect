/****************************************************************************
** Meta object code from reading C++ file 'ui_new_guiarr.h'
**
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 11. May 21:12:56 2013
=======
<<<<<<< HEAD
=======
>>>>>>> <zx
** Created: Sat 11. May 12:56:40 2013
=======
** Created: Sat 11. May 15:39:55 2013
>>>>>>> fa606a52b2bab31aea78aa989b6645b6ad87f82f
<<<<<<< HEAD
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
=======
>>>>>>> <zx
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_guiarr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_guiarr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_guiarr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,
      99,   14,   14,   14, 0x08,
     141,   14,   14,   14, 0x08,
     175,   14,   14,   14, 0x08,
     206,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_guiarr[] = {
    "ui_new_guiarr\0\0on_pushButton_buscarProveedor_clicked()\0"
    "on_pushButton_buscarTransportista_clicked()\0"
    "on_pushButton_ingresarArticulos_clicked()\0"
    "on_pushButton_registrar_clicked()\0"
    "on_pushButton_editar_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
};

void ui_new_guiarr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_guiarr *_t = static_cast<ui_new_guiarr *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_buscarProveedor_clicked(); break;
        case 1: _t->on_pushButton_buscarTransportista_clicked(); break;
        case 2: _t->on_pushButton_ingresarArticulos_clicked(); break;
        case 3: _t->on_pushButton_registrar_clicked(); break;
        case 4: _t->on_pushButton_editar_clicked(); break;
        case 5: _t->on_pushButton_cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_new_guiarr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_guiarr::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_guiarr,
      qt_meta_data_ui_new_guiarr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_guiarr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_guiarr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_guiarr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_guiarr))
        return static_cast<void*>(const_cast< ui_new_guiarr*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_guiarr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
