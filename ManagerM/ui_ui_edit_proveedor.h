/********************************************************************************
** Form generated from reading UI file 'ui_edit_proveedor.ui'
**
<<<<<<< HEAD
** Created: Sun 28. Apr 01:07:44 2013
=======
** Created: Sat 27. Apr 20:35:29 2013
>>>>>>> Commit
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_PROVEEDOR_H
#define UI_UI_EDIT_PROVEEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_edit_proveedor
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_celular_proveedor;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_ruc;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QLineEdit *lineEdit_razon_social;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_representante;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_direccion;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_telefono;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QLineEdit *lineEdit_fax;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_celular;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_pagina_web;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_comentario;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_aceptar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_edit_proveedor)
    {
        if (ui_edit_proveedor->objectName().isEmpty())
            ui_edit_proveedor->setObjectName(QString::fromUtf8("ui_edit_proveedor"));
        ui_edit_proveedor->setWindowModality(Qt::ApplicationModal);
        ui_edit_proveedor->resize(636, 389);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Project_15.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_edit_proveedor->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ui_edit_proveedor);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(ui_edit_proveedor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_nombre = new QLineEdit(groupBox);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        lineEdit_nombre->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(lineEdit_nombre);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_celular_proveedor = new QLineEdit(groupBox);
        lineEdit_celular_proveedor->setObjectName(QString::fromUtf8("lineEdit_celular_proveedor"));
        lineEdit_celular_proveedor->setMinimumSize(QSize(200, 0));
        lineEdit_celular_proveedor->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(lineEdit_celular_proveedor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ui_edit_proveedor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(80, 0));
        label_12->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_12->addWidget(label_12);

        lineEdit_ruc = new QLineEdit(groupBox_2);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));
        lineEdit_ruc->setMinimumSize(QSize(200, 0));
        lineEdit_ruc->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_12->addWidget(lineEdit_ruc);


        gridLayout->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_razon_social = new QLineEdit(groupBox_2);
        lineEdit_razon_social->setObjectName(QString::fromUtf8("lineEdit_razon_social"));
        lineEdit_razon_social->setMinimumSize(QSize(200, 0));
        lineEdit_razon_social->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_9->addWidget(lineEdit_razon_social);


        gridLayout->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_representante = new QLineEdit(groupBox_2);
        lineEdit_representante->setObjectName(QString::fromUtf8("lineEdit_representante"));
        lineEdit_representante->setMinimumSize(QSize(200, 0));

        horizontalLayout_5->addWidget(lineEdit_representante);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_direccion = new QLineEdit(groupBox_2);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(200, 0));

        horizontalLayout_6->addWidget(lineEdit_direccion);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_telefono = new QLineEdit(groupBox_2);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));
        lineEdit_telefono->setMinimumSize(QSize(200, 0));
        lineEdit_telefono->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(lineEdit_telefono);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(80, 0));
        label_10->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_fax = new QLineEdit(groupBox_2);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));
        lineEdit_fax->setMinimumSize(QSize(200, 0));
        lineEdit_fax->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_10->addWidget(lineEdit_fax);


        gridLayout->addLayout(horizontalLayout_10, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_celular = new QLineEdit(groupBox_2);
        lineEdit_celular->setObjectName(QString::fromUtf8("lineEdit_celular"));
        lineEdit_celular->setMinimumSize(QSize(200, 0));
        lineEdit_celular->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(lineEdit_celular);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_pagina_web = new QLineEdit(groupBox_2);
        lineEdit_pagina_web->setObjectName(QString::fromUtf8("lineEdit_pagina_web"));
        lineEdit_pagina_web->setMinimumSize(QSize(200, 0));

        horizontalLayout_7->addWidget(lineEdit_pagina_web);


        gridLayout->addLayout(horizontalLayout_7, 5, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_email = new QLineEdit(groupBox_2);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setMinimumSize(QSize(200, 0));

        horizontalLayout_8->addWidget(lineEdit_email);


        gridLayout->addLayout(horizontalLayout_8, 6, 0, 1, 2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_comentario = new QLineEdit(groupBox_2);
        lineEdit_comentario->setObjectName(QString::fromUtf8("lineEdit_comentario"));
        lineEdit_comentario->setMinimumSize(QSize(200, 0));

        horizontalLayout_11->addWidget(lineEdit_comentario);


        gridLayout->addLayout(horizontalLayout_11, 7, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);

        pushButton_aceptar = new QPushButton(ui_edit_proveedor);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));

        horizontalLayout_13->addWidget(pushButton_aceptar);

        pushButton_cancelar = new QPushButton(ui_edit_proveedor);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_13->addWidget(pushButton_cancelar);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);


        gridLayout_3->addLayout(horizontalLayout_13, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(ui_edit_proveedor);

        QMetaObject::connectSlotsByName(ui_edit_proveedor);
    } // setupUi

    void retranslateUi(QWidget *ui_edit_proveedor)
    {
        ui_edit_proveedor->setWindowTitle(QApplication::translate("ui_edit_proveedor", "Proveedor", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ui_edit_proveedor", "Proveedor", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_edit_proveedor", "Nombre", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_edit_proveedor", "Celular", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ui_edit_proveedor", "Empresa", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_edit_proveedor", "Ruc", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_edit_proveedor", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_edit_proveedor", "Representante", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_edit_proveedor", "Direccion", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_edit_proveedor", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_edit_proveedor", "Fax", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_edit_proveedor", "Celular", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_edit_proveedor", "Pagina web", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_edit_proveedor", "Email", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_edit_proveedor", "Comentario", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar->setText(QApplication::translate("ui_edit_proveedor", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_edit_proveedor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_edit_proveedor: public Ui_ui_edit_proveedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_PROVEEDOR_H
