#-------------------------------------------------
#
# Project created by QtCreator 2013-01-10T17:15:02
#
#-------------------------------------------------

QT       += core gui

QT       += sql
QT       += network

TARGET = ManagerM
TEMPLATE = app


SOURCES += main.cpp\
        ui_main.cpp \
    singleton.cpp \
    system_log.cpp \
    database_connection.cpp \
    session.cpp \
    ui_login.cpp \
    object_e_usuario.cpp \
    sistema.cpp \
    freequery.cpp \
    ui_colaborador.cpp \
    ui_opciones.cpp \
    ui_opciones_articulo.cpp \
    object_e_grupo.cpp \
    ui_opciones_base_datos.cpp \
    ui_inicio.cpp

HEADERS  += ui_main.h \
    share_include.h \
    share_typedef.h \
    singleton.h \
    system_log.h \
    database_connection.h \
    session.h \
    ui_login.h \
    object_e_usuario.h \
    sistema.h \
    freequery.h \
    object_general.h \
    ui_colaborador.h \
    ui_opciones.h \
    ui_opciones_articulo.h \
    object_e_grupo.h \
    ui_opciones_base_datos.h \
    ui_inicio.h

FORMS    += ui_main.ui \
    ui_login.ui \
    ui_colaborador.ui \
    ui_opciones.ui \
    ui_opciones_articulo.ui \
    ui_opciones_base_datos.ui \
    ui_inicio.ui

RESOURCES += \
    Icons.qrc
