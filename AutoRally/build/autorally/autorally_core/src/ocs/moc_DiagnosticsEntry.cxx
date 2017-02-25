/****************************************************************************
** Meta object code from reading C++ file 'DiagnosticsEntry.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/autorally/autorally_core/src/ocs/DiagnosticsEntry.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DiagnosticsEntry.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagnosticsEntry[] = {

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
      24,   18,   17,   17, 0x0a,
      60,   17,   17,   17, 0x0a,
      77,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DiagnosticsEntry[] = {
    "DiagnosticsEntry\0\0index\0"
    "diagModelDoubleClicked(QModelIndex)\0"
    "clearStaleDiag()\0updateTimes()\0"
};

void DiagnosticsEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagnosticsEntry *_t = static_cast<DiagnosticsEntry *>(_o);
        switch (_id) {
        case 0: _t->diagModelDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->clearStaleDiag(); break;
        case 2: _t->updateTimes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagnosticsEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagnosticsEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DiagnosticsEntry,
      qt_meta_data_DiagnosticsEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagnosticsEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagnosticsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagnosticsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagnosticsEntry))
        return static_cast<void*>(const_cast< DiagnosticsEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int DiagnosticsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
