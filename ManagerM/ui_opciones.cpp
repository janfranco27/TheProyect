#include "ui_opciones.h"
#include "ui_ui_opciones.h"

ui_opciones::ui_opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones)
{
    ui->setupUi(this);

    tab_articulos = new ui_opciones_articulo(ui->widget_category);

    tab_base_datos = new ui_opciones_base_datos(ui->widget_category);

    //tab_articulos = new tabArticulos(ui->widget_category);

    mf_hide_all_tabs();

    ui->label_category->setText("Articulos");
    tab_articulos->show();

}

ui_opciones::~ui_opciones()
{
    delete ui;
}

void ui_opciones::mf_hide_all_tabs()
{
    tab_articulos->hide();
    tab_base_datos->hide();
}

void ui_opciones::on_listWidget_modulos_clicked(const QModelIndex &index)
{
    int section = index.row();

    mf_hide_all_tabs();

    switch(section)
    {
    case articulo:



        ui->label_category->setText("Articulos");
        tab_articulos->show();



        break;

    case general:

        ui->label_category->setText("General");

        break;

    case base_datos:

        ui->label_category->setText("Base de Datos");
        tab_base_datos->show();

        break;

    case banco:

        ui->label_category->setText("Bancos");

    default:
        break;

    }
}
