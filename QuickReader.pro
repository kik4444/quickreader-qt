QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutqt.cpp \
    aboutquickreader.cpp \
    main.cpp \
    preferences.cpp \
    quickreader.cpp

HEADERS += \
    aboutqt.h \
    aboutquickreader.h \
    preferences.h \
    quickreader.h

FORMS += \
    aboutqt.ui \
    aboutquickreader.ui \
    preferences.ui \
    quickreader.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Set executable name
TARGET = quickreader

RESOURCES += \
    resources.qrc

RC_ICONS = Assets/winicon.ico
