#include "ui_area_trabajo.h"
#include "ui_ui_area_trabajo.h"

ui_area_trabajo::ui_area_trabajo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ui_area_trabajo)
{
    ui->setupUi(this);

    //Para ventas
    ventas_tree= new ui_tree_ventas();

    ventas_table = new ui_table_ventas();


    //Conexion para boleta
    connect(ventas_tree,SIGNAL(boleta()),ventas_table,SLOT(llenaBoleta()));

}

ui_area_trabajo::~ui_area_trabajo()
{
    delete ui;
}

void ui_area_trabajo::setModulo(MODULOS mod)
{



    switch(mod)
    {
        case VENTAS:
            ventas_tree->setParent(ui->tree_widget);
            ventas_table->setParent(ui->table_widget);


        break;

        case COMPRAS:
        break;


         case ARTICULOS:
        break;

    case COLABORADORES:
   break;
    case SISTEMA:

   break;

    }
}
