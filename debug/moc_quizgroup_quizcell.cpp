/****************************************************************************
** Meta object code from reading C++ file 'quizgroup_quizcell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../quiz/view/views/cell/quizgroup_quizcell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quizgroup_quizcell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuizGroupCell_t {
    QByteArrayData data[3];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuizGroupCell_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuizGroupCell_t qt_meta_stringdata_QuizGroupCell = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0)
    },
    "QuizGroupCell\0updateNotify\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuizGroupCell[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QuizGroupCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuizGroupCell *_t = static_cast<QuizGroupCell *>(_o);
        switch (_id) {
        case 0: _t->updateNotify(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QuizGroupCell::staticMetaObject = {
    { &QuizCell::staticMetaObject, qt_meta_stringdata_QuizGroupCell.data,
      qt_meta_data_QuizGroupCell,  qt_static_metacall, 0, 0}
};


const QMetaObject *QuizGroupCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuizGroupCell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QuizGroupCell.stringdata))
        return static_cast<void*>(const_cast< QuizGroupCell*>(this));
    return QuizCell::qt_metacast(_clname);
}

int QuizGroupCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QuizCell::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
