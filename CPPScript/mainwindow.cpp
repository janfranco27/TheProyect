#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CPPScript obj;

    obj.mf_setHost("localhost");
    obj.mf_setUser("root");
    obj.mf_setPass("root");
    obj.mf_setDB("INSARF_DB");

    obj.setDirFolder("C:\\Users\\Alexander\\Desktop\\TEST");
    obj.generateClass_withinDB();

    QSqlQueryModel *model = new QSqlQueryModel;

    model->setQuery("SELECT * FROM grupo");
    model->setHeaderData(0, Qt::Horizontal, tr("Código"));
    model->setHeaderData(1, Qt::Horizontal, tr("Descripción"));

    ui->tableView->setModel(model);

    ui->tableView->setColumnWidth(0, ui->tableView->size().width()*0.2);
    ui->tableView->setColumnWidth(1, ui->tableView->size().width()*0.8);
    ui->tableView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
