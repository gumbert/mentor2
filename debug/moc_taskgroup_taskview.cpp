/****************************************************************************
** Meta object code from reading C++ file 'taskgroup_taskview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tasks/view/views/taskgroup_taskview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskgroup_taskview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TaskGroupView_t {
    QByteArrayData data[7];
    char stringdata[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaskGroupView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaskGroupView_t qt_meta_stringdata_TaskGroupView = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 25),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 21),
QT_MOC_LITERAL(4, 63, 32),
QT_MOC_LITERAL(5, 96, 3),
QT_MOC_LITERAL(6, 100, 6)
    },
    "TaskGroupView\0on_tbtAddSelected_clicked\0"
    "\0on_tbtUpLevel_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaskGroupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

       0        // eod
};

void TaskGroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskGroupView *_t = static_cast<TaskGroupView *>(_o);
        switch (_id) {
        case 0: _t->on_tbtAddSelected_clicked(); break;
        case 1: _t->on_tbtUpLevel_clicked(); break;
        case 2: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TaskGroupView::staticMetaObject = {
    { &TaskView::staticMetaObject, qt_meta_stringdata_TaskGroupView.data,
      qt_meta_data_TaskGroupView,  qt_static_metacall, 0, 0}
};


const QMetaObject *TaskGroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskGroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TaskGroupView.stringdata))
        return static_cast<void*>(const_cast< TaskGroupView*>(this));
    return TaskView::qt_metacast(_clname);
}

int TaskGroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
