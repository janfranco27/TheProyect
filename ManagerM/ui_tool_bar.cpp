#include "ui_tool_bar.h"
#include "ui_ui_tool_bar.h"

ui_tool_bar::ui_tool_bar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_tool_bar)
{
    ui->setupUi(this);
}

ui_tool_bar::~ui_tool_bar()
{
    delete ui;
}

void ui_tool_bar::on_pushButton_home_clicked()
{
    ui_module_home* form_home = new ui_module_home;
    APP_MANAGERM->setCentralWidget(form_home);
    APP_TOOL_BAR->setMaximumHeight(0);

}

void ui_tool_bar::on_pushButton_ventas_clicked()
{
    ui_module_ventas* form_ventas = new ui_module_ventas;
    APP_MANAGERM->setCentralWidget(form_ventas);
}

void ui_tool_bar::on_pushButton_opciones_clicked()
{
    ui_opciones* form_opciones = new ui_opciones;
    form_opciones->show();
}

void ui_tool_bar::on_pushButton_colaborador_clicked()
{
    ui_module_colaboradores* form_colaboradores = new ui_module_colaboradores;
    APP_MANAGERM->setCentralWidget(form_colaboradores);
}
