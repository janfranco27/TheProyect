/********************************************************************************
** Form generated from reading UI file 'ui_edit_articulo.ui'
**
<<<<<<< HEAD
** Created: Fri 21. Jun 22:03:27 2013
=======
** Created: Sat 22. Jun 15:25:14 2013
>>>>>>> Cambios modulo articulo
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_ARTICULO_H
#define UI_UI_EDIT_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_articulos
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *title_label;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QLabel *l_codigo_2;
    QLabel *l_marca_2;
    QComboBox *cb_marca;
    QPushButton *btn_add_marca;
    QLabel *l_precio_2;
    QLabel *l_nombre_2;
    QLineEdit *le_nombre_2;
    QLabel *l_medida_2;
    QComboBox *cb_medida;
    QPushButton *btn_add_medida;
    QLabel *label_2;
    QComboBox *cb_proveedor;
    QPushButton *btn_add_proveedor;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *l_codigoop;
    QLabel *l_grupo_2;
    QComboBox *cb_grupo;
    QLabel *l_stock_2;
    QPushButton *btn_add_grupo;
    QSpinBox *le_stock_2;
    QDoubleSpinBox *le_precio_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_aceptar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *ui_edit_articulos)
    {
        if (ui_edit_articulos->objectName().isEmpty())
            ui_edit_articulos->setObjectName(QString::fromUtf8("ui_edit_articulos"));
        ui_edit_articulos->resize(702, 231);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_edit_articulos->setWindowIcon(icon);
        gridLayout = new QGridLayout(ui_edit_articulos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        title_label = new QLabel(ui_edit_articulos);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        title_label->setFont(font);

        horizontalLayout_2->addWidget(title_label);

        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l_codigo_2 = new QLabel(ui_edit_articulos);
        l_codigo_2->setObjectName(QString::fromUtf8("l_codigo_2"));
        l_codigo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_codigo_2, 0, 0, 1, 1);

        l_marca_2 = new QLabel(ui_edit_articulos);
        l_marca_2->setObjectName(QString::fromUtf8("l_marca_2"));
        l_marca_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_marca_2, 0, 4, 1, 1);

        cb_marca = new QComboBox(ui_edit_articulos);
        cb_marca->setObjectName(QString::fromUtf8("cb_marca"));

        gridLayout_2->addWidget(cb_marca, 0, 5, 1, 1);

        btn_add_marca = new QPushButton(ui_edit_articulos);
        btn_add_marca->setObjectName(QString::fromUtf8("btn_add_marca"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_marca->setIcon(icon1);

        gridLayout_2->addWidget(btn_add_marca, 0, 7, 1, 1);

        l_precio_2 = new QLabel(ui_edit_articulos);
        l_precio_2->setObjectName(QString::fromUtf8("l_precio_2"));
        l_precio_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_precio_2, 0, 8, 1, 1);

        l_nombre_2 = new QLabel(ui_edit_articulos);
        l_nombre_2->setObjectName(QString::fromUtf8("l_nombre_2"));
        l_nombre_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_nombre_2, 1, 0, 1, 1);

        le_nombre_2 = new QLineEdit(ui_edit_articulos);
        le_nombre_2->setObjectName(QString::fromUtf8("le_nombre_2"));

        gridLayout_2->addWidget(le_nombre_2, 1, 1, 1, 3);

        l_medida_2 = new QLabel(ui_edit_articulos);
        l_medida_2->setObjectName(QString::fromUtf8("l_medida_2"));
        l_medida_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_medida_2, 1, 4, 1, 1);

        cb_medida = new QComboBox(ui_edit_articulos);
        cb_medida->setObjectName(QString::fromUtf8("cb_medida"));

        gridLayout_2->addWidget(cb_medida, 1, 5, 1, 1);

        btn_add_medida = new QPushButton(ui_edit_articulos);
        btn_add_medida->setObjectName(QString::fromUtf8("btn_add_medida"));
        btn_add_medida->setIcon(icon1);

        gridLayout_2->addWidget(btn_add_medida, 1, 7, 1, 1);

        label_2 = new QLabel(ui_edit_articulos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 8, 1, 1);

        cb_proveedor = new QComboBox(ui_edit_articulos);
        cb_proveedor->setObjectName(QString::fromUtf8("cb_proveedor"));

        gridLayout_2->addWidget(cb_proveedor, 1, 9, 1, 1);

        btn_add_proveedor = new QPushButton(ui_edit_articulos);
        btn_add_proveedor->setObjectName(QString::fromUtf8("btn_add_proveedor"));
        btn_add_proveedor->setIcon(icon1);

        gridLayout_2->addWidget(btn_add_proveedor, 1, 10, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 6, 1, 1);

        l_codigoop = new QLabel(ui_edit_articulos);
        l_codigoop->setObjectName(QString::fromUtf8("l_codigoop"));

        gridLayout_2->addWidget(l_codigoop, 0, 1, 1, 3);

        l_grupo_2 = new QLabel(ui_edit_articulos);
        l_grupo_2->setObjectName(QString::fromUtf8("l_grupo_2"));
        l_grupo_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_grupo_2, 2, 8, 1, 1);

        cb_grupo = new QComboBox(ui_edit_articulos);
        cb_grupo->setObjectName(QString::fromUtf8("cb_grupo"));

        gridLayout_2->addWidget(cb_grupo, 2, 9, 1, 1);

        l_stock_2 = new QLabel(ui_edit_articulos);
        l_stock_2->setObjectName(QString::fromUtf8("l_stock_2"));
        l_stock_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(l_stock_2, 2, 0, 1, 1);

        btn_add_grupo = new QPushButton(ui_edit_articulos);
        btn_add_grupo->setObjectName(QString::fromUtf8("btn_add_grupo"));

        gridLayout_2->addWidget(btn_add_grupo, 2, 10, 1, 1);

        le_stock_2 = new QSpinBox(ui_edit_articulos);
        le_stock_2->setObjectName(QString::fromUtf8("le_stock_2"));

        gridLayout_2->addWidget(le_stock_2, 2, 1, 1, 1);

        le_precio_2 = new QDoubleSpinBox(ui_edit_articulos);
        le_precio_2->setObjectName(QString::fromUtf8("le_precio_2"));
        le_precio_2->setMaximum(1e+08);

        gridLayout_2->addWidget(le_precio_2, 0, 9, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_aceptar = new QPushButton(ui_edit_articulos);
        btn_aceptar->setObjectName(QString::fromUtf8("btn_aceptar"));

        horizontalLayout->addWidget(btn_aceptar);

        btn_cancelar = new QPushButton(ui_edit_articulos);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout->addWidget(btn_cancelar);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ui_edit_articulos);

        QMetaObject::connectSlotsByName(ui_edit_articulos);
    } // setupUi

    void retranslateUi(QDialog *ui_edit_articulos)
    {
        ui_edit_articulos->setWindowTitle(QApplication::translate("ui_edit_articulos", "Editar Articulo", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("ui_edit_articulos", "Modifique los datos del art\303\255culo seleccionado", 0, QApplication::UnicodeUTF8));
        l_codigo_2->setText(QApplication::translate("ui_edit_articulos", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        l_marca_2->setText(QApplication::translate("ui_edit_articulos", "Marca", 0, QApplication::UnicodeUTF8));
        btn_add_marca->setText(QString());
        l_precio_2->setText(QApplication::translate("ui_edit_articulos", "Precio  S/.", 0, QApplication::UnicodeUTF8));
        l_nombre_2->setText(QApplication::translate("ui_edit_articulos", "Nombre", 0, QApplication::UnicodeUTF8));
        l_medida_2->setText(QApplication::translate("ui_edit_articulos", "Medida", 0, QApplication::UnicodeUTF8));
        btn_add_medida->setText(QString());
        label_2->setText(QApplication::translate("ui_edit_articulos", "Proveedor", 0, QApplication::UnicodeUTF8));
        btn_add_proveedor->setText(QString());
        l_codigoop->setText(QString());
        l_grupo_2->setText(QApplication::translate("ui_edit_articulos", "Grupo", 0, QApplication::UnicodeUTF8));
        l_stock_2->setText(QApplication::translate("ui_edit_articulos", "Stock", 0, QApplication::UnicodeUTF8));
        btn_add_grupo->setText(QString());
        btn_aceptar->setText(QApplication::translate("ui_edit_articulos", "Aceptar", 0, QApplication::UnicodeUTF8));
        btn_cancelar->setText(QApplication::translate("ui_edit_articulos", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_articulos: public Ui_ui_edit_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_ARTICULO_H
