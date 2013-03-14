#include "ui_module_home.h"
#include "ui_ui_module_home.h"

ui_module_home::ui_module_home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_home)
{
    ui->setupUi(this);
}

ui_module_home::~ui_module_home()
{
    delete ui;
}

void ui_module_home::on_pushButton_ventas_clicked()
{
    ui_module_ventas* form_ventas = new ui_module_ventas;
    APP_MANAGERM->setCentralWidget(form_ventas);
    APP_TOOL_BAR->setMaximumHeight(63);
}

void ui_module_home::on_pushButton_sistema_clicked()
{
    ui_opciones* form_opciones = new ui_opciones;
    form_opciones->show();
}
