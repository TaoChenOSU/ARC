/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/autorally/autorally_core/src/ocs/main_window.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      39,   11,   11,   11, 0x0a,
      78,   11,   11,   11, 0x0a,
     115,  109,   11,   11, 0x0a,
     164,  109,   11,   11, 0x0a,
     215,   11,   11,   11, 0x0a,
     248,   11,   11,   11, 0x0a,
     288,  282,   11,   11, 0x0a,
     307,   11,   11,   11, 0x0a,
     329,  325,   11,   11, 0x0a,
     384,  325,   11,   11, 0x0a,
     455,  441,   11,   11, 0x0a,
     484,  282,   11,   11, 0x0a,
     501,   11,   11,   11, 0x0a,
     526,  522,   11,   11, 0x0a,
     543,  522,   11,   11, 0x0a,
     560,  522,   11,   11, 0x0a,
     579,  109,   11,   11, 0x0a,
     602,   11,   11,   11, 0x0a,
     617,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionAbout_triggered()\0"
    "on_imageTopicsRefresh_button_clicked()\0"
    "on_saveImages_button_clicked()\0index\0"
    "on_imageTopics_comboBox_currentIndexChanged(int)\0"
    "on_imageTopics_comboBox_2_currentIndexChanged(int)\0"
    "on_pushButton_saveLeft_clicked()\0"
    "on_pushButton_saveRight_clicked()\0"
    "check\0enableMotion(bool)\0updateTimeBoxes()\0"
    "msg\0updateWheelSpeeds(autorally_msgs::wheelSpeedsConstPtr)\0"
    "updateActuatorData(autorally_msgs::chassisStateConstPtr)\0"
    "label,enabled\0setEnableLabel(QLabel*,bool)\0"
    "setControl(bool)\0sendChassisCommand()\0"
    "val\0setSteering(int)\0setThrottle(int)\0"
    "setFrontBrake(int)\0currentTabChanged(int)\0"
    "updateImage1()\0updateImage2()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_imageTopicsRefresh_button_clicked(); break;
        case 2: _t->on_saveImages_button_clicked(); break;
        case 3: _t->on_imageTopics_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_imageTopics_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_saveLeft_clicked(); break;
        case 6: _t->on_pushButton_saveRight_clicked(); break;
        case 7: _t->enableMotion((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 8: _t->updateTimeBoxes(); break;
        case 9: _t->updateWheelSpeeds((*reinterpret_cast< const autorally_msgs::wheelSpeedsConstPtr(*)>(_a[1]))); break;
        case 10: _t->updateActuatorData((*reinterpret_cast< const autorally_msgs::chassisStateConstPtr(*)>(_a[1]))); break;
        case 11: _t->setEnableLabel((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->sendChassisCommand(); break;
        case 14: _t->setSteering((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 15: _t->setThrottle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->setFrontBrake((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 17: _t->currentTabChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 18: _t->updateImage1(); break;
        case 19: _t->updateImage2(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
