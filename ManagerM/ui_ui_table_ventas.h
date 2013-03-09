/********************************************************************************
** Form generated from reading UI file 'ui_table_ventas.ui'
**
** Created: Sat 9. Mar 14:35:29 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TABLE_VENTAS_H
#define UI_UI_TABLE_VENTAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_table_ventas
{
public:
    QAction *actionNuevo;
    QAction *actionEditar;
    QAction *actionEliminar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ui_table_ventas)
    {
        if (ui_table_ventas->objectName().isEmpty())
            ui_table_ventas->setObjectName(QString::fromUtf8("ui_table_ventas"));
        ui_table_ventas->resize(613, 433);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_table_ventas->sizePolicy().hasHeightForWidth());
        ui_table_ventas->setSizePolicy(sizePolicy);
        ui_table_ventas->setMinimumSize(QSize(613, 433));
        actionNuevo = new QAction(ui_table_ventas);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEditar = new QAction(ui_table_ventas);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionEliminar = new QAction(ui_table_ventas);
        actionEliminar->setObjectName(QString::fromUtf8("actionEliminar"));
        centralwidget = new QWidget(ui_table_ventas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        ui_table_ventas->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ui_table_ventas);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        ui_table_ventas->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionEliminar);

        retranslateUi(ui_table_ventas);

        QMetaObject::connectSlotsByName(ui_table_ventas);
    } // setupUi

    void retranslateUi(QMainWindow *ui_table_ventas)
    {
        ui_table_ventas->setWindowTitle(QApplication::translate("ui_table_ventas", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("ui_table_ventas", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("ui_table_ventas", "Editar", 0, QApplication::UnicodeUTF8));
        actionEliminar->setText(QApplication::translate("ui_table_ventas", "Eliminar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("ui_table_ventas", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_table_ventas: public Ui_ui_table_ventas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TABLE_VENTAS_H
