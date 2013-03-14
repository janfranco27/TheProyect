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
