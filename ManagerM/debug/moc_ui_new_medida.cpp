/****************************************************************************
** Meta object code from reading C++ file 'ui_new_medida.h'
**
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 27. Apr 10:39:54 2013
=======
** Created: Sat 27. Apr 11:02:36 2013
>>>>>>> db
=======
** Created: Sat 27. Apr 18:10:32 2013
>>>>>>> EditPersonalInformation
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_new_medida.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_new_medida.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_new_medida[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   14,   14,   14, 0x08,
      60,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_new_medida[] = {
    "ui_new_medida\0\0closing()\0"
    "on_pushButton_new_medida_clicked()\0"
    "closeEvent(QCloseEvent*)\0"
};

void ui_new_medida::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_new_medida *_t = static_cast<ui_new_medida *>(_o);
        switch (_id) {
        case 0: _t->closing(); break;
        case 1: _t->on_pushButton_new_medida_clicked(); break;
        case 2: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_new_medida::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_new_medida::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_new_medida,
      qt_meta_data_ui_new_medida, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_new_medida::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_new_medida::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_new_medida::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_new_medida))
        return static_cast<void*>(const_cast< ui_new_medida*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_new_medida::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ui_new_medida::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
