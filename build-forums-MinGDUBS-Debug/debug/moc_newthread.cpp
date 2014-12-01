/****************************************************************************
** Meta object code from reading C++ file 'newthread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../forums/newthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newThread[] = {

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
      16,   11,   10,   10, 0x08,
      58,   11,   10,   10, 0x08,
      91,   10,   10,   10, 0x08,
     113,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newThread[] = {
    "newThread\0\0arg1\0"
    "on_selectType_currentTextChanged(QString)\0"
    "on_selectType_activated(QString)\0"
    "on_checkBox_clicked()\0on_pushButton_clicked()\0"
};

void newThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newThread *_t = static_cast<newThread *>(_o);
        switch (_id) {
        case 0: _t->on_selectType_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_selectType_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData newThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newThread::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newThread,
      qt_meta_data_newThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newThread))
        return static_cast<void*>(const_cast< newThread*>(this));
    return QDialog::qt_metacast(_clname);
}

int newThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
