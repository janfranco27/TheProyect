#ifndef UI_AREA_TRABAJO_H
#define UI_AREA_TRABAJO_H

#include <QMainWindow>
enum MODULOS {VENTAS,COMPRAS,ARTICULOS,COLABORADORES,SISTEMA};

#include "ui_tree_ventas.h"
#include "ui_table_ventas.h"
namespace Ui {
class ui_area_trabajo;
}

class ui_area_trabajo : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ui_area_trabajo(QWidget *parent = 0);
    ~ui_area_trabajo();
    void setModulo(MODULOS mod);
private:
    Ui::ui_area_trabajo *ui;

    ui_tree_ventas * ventas_tree;
    ui_table_ventas * ventas_table;


};

#endif // UI_AREA_TRABAJO_H
