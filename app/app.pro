QT += quick testlib

CONFIG += c++11 testcase

include($$PWD/model/model.pri)

SOURCES += \
    filehelper.cpp \
    main.cpp \
    objectmapper.cpp \
    qmlsignals.cpp \
    filehelpertest.cpp

HEADERS += \
    filehelper.h \
    objectmapper.h \
    qmlsignals.h

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

