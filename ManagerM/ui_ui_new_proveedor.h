/********************************************************************************
** Form generated from reading UI file 'ui_new_proveedor.ui'
**
<<<<<<< HEAD
** Created: Sun 28. Apr 01:07:45 2013
=======
** Created: Sat 27. Apr 20:35:30 2013
>>>>>>> Commit
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_PROVEEDOR_H
#define UI_UI_NEW_PROVEEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_proveedor
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_28;
    QLineEdit *lineEdit_ruc;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_25;
    QLineEdit *lineEdit_razon_social;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_31;
    QLineEdit *lineEdit_representante;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_region;
    QComboBox *comboBox_regiones;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_29;
    QLineEdit *lineEdit_direccion;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_27;
    QLineEdit *lineEdit_telefono;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_32;
    QLineEdit *lineEdit_fax;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_34;
    QLineEdit *lineEdit_pagina_web;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_33;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_26;
    QLineEdit *lineEdit_comentario;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_36;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_comentario;
    QLineEdit *lineEdit_celular;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_registrar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ui_new_proveedor)
    {
        if (ui_new_proveedor->objectName().isEmpty())
            ui_new_proveedor->setObjectName(QString::fromUtf8("ui_new_proveedor"));
        ui_new_proveedor->resize(641, 395);
        gridLayout = new QGridLayout(ui_new_proveedor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(ui_new_proveedor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(80, 0));
        label_28->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_14->addWidget(label_28);

        lineEdit_ruc = new QLineEdit(groupBox);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));
        lineEdit_ruc->setMinimumSize(QSize(200, 0));
        lineEdit_ruc->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_14->addWidget(lineEdit_ruc);

        horizontalSpacer_12 = new QSpacerItem(13, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(80, 0));
        label_25->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_14->addWidget(label_25);

        lineEdit_razon_social = new QLineEdit(groupBox);
        lineEdit_razon_social->setObjectName(QString::fromUtf8("lineEdit_razon_social"));
        lineEdit_razon_social->setMinimumSize(QSize(200, 0));
        lineEdit_razon_social->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_14->addWidget(lineEdit_razon_social);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMinimumSize(QSize(80, 0));
        label_31->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_15->addWidget(label_31);

        lineEdit_representante = new QLineEdit(groupBox);
        lineEdit_representante->setObjectName(QString::fromUtf8("lineEdit_representante"));
        lineEdit_representante->setMinimumSize(QSize(200, 0));

        horizontalLayout_15->addWidget(lineEdit_representante);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_region = new QLabel(groupBox);
        label_region->setObjectName(QString::fromUtf8("label_region"));
        label_region->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label_region);

        comboBox_regiones = new QComboBox(groupBox);
        comboBox_regiones->setObjectName(QString::fromUtf8("comboBox_regiones"));
        comboBox_regiones->setMinimumSize(QSize(200, 0));
        comboBox_regiones->setInputMethodHints(Qt::ImhNone);
        comboBox_regiones->setEditable(false);

        horizontalLayout_2->addWidget(comboBox_regiones);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(80, 0));
        label_29->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_16->addWidget(label_29);

        lineEdit_direccion = new QLineEdit(groupBox);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));
        lineEdit_direccion->setMinimumSize(QSize(200, 0));

        horizontalLayout_16->addWidget(lineEdit_direccion);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(80, 0));
        label_27->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_17->addWidget(label_27);

        lineEdit_telefono = new QLineEdit(groupBox);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));
        lineEdit_telefono->setMinimumSize(QSize(200, 0));
        lineEdit_telefono->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_17->addWidget(lineEdit_telefono);

        horizontalSpacer_11 = new QSpacerItem(13, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMinimumSize(QSize(80, 0));
        label_32->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_17->addWidget(label_32);

        lineEdit_fax = new QLineEdit(groupBox);
        lineEdit_fax->setObjectName(QString::fromUtf8("lineEdit_fax"));
        lineEdit_fax->setMinimumSize(QSize(200, 0));
        lineEdit_fax->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_17->addWidget(lineEdit_fax);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(80, 0));
        label_34->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_19->addWidget(label_34);

        lineEdit_pagina_web = new QLineEdit(groupBox);
        lineEdit_pagina_web->setObjectName(QString::fromUtf8("lineEdit_pagina_web"));
        lineEdit_pagina_web->setMinimumSize(QSize(200, 0));

        horizontalLayout_19->addWidget(lineEdit_pagina_web);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(80, 0));
        label_33->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_20->addWidget(label_33);

        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setMinimumSize(QSize(200, 0));

        horizontalLayout_20->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(80, 0));
        label_26->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_21->addWidget(label_26);

        lineEdit_comentario = new QLineEdit(groupBox);
        lineEdit_comentario->setObjectName(QString::fromUtf8("lineEdit_comentario"));
        lineEdit_comentario->setMinimumSize(QSize(200, 0));

        horizontalLayout_21->addWidget(lineEdit_comentario);


        verticalLayout->addLayout(horizontalLayout_21);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ui_new_proveedor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMinimumSize(QSize(80, 0));
        label_36->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_22->addWidget(label_36);

        lineEdit_nombre = new QLineEdit(groupBox_2);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        lineEdit_nombre->setMinimumSize(QSize(200, 0));

        horizontalLayout_22->addWidget(lineEdit_nombre);


        verticalLayout_2->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_comentario = new QLabel(groupBox_2);
        label_comentario->setObjectName(QString::fromUtf8("label_comentario"));
        label_comentario->setMinimumSize(QSize(80, 0));
        label_comentario->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_23->addWidget(label_comentario);

        lineEdit_celular = new QLineEdit(groupBox_2);
        lineEdit_celular->setObjectName(QString::fromUtf8("lineEdit_celular"));
        lineEdit_celular->setMinimumSize(QSize(200, 0));

        horizontalLayout_23->addWidget(lineEdit_celular);


        verticalLayout_2->addLayout(horizontalLayout_23);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_7);

        pushButton_registrar = new QPushButton(ui_new_proveedor);
        pushButton_registrar->setObjectName(QString::fromUtf8("pushButton_registrar"));

        horizontalLayout_24->addWidget(pushButton_registrar);

        pushButton_cancelar = new QPushButton(ui_new_proveedor);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_24->addWidget(pushButton_cancelar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_24);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(ui_new_proveedor);

        QMetaObject::connectSlotsByName(ui_new_proveedor);
    } // setupUi

    void retranslateUi(QWidget *ui_new_proveedor)
    {
        ui_new_proveedor->setWindowTitle(QApplication::translate("ui_new_proveedor", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ui_new_proveedor", "Proveedor", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_new_proveedor", "RUC:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_new_proveedor", "Raz\303\263n Social:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ui_new_proveedor", "Representante:", 0, QApplication::UnicodeUTF8));
        label_region->setText(QApplication::translate("ui_new_proveedor", "Regi\303\263n:", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_new_proveedor", "Direccion:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_new_proveedor", "Tel\303\251fono:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ui_new_proveedor", "Fax:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ui_new_proveedor", "Pagina web:", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ui_new_proveedor", "Email:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ui_new_proveedor", "Comentario:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ui_new_proveedor", "Vendedor", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ui_new_proveedor", "Nombre:", 0, QApplication::UnicodeUTF8));
        label_comentario->setText(QApplication::translate("ui_new_proveedor", "Celular:", 0, QApplication::UnicodeUTF8));
        pushButton_registrar->setText(QApplication::translate("ui_new_proveedor", "Registrar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_new_proveedor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_proveedor: public Ui_ui_new_proveedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_PROVEEDOR_H
