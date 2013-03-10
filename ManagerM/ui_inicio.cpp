#include "ui_inicio.h"
#include "ui_ui_inicio.h"

ui_inicio::ui_inicio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_inicio)
{
    ui->setupUi(this);
}

ui_inicio::~ui_inicio()
{
    delete ui;
}
