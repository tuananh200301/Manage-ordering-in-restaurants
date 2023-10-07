QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    main.cpp \
    mainwindow.cpp \
    model/danhmuc.cpp \
    model/monan.cpp \
    model/thucdon.cpp \
    view/datmon.cpp \
    view/hoadon.cpp \
    view/login.cpp \
    view/quanly.cpp

HEADERS += \
    database.h \
    mainwindow.h \
    model/danhmuc.h \
    model/monan.h \
    model/thucdon.h \
    view/datmon.h \
    view/hoadon.h \
    view/login.h \
    view/quanly.h

FORMS += \
    mainwindow.ui \
    view/datmon.ui \
    view/hoadon.ui \
    view/login.ui \
    view/quanly.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    background.qrc
