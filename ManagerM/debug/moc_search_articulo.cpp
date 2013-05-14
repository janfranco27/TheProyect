/****************************************************************************
** Meta object code from reading C++ file 'search_articulo.h'
**
<<<<<<< HEAD
** Created: Sat 11. May 21:13:28 2013
=======
<<<<<<< HEAD
** Created: Sat 11. May 12:56:58 2013
=======
** Created: Sat 11. May 15:40:11 2013
>>>>>>> fa606a52b2bab31aea78aa989b6645b6ad87f82f
>>>>>>> 28382dcb3dff35f7dad6d3f153e8d2d18c8726be
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../search_articulo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search_articulo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_search_articulo[] = {

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
      17,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,
      84,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_search_articulo[] = {
    "search_articulo\0\0on_le_fk_marca_editingFinished()\0"
    "on_le_fk_medida_editingFinished()\0"
    "on_le_descripcion_editingFinished()\0"
};

void search_articulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        search_articulo *_t = static_cast<search_articulo *>(_o);
        switch (_id) {
        case 0: _t->on_le_fk_marca_editingFinished(); break;
        case 1: _t->on_le_fk_medida_editingFinished(); break;
        case 2: _t->on_le_descripcion_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData search_articulo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject search_articulo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_search_articulo,
      qt_meta_data_search_articulo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &search_articulo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *search_articulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *search_articulo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_search_articulo))
        return static_cast<void*>(const_cast< search_articulo*>(this));
    return QWidget::qt_metacast(_clname);
}

int search_articulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
