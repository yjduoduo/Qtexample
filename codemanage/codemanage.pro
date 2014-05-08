#-------------------------------------------------
#
# Project created by QtCreator 2014-04-14T11:19:01
#
#-------------------------------------------------

QT       += core gui

TARGET = codemanage
TEMPLATE = app


SOURCES += main.cpp\
        codemanage.cpp \
    src/sqlite3/sqlite3.c \
    version.cpp

HEADERS  += codemanage.h \
    src/sqlite3/sqlite3ext.h \
    src/sqlite3/sqlite3.h \
    incall.h \
    version.h

FORMS    += codemanage.ui

OTHER_FILES += \
    src/sqlite3/sqlite3_version.txt

INCLUDEPATH += .\
    src/sqlite3  \
    src
