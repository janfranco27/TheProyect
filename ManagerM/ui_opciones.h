#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QWidget>

#include "share_include.h"

class ui_opciones_base_datos;
class ui_opciones_articulo;
class ui_opciones_banco;
class ui_opciones_proveedor;


namespace Ui {
class ui_opciones;
}

class ui_opciones : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones(QWidget *parent = 0);
    ~ui_opciones();


private:

    ui_opciones_base_datos* tab_base_datos;
    ui_opciones_proveedor* tab_proveedores;
    ui_opciones_articulo* tab_articulos;
    ui_opciones_banco* tab_bancos;

    //tabArticulos* tab_articulos;


public:
    void mf_hide_all_tabs();

    
private slots:


    void on_listWidget_modulos_clicked(const QModelIndex &index);

private:
    Ui::ui_opciones *ui;
};

#endif // UI_OPCIONES_H
