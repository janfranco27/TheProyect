/****************************************************************************
** Meta object code from reading C++ file 'ui_search_transportista.h'
**
<<<<<<< HEAD
** Created: Sun 23. Jun 21:01:49 2013
=======
** Created: Sat 22. Jun 10:18:55 2013
>>>>>>> check
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_search_transportista.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_search_transportista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_search_transportista[] = {

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
      30,   25,   24,   24, 0x08,
      75,   24,   24,   24, 0x08,
     103,   24,   24,   24, 0x08,
     131,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_search_transportista[] = {
    "ui_search_transportista\0\0arg1\0"
    "on_lineEdit_razonSocial_textChanged(QString)\0"
    "on_pushButton_new_clicked()\0"
    "on_pushButton_add_clicked()\0"
    "on_pushButton_change_clicked()\0"
};

void ui_search_transportista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_search_transportista *_t = static_cast<ui_search_transportista *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_razonSocial_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_new_clicked(); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->on_pushButton_change_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_search_transportista::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_search_transportista::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_search_transportista,
      qt_meta_data_ui_search_transportista, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_search_transportista::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_search_transportista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_search_transportista::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_search_transportista))
        return static_cast<void*>(const_cast< ui_search_transportista*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_search_transportista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
