/****************************************************************************
** Meta object code from reading C++ file 'ui_newedit_colaborador.h'
**
<<<<<<< HEAD
** Created: Sat 27. Apr 23:27:41 2013
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
** Created: Sat 27. Apr 10:39:09 2013
=======
** Created: Sat 27. Apr 11:01:38 2013
>>>>>>> db
=======
** Created: Sat 27. Apr 18:08:49 2013
>>>>>>> EditPersonalInformation
=======
** Created: Sat 27. Apr 12:27:48 2013
>>>>>>> busqueda articulos
>>>>>>> f1059c91f4ab739db208fcd51e558f2d7a474144
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_newedit_colaborador.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_newedit_colaborador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_newedit_colaborador[] = {

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
      24,   23,   23,   23, 0x08,
      63,   23,   23,   23, 0x08,
      94,   23,   23,   23, 0x08,
     122,   23,   23,   23, 0x08,
     154,   23,   23,   23, 0x08,
     188,   23,   23,   23, 0x08,
     222,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_newedit_colaborador[] = {
    "ui_newedit_colaborador\0\0"
    "on_pushButton_generateAccess_clicked()\0"
    "on_pushButton_cancel_clicked()\0"
    "on_lineEdit_dni_lostFocus()\0"
    "on_lineEdit_nombres_lostFocus()\0"
    "on_lineEdit_apPaterno_lostFocus()\0"
    "on_lineEdit_apMaterno_lostFocus()\0"
    "on_pushButton_save_clicked()\0"
};

void ui_newedit_colaborador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_newedit_colaborador *_t = static_cast<ui_newedit_colaborador *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_generateAccess_clicked(); break;
        case 1: _t->on_pushButton_cancel_clicked(); break;
        case 2: _t->on_lineEdit_dni_lostFocus(); break;
        case 3: _t->on_lineEdit_nombres_lostFocus(); break;
        case 4: _t->on_lineEdit_apPaterno_lostFocus(); break;
        case 5: _t->on_lineEdit_apMaterno_lostFocus(); break;
        case 6: _t->on_pushButton_save_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_newedit_colaborador::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_newedit_colaborador::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui_newedit_colaborador,
      qt_meta_data_ui_newedit_colaborador, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_newedit_colaborador::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_newedit_colaborador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_newedit_colaborador::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_newedit_colaborador))
        return static_cast<void*>(const_cast< ui_newedit_colaborador*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui_newedit_colaborador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
