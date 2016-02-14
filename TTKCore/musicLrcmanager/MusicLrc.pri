#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T23:19:41
#
#-------------------------------------------------

INCLUDEPATH += $$PWD

!contains(CONFIG, TTK_NO_MSVC_LINK_NEED){
HEADERS  += \
    $$PWD/musiclrcmanager.h \
    $$PWD/musiclrcmanagerfordesktop.h \
    $$PWD/musiclrcmanagerforinline.h \
    $$PWD/musiclrccontainer.h \
    $$PWD/musiclrccontainerfordesktop.h \
    $$PWD/musiclrccontainerforinline.h \
    $$PWD/musiclrcsearchwidget.h \
    $$PWD/musiclrcsearchtablewidget.h \
    $$PWD/musiclrcartphotoupload.h \
    $$PWD/musiclrcartphotolabel.h \
    $$PWD/musiclrcfloatwidget.h \
    $$PWD/musiclrcfloatabstractwidget.h \
    $$PWD/musiclrcfloatsettingwidget.h \
    $$PWD/musiclrcfloatphotowidget.h \
    $$PWD/musiclrcmakerwidget.h \
    $$PWD/musiclrcanalysis.h

}

contains(CONFIG, TTK_BUILD_LIB){
SOURCES += \
    $$PWD/musiclrcmanager.cpp \
    $$PWD/musiclrcmanagerfordesktop.cpp \
    $$PWD/musiclrcmanagerforinline.cpp \
    $$PWD/musiclrccontainer.cpp \
    $$PWD/musiclrccontainerfordesktop.cpp \
    $$PWD/musiclrccontainerforinline.cpp \
    $$PWD/musiclrcsearchwidget.cpp \
    $$PWD/musiclrcsearchtablewidget.cpp \
    $$PWD/musiclrcartphotoupload.cpp \
    $$PWD/musiclrcartphotolabel.cpp \
    $$PWD/musiclrcfloatwidget.cpp \
    $$PWD/musiclrcfloatabstractwidget.cpp \
    $$PWD/musiclrcfloatsettingwidget.cpp \
    $$PWD/musiclrcfloatphotowidget.cpp \
    $$PWD/musiclrcmakerwidget.cpp \
    $$PWD/musiclrcanalysis.cpp

}