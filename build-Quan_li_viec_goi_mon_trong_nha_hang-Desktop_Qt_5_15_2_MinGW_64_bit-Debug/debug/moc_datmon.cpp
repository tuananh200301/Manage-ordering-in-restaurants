/****************************************************************************
** Meta object code from reading C++ file 'datmon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Quan_li_viec_goi_mon_trong_nha_hang/view/datmon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datmon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatMon_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatMon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatMon_t qt_meta_stringdata_DatMon = {
    {
QT_MOC_LITERAL(0, 0, 6), // "DatMon"
QT_MOC_LITERAL(1, 7, 23), // "on_tblDanhMuc_activated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 44, 5), // "index"
QT_MOC_LITERAL(5, 50, 22), // "on_btnLuuMonAn_clicked"
QT_MOC_LITERAL(6, 73, 22), // "on_btnXoaMonAn_clicked"
QT_MOC_LITERAL(7, 96, 22) // "on_btnDatMonAn_clicked"

    },
    "DatMon\0on_tblDanhMuc_activated\0\0"
    "QModelIndex\0index\0on_btnLuuMonAn_clicked\0"
    "on_btnXoaMonAn_clicked\0on_btnDatMonAn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatMon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatMon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatMon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tblDanhMuc_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_btnLuuMonAn_clicked(); break;
        case 2: _t->on_btnXoaMonAn_clicked(); break;
        case 3: _t->on_btnDatMonAn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatMon::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DatMon.data,
    qt_meta_data_DatMon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatMon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatMon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatMon.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DatMon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
