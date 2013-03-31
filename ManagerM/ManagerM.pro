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
    object_e_grupo.cpp \
    ui_opciones_base_datos.cpp \
    object_e_articulo.cpp \
    ui_opciones_articulo.cpp \
    object_e_medida.cpp \
    object_e_marca.cpp \
    ui_module_home.cpp \
    ui_module_ventas.cpp \
    ui_tool_bar.cpp \
    ui_edit_boleta_venta.cpp \
    ui_opciones_banco.cpp \
    object_e_banco.cpp \
    ui_opciones_proveedor.cpp \
    ui_edit_proveedor.cpp \
    object_e_proveedor.cpp \
    object_e_persona_juridicos.cpp \
    ui_module_articulos.cpp \
    ui_new_articulo.cpp\
    object_e_tipo_usuario.cpp \
    object_e_tienda.cpp \
    object_e_colaborador.cpp \
    ui_newedit_colaborador.cpp \
    ui_module_colaboradores.cpp \
    ui_opciones_tienda.cpp \
    ui_edit_articulo.cpp \
    ui_new_venta.cpp \
    ui_new_venta_boleta.cpp \
    ui_new_venta_factura.cpp \
    generado.cpp \
    lineedit.cpp

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
    object_e_grupo.h \
    ui_opciones_base_datos.h \
    object_e_articulo.h \
    ui_opciones_articulo.h \
    object_e_medida.h \
    object_e_marca.h \
    ui_module_home.h \
    ui_module_ventas.h \
    ui_tool_bar.h \
    ui_edit_boleta_venta.h \
    ui_opciones_banco.h \
    object_e_banco.h \
    ui_opciones_proveedor.h \
    ui_edit_proveedor.h \
    object_e_proveedor.h \
    object_e_persona_juridicos.h \
    ui_module_articulos.h \
    ui_new_articulo.h \
    object_e_tipo_usuario.h \
    object_e_tienda.h \
    object_e_colaborador.h \
    ui_newedit_colaborador.h \
    ui_module_colaboradores.h \
    ui_opciones_tienda.h \
    ui_edit_articulo.h \
    database_connection.h \
    ui_new_venta.h \
    ui_new_venta_boleta.h \
    ui_new_venta_factura.h \
    generado.h \
    lineedit.h


FORMS    += ui_main.ui \
    ui_login.ui \
    ui_colaborador.ui \
    ui_opciones.ui \
    ui_opciones_base_datos.ui \
    ui_opciones_articulo.ui \
    ui_module_home.ui \
    ui_module_ventas.ui \
    ui_tool_bar.ui \
    ui_edit_boleta_venta.ui \
    ui_opciones_banco.ui \
    ui_opciones_proveedor.ui \
    ui_edit_proveedor.ui \
    ui_module_articulos.ui \
    ui_new_articulo.ui \
    ui_newedit_colaborador.ui \
    ui_module_colaboradores.ui \
    ui_opciones_tienda.ui \
    ui_edit_articulo.ui \
    ui_new_venta.ui \
    ui_new_venta_boleta.ui \
    ui_new_venta_factura.ui \
    generado.ui

RESOURCES += \
    Icons.qrc
