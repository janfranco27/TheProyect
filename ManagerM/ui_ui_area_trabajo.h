/********************************************************************************
** Form generated from reading UI file 'ui_area_trabajo.ui'
**
** Created: Mon 11. Mar 08:51:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_AREA_TRABAJO_H
#define UI_UI_AREA_TRABAJO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_area_trabajo
{
public:
    QAction *actionVentas;
    QAction *actionCompras;
    QAction *actionArticulos;
    QAction *actionColaboradores;
    QAction *actionSistema;
    QAction *actionAlmacen;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *tree_widget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QWidget *table_widget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ui_area_trabajo)
    {
        if (ui_area_trabajo->objectName().isEmpty())
            ui_area_trabajo->setObjectName(QString::fromUtf8("ui_area_trabajo"));
        ui_area_trabajo->resize(870, 490);
        ui_area_trabajo->setMinimumSize(QSize(870, 490));
        actionVentas = new QAction(ui_area_trabajo);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionCompras = new QAction(ui_area_trabajo);
        actionCompras->setObjectName(QString::fromUtf8("actionCompras"));
        actionArticulos = new QAction(ui_area_trabajo);
        actionArticulos->setObjectName(QString::fromUtf8("actionArticulos"));
        actionColaboradores = new QAction(ui_area_trabajo);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionSistema = new QAction(ui_area_trabajo);
        actionSistema->setObjectName(QString::fromUtf8("actionSistema"));
        actionAlmacen = new QAction(ui_area_trabajo);
        actionAlmacen->setObjectName(QString::fromUtf8("actionAlmacen"));
        centralwidget = new QWidget(ui_area_trabajo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tree_widget = new QWidget(splitter);
        tree_widget->setObjectName(QString::fromUtf8("tree_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tree_widget->sizePolicy().hasHeightForWidth());
        tree_widget->setSizePolicy(sizePolicy);
        tree_widget->setMinimumSize(QSize(10, 0));
        tree_widget->setMaximumSize(QSize(400, 16777215));
        splitter->addWidget(tree_widget);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(5, 16777215));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        table_widget = new QWidget(widget);
        table_widget->setObjectName(QString::fromUtf8("table_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(table_widget->sizePolicy().hasHeightForWidth());
        table_widget->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(table_widget);

        splitter->addWidget(widget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        ui_area_trabajo->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ui_area_trabajo);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ui_area_trabajo->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionVentas);
        toolBar->addAction(actionCompras);
        toolBar->addAction(actionColaboradores);
        toolBar->addAction(actionSistema);
        toolBar->addAction(actionAlmacen);

        retranslateUi(ui_area_trabajo);

        QMetaObject::connectSlotsByName(ui_area_trabajo);
    } // setupUi

    void retranslateUi(QMainWindow *ui_area_trabajo)
    {
        ui_area_trabajo->setWindowTitle(QApplication::translate("ui_area_trabajo", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("ui_area_trabajo", "Ventas", 0, QApplication::UnicodeUTF8));
        actionCompras->setText(QApplication::translate("ui_area_trabajo", "Compras", 0, QApplication::UnicodeUTF8));
        actionArticulos->setText(QApplication::translate("ui_area_trabajo", "Articulos", 0, QApplication::UnicodeUTF8));
        actionColaboradores->setText(QApplication::translate("ui_area_trabajo", "Colaboradores", 0, QApplication::UnicodeUTF8));
        actionSistema->setText(QApplication::translate("ui_area_trabajo", "Sistema", 0, QApplication::UnicodeUTF8));
        actionAlmacen->setText(QApplication::translate("ui_area_trabajo", "Almacen", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("ui_area_trabajo", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_area_trabajo: public Ui_ui_area_trabajo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_AREA_TRABAJO_H
