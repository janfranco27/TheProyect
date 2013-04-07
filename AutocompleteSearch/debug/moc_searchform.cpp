/****************************************************************************
** Meta object code from reading C++ file 'searchform.h'
**
** Created: Fri 29. Mar 20:53:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../searchform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchForm[] = {

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
      12,   11,   11,   11, 0x08,
      43,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SearchForm[] = {
    "SearchForm\0\0on_le_nombre_editingFinished()\0"
    "on_lineEdit_editingFinished()\0"
};

void SearchForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchForm *_t = static_cast<SearchForm *>(_o);
        switch (_id) {
        case 0: _t->on_le_nombre_editingFinished(); break;
        case 1: _t->on_lineEdit_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SearchForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchForm,
      qt_meta_data_SearchForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchForm))
        return static_cast<void*>(const_cast< SearchForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
