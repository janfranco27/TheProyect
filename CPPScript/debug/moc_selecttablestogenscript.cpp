/****************************************************************************
** Meta object code from reading C++ file 'selecttablestogenscript.h'
**
** Created: Sun 14. Apr 20:22:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../selecttablestogenscript.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selecttablestogenscript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectTablesToGenScript[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      59,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SelectTablesToGenScript[] = {
    "SelectTablesToGenScript\0\0"
    "on_pushButton_selectAll_clicked()\0"
    "on_pushButton_generate_clicked()\0"
};

void SelectTablesToGenScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectTablesToGenScript *_t = static_cast<SelectTablesToGenScript *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_selectAll_clicked(); break;
        case 1: _t->on_pushButton_generate_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SelectTablesToGenScript::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectTablesToGenScript::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectTablesToGenScript,
      qt_meta_data_SelectTablesToGenScript, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectTablesToGenScript::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectTablesToGenScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectTablesToGenScript::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectTablesToGenScript))
        return static_cast<void*>(const_cast< SelectTablesToGenScript*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectTablesToGenScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
