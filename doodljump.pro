QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    doodler.cpp \
    exitbutton.cpp \
    gamemenu.cpp \
    jet.cpp \
    main.cpp \
    monsterlevel1.cpp \
    onegameview.cpp \
    placestage.cpp \
    playbutton.cpp \
    playerscore.cpp \
    shield.cpp \
    spring.cpp \
    twopersonplaybutton.cpp

HEADERS += \
    doodler.h \
    exitbutton.h \
    gamemenu.h \
    jet.h \
    monsterlevel1.h \
    onegameview.h \
    placestage.h \
    playbutton.h \
    playerscore.h \
    shield.h \
    spring.h \
    twopersonplaybutton.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
