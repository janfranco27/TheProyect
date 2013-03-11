#include "ui_tree_ventas.h"
#include "ui_ui_tree_ventas.h"
#include <QDebug>a
ui_tree_ventas::ui_tree_ventas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_tree_ventas)
{
    ui->setupUi(this);
}

ui_tree_ventas::~ui_tree_ventas()
{
    delete ui;
}

void ui_tree_ventas::on_treeWidget_doubleClicked(const QModelIndex &index)
{
    QWidget * a = parentWidget();

    qDebug()<<"AAAAA"<<endl;
    emit boleta();
}
