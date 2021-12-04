QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += file_copies

COPIES += myDocumentation
myDocumentation.files = $$files($$PWD/frameworks/baumer/bin/*)
myDocumentation.path += $$OUT_PWD

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/frameworks/baumer/lib/ -lneoapi_cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/frameworks/baumer/lib/ -lneoapi_cpp
else:unix: LIBS += -L$$PWD/frameworks/baumer/lib/ -lneoapi_cpp

INCLUDEPATH += $$PWD/frameworks/baumer/include
DEPENDPATH += $$PWD/frameworks/baumer/include

INCLUDEPATH += $$PWD/views
DEPENDPATH += $$PWD/views

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    analysis/m2dock.cpp \
    main.cpp \
    mainwindow.cpp \
    views\settingdlg.cpp \
    views\versiondlg.cpp

HEADERS += \
    analysis/m2dock.h \
    mainwindow.h \
    views\settingdlg.h \
    views\versiondlg.h

FORMS += \
    analysis/m2dock.ui \
    mainwindow.ui \
    views\settingdlg.ui \
    views\versiondlg.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
