/****************************************************************************
** Meta object code from reading C++ file 'datmon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../btl/Quan_li_viec_goi_mon_trong_nha_hang/view/datmon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datmon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatMon_t {
    const uint offsetsAndSize[16];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DatMon_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DatMon_t qt_meta_stringdata_DatMon = {
    {
QT_MOC_LITERAL(0, 6), // "DatMon"
QT_MOC_LITERAL(7, 23), // "on_tblDanhMuc_activated"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 11), // "QModelIndex"
QT_MOC_LITERAL(44, 5), // "index"
QT_MOC_LITERAL(50, 22), // "on_btnLuuMonAn_clicked"
QT_MOC_LITERAL(73, 22), // "on_btnXoaMonAn_clicked"
QT_MOC_LITERAL(96, 22) // "on_btnDatMonAn_clicked"

    },
    "DatMon\0on_tblDanhMuc_activated\0\0"
    "QModelIndex\0index\0on_btnLuuMonAn_clicked\0"
    "on_btnXoaMonAn_clicked\0on_btnDatMonAn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatMon[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

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
        (void)_t;
        switch (_id) {
        case 0: _t->on_tblDanhMuc_activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->on_btnLuuMonAn_clicked(); break;
        case 2: _t->on_btnXoaMonAn_clicked(); break;
        case 3: _t->on_btnDatMonAn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DatMon::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DatMon.offsetsAndSize,
    qt_meta_data_DatMon,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DatMon_t
, QtPrivate::TypeAndForceComplete<DatMon, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
