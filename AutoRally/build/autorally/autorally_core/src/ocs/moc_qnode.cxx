/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/autorally/autorally_core/src/ocs/qnode.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      25,   21,    6,    6, 0x05,
      77,   21,    6,    6, 0x05,
     131,    6,    6,    6, 0x05,
     143,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,    6,    6,    6, 0x0a,
     175,  169,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QNode[] = {
    "QNode\0\0rosShutdown()\0msg\0"
    "newWheelSpeeds(autorally_msgs::wheelSpeedsConstPtr)\0"
    "newChassisState(autorally_msgs::chassisStateConstPtr)\0"
    "newImage1()\0newImage2()\0updateTimes()\0"
    "index\0runstopModelDoubleClicked(QModelIndex)\0"
};

void QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QNode *_t = static_cast<QNode *>(_o);
        switch (_id) {
        case 0: _t->rosShutdown(); break;
        case 1: _t->newWheelSpeeds((*reinterpret_cast< const autorally_msgs::wheelSpeedsConstPtr(*)>(_a[1]))); break;
        case 2: _t->newChassisState((*reinterpret_cast< const autorally_msgs::chassisStateConstPtr(*)>(_a[1]))); break;
        case 3: _t->newImage1(); break;
        case 4: _t->newImage2(); break;
        case 5: _t->updateTimes(); break;
        case 6: _t->runstopModelDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QNode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QNode,
      qt_meta_data_QNode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNode))
        return static_cast<void*>(const_cast< QNode*>(this));
    return QThread::qt_metacast(_clname);
}

int QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QNode::newWheelSpeeds(const autorally_msgs::wheelSpeedsConstPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNode::newChassisState(const autorally_msgs::chassisStateConstPtr & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNode::newImage1()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QNode::newImage2()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
