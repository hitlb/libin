/****************************************************************************
** Meta object code from reading C++ file 'processmanage.h'
**
** Created: Sat Jun 30 16:25:10 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProcessManagement/processmanage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processmanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProcessManage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,
      38,   15,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
      86,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     103,   14,   14,   14, 0x08,
     117,   14,   14,   14, 0x08,
     130,   14,   14,   14, 0x08,
     141,   14,   14,   14, 0x08,
     152,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,
     171,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProcessManage[] = {
    "ProcessManage\0\0index\0showTabInfo(int)\0"
    "on_tabWidget_currentChanged(int)\0"
    "printProcess()\0Info()\0NewWork()\0"
    "killProcess()\0refreshPro()\0shutdown()\0"
    "printNet()\0restart()\0detail()\0shuoming()\0"
};

const QMetaObject ProcessManage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ProcessManage,
      qt_meta_data_ProcessManage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProcessManage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProcessManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProcessManage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessManage))
        return static_cast<void*>(const_cast< ProcessManage*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ProcessManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showTabInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: printProcess(); break;
        case 3: Info(); break;
        case 4: NewWork(); break;
        case 5: killProcess(); break;
        case 6: refreshPro(); break;
        case 7: shutdown(); break;
        case 8: printNet(); break;
        case 9: restart(); break;
        case 10: detail(); break;
        case 11: shuoming(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
