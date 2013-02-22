#include "ui_opciones.h"
#include "ui_ui_opciones.h"

ui_opciones::ui_opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones)
{
    ui->setupUi(this);

    ui_opciones_articulo *tab_articulos = new ui_opciones_articulo;

    ui->label_category->setText("Articulos");
    tab_articulos->setParent(ui->widget_category);
    tab_articulos->showMaximized();

}

ui_opciones::~ui_opciones()
{
    delete ui;
}



void ui_opciones::on_listWidget_modulos_clicked(const QModelIndex &index)
{
    int section = index.row();
    ui_opciones_articulo *tab_articulos;

    switch(section)
    {
    case articulo:

        tab_articulos = new ui_opciones_articulo;

        ui->label_category->setText("Articulos");
        tab_articulos->setParent(ui->widget_category);
        tab_articulos->showMaximized();



        break;

    case general:

        ui->label_category->setText("General");

        break;

    case base_datos:

        ui->label_category->setText("Base de Datos");
        break;

    case banco:

        ui->label_category->setText("Bancos");

    default:
        break;

    }
}
