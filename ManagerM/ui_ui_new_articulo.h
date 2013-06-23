/********************************************************************************
** Form generated from reading UI file 'ui_new_articulo.ui'
**
** Created: Sat 22. Jun 18:08:27 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_ARTICULO_H
#define UI_UI_NEW_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_articulo
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *l_codigo_2;
    QLabel *l_codigoop;
    QLabel *l_marca_2;
    QComboBox *cb_marca;
    QLabel *l_precio_2;
    QLabel *l_nombre_2;
    QLineEdit *le_nombre_2;
    QLabel *l_medida_2;
    QComboBox *cb_medida;
    QLabel *label_2;
    QComboBox *cb_proveedor;
    QPushButton *btn_add_proveedor;
    QSpacerItem *horizontalSpacer_5;
    QLabel *l_stock_2;
    QLabel *l_grupo_2;
    QComboBox *cb_grupo;
    QSpinBox *le_stock_2;
    QDoubleSpinBox *le_precio_2;
    QPushButton *btn_add_grupo;
    QPushButton *btn_add_marca;
    QPushButton *btn_add_medida;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_agregar;
    QVBoxLayout *verticalLayout;
    QLabel *l_resultado_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_aceptar;
    QPushButton *btn_borrar;
    QPushButton *btn_cancelar;

    void setupUi(QWidget *ui_new_articulo)
    {
        if (ui_new_articulo->objectName().isEmpty())
            ui_new_articulo->setObjectName(QString::fromUtf8("ui_new_articulo"));
        ui_new_articulo->setWindowModality(Qt::ApplicationModal);
        ui_new_articulo->resize(729, 497);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_articulo->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ui_new_articulo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_codigo_2 = new QLabel(ui_new_articulo);
        l_codigo_2->setObjectName(QString::fromUtf8("l_codigo_2"));
        l_codigo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_codigo_2, 0, 0, 1, 1);

        l_codigoop = new QLabel(ui_new_articulo);
        l_codigoop->setObjectName(QString::fromUtf8("l_codigoop"));

        gridLayout->addWidget(l_codigoop, 0, 1, 1, 3);

        l_marca_2 = new QLabel(ui_new_articulo);
        l_marca_2->setObjectName(QString::fromUtf8("l_marca_2"));
        l_marca_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_marca_2, 0, 4, 1, 1);

        cb_marca = new QComboBox(ui_new_articulo);
        cb_marca->setObjectName(QString::fromUtf8("cb_marca"));

        gridLayout->addWidget(cb_marca, 0, 5, 1, 1);

        l_precio_2 = new QLabel(ui_new_articulo);
        l_precio_2->setObjectName(QString::fromUtf8("l_precio_2"));
        l_precio_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_precio_2, 0, 9, 1, 1);

        l_nombre_2 = new QLabel(ui_new_articulo);
        l_nombre_2->setObjectName(QString::fromUtf8("l_nombre_2"));
        l_nombre_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_nombre_2, 1, 0, 1, 1);

        le_nombre_2 = new QLineEdit(ui_new_articulo);
        le_nombre_2->setObjectName(QString::fromUtf8("le_nombre_2"));

        gridLayout->addWidget(le_nombre_2, 1, 1, 1, 3);

        l_medida_2 = new QLabel(ui_new_articulo);
        l_medida_2->setObjectName(QString::fromUtf8("l_medida_2"));
        l_medida_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_medida_2, 1, 4, 1, 1);

        cb_medida = new QComboBox(ui_new_articulo);
        cb_medida->setObjectName(QString::fromUtf8("cb_medida"));

        gridLayout->addWidget(cb_medida, 1, 5, 1, 1);

        label_2 = new QLabel(ui_new_articulo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 9, 1, 1);

        cb_proveedor = new QComboBox(ui_new_articulo);
        cb_proveedor->setObjectName(QString::fromUtf8("cb_proveedor"));

        gridLayout->addWidget(cb_proveedor, 1, 10, 1, 1);

        btn_add_proveedor = new QPushButton(ui_new_articulo);
        btn_add_proveedor->setObjectName(QString::fromUtf8("btn_add_proveedor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_proveedor->setIcon(icon1);

        gridLayout->addWidget(btn_add_proveedor, 1, 11, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        l_stock_2 = new QLabel(ui_new_articulo);
        l_stock_2->setObjectName(QString::fromUtf8("l_stock_2"));
        l_stock_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_stock_2, 2, 0, 1, 1);

        l_grupo_2 = new QLabel(ui_new_articulo);
        l_grupo_2->setObjectName(QString::fromUtf8("l_grupo_2"));
        l_grupo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_grupo_2, 2, 4, 1, 1);

        cb_grupo = new QComboBox(ui_new_articulo);
        cb_grupo->setObjectName(QString::fromUtf8("cb_grupo"));

        gridLayout->addWidget(cb_grupo, 2, 5, 1, 1);

        le_stock_2 = new QSpinBox(ui_new_articulo);
        le_stock_2->setObjectName(QString::fromUtf8("le_stock_2"));

        gridLayout->addWidget(le_stock_2, 2, 1, 1, 1);

        le_precio_2 = new QDoubleSpinBox(ui_new_articulo);
        le_precio_2->setObjectName(QString::fromUtf8("le_precio_2"));
        le_precio_2->setMaximum(1e+08);

        gridLayout->addWidget(le_precio_2, 0, 10, 1, 1);

        btn_add_grupo = new QPushButton(ui_new_articulo);
        btn_add_grupo->setObjectName(QString::fromUtf8("btn_add_grupo"));

        gridLayout->addWidget(btn_add_grupo, 2, 7, 1, 1);

        btn_add_marca = new QPushButton(ui_new_articulo);
        btn_add_marca->setObjectName(QString::fromUtf8("btn_add_marca"));
        btn_add_marca->setIcon(icon1);

        gridLayout->addWidget(btn_add_marca, 0, 6, 1, 1);

        btn_add_medida = new QPushButton(ui_new_articulo);
        btn_add_medida->setObjectName(QString::fromUtf8("btn_add_medida"));
        btn_add_medida->setIcon(icon1);

        gridLayout->addWidget(btn_add_medida, 1, 6, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_agregar = new QPushButton(ui_new_articulo);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));

        horizontalLayout_2->addWidget(pushButton_agregar);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        l_resultado_2 = new QLabel(ui_new_articulo);
        l_resultado_2->setObjectName(QString::fromUtf8("l_resultado_2"));

        verticalLayout->addWidget(l_resultado_2);

        tableWidget = new QTableWidget(ui_new_articulo);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_aceptar = new QPushButton(ui_new_articulo);
        btn_aceptar->setObjectName(QString::fromUtf8("btn_aceptar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/aceptar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_aceptar->setIcon(icon2);

        horizontalLayout_3->addWidget(btn_aceptar);

        btn_borrar = new QPushButton(ui_new_articulo);
        btn_borrar->setObjectName(QString::fromUtf8("btn_borrar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_borrar->setIcon(icon3);

        horizontalLayout_3->addWidget(btn_borrar);

        btn_cancelar = new QPushButton(ui_new_articulo);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout, 3, 0, 1, 1);

        QWidget::setTabOrder(le_nombre_2, cb_marca);
        QWidget::setTabOrder(cb_marca, cb_medida);
        QWidget::setTabOrder(cb_medida, cb_proveedor);
        QWidget::setTabOrder(cb_proveedor, pushButton_agregar);
        QWidget::setTabOrder(pushButton_agregar, tableWidget);
        QWidget::setTabOrder(tableWidget, btn_aceptar);
        QWidget::setTabOrder(btn_aceptar, btn_borrar);
        QWidget::setTabOrder(btn_borrar, btn_cancelar);
        QWidget::setTabOrder(btn_cancelar, btn_add_proveedor);

        retranslateUi(ui_new_articulo);

        QMetaObject::connectSlotsByName(ui_new_articulo);
    } // setupUi

    void retranslateUi(QWidget *ui_new_articulo)
    {
        ui_new_articulo->setWindowTitle(QApplication::translate("ui_new_articulo", "Nuevo Art\303\255culo", 0, QApplication::UnicodeUTF8));
        l_codigo_2->setText(QApplication::translate("ui_new_articulo", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        l_codigoop->setText(QString());
        l_marca_2->setText(QApplication::translate("ui_new_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        l_precio_2->setText(QApplication::translate("ui_new_articulo", "Precio  S/.", 0, QApplication::UnicodeUTF8));
        l_nombre_2->setText(QApplication::translate("ui_new_articulo", "Nombre", 0, QApplication::UnicodeUTF8));
        l_medida_2->setText(QApplication::translate("ui_new_articulo", "Medida", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_articulo", "Proveedor", 0, QApplication::UnicodeUTF8));
        btn_add_proveedor->setText(QString());
        l_stock_2->setText(QApplication::translate("ui_new_articulo", "Stock", 0, QApplication::UnicodeUTF8));
        l_grupo_2->setText(QApplication::translate("ui_new_articulo", "Grupo", 0, QApplication::UnicodeUTF8));
        btn_add_grupo->setText(QString());
        btn_add_marca->setText(QString());
        btn_add_medida->setText(QString());
        pushButton_agregar->setText(QApplication::translate("ui_new_articulo", "Agregar", 0, QApplication::UnicodeUTF8));
        l_resultado_2->setText(QApplication::translate("ui_new_articulo", "Art\303\255culos a registrar :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_new_articulo", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_new_articulo", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_new_articulo", "Grupo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_new_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_new_articulo", "Medida", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_new_articulo", "Stock", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ui_new_articulo", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("ui_new_articulo", "Proveedor", 0, QApplication::UnicodeUTF8));
        btn_aceptar->setText(QApplication::translate("ui_new_articulo", "Aceptar", 0, QApplication::UnicodeUTF8));
        btn_borrar->setText(QApplication::translate("ui_new_articulo", "Borrar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("ui_new_articulo", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_articulo: public Ui_ui_new_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_ARTICULO_H
