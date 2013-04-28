/********************************************************************************
** Form generated from reading UI file 'ui_edit_personalinformation.ui'
**
** Created: Sun 28. Apr 01:07:45 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EDIT_PERSONALINFORMATION_H
#define UI_UI_EDIT_PERSONALINFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
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

class Ui_ui_edit_personalInformation
{
public:
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_nick1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit_pass1;
    QPushButton *pushButton_change;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_25;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_23;
    QLineEdit *lineEdit_direccion;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_20;
    QLineEdit *lineEdit_dni;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_22;
    QLineEdit *lineEdit_nombres;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_18;
    QLineEdit *lineEdit_apPaterno;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_25;
    QLineEdit *lineEdit_apMaterno;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_24;
    QDateEdit *dateEdit_nacimiento;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_27;
    QComboBox *comboBox_genero;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_21;
    QComboBox *comboBox_estCivil;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QLineEdit *lineEdit_celular;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *lineEdit_telefonoFijo;

    void setupUi(QDialog *ui_edit_personalInformation)
    {
        if (ui_edit_personalInformation->objectName().isEmpty())
            ui_edit_personalInformation->setObjectName(QString::fromUtf8("ui_edit_personalInformation"));
        ui_edit_personalInformation->resize(467, 480);
        pushButton_save = new QPushButton(ui_edit_personalInformation);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(369, 440, 35, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save->setIcon(icon);
        pushButton_save->setIconSize(QSize(23, 23));
        pushButton_save->setDefault(false);
        pushButton_save->setFlat(true);
        pushButton_cancel = new QPushButton(ui_edit_personalInformation);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(410, 440, 35, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon1);
        pushButton_cancel->setIconSize(QSize(23, 23));
        pushButton_cancel->setFlat(true);
        groupBox = new QGroupBox(ui_edit_personalInformation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 330, 431, 91));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 411, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_nick1 = new QLineEdit(layoutWidget);
        lineEdit_nick1->setObjectName(QString::fromUtf8("lineEdit_nick1"));
        lineEdit_nick1->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(lineEdit_nick1);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(label_8);

        lineEdit_pass1 = new QLineEdit(layoutWidget);
        lineEdit_pass1->setObjectName(QString::fromUtf8("lineEdit_pass1"));
        lineEdit_pass1->setMinimumSize(QSize(90, 0));

        horizontalLayout->addWidget(lineEdit_pass1);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        pushButton_change = new QPushButton(layoutWidget);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));

        gridLayout->addWidget(pushButton_change, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(ui_edit_personalInformation);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 431, 301));
        layoutWidget_25 = new QWidget(groupBox_2);
        layoutWidget_25->setObjectName(QString::fromUtf8("layoutWidget_25"));
        layoutWidget_25->setGeometry(QRect(10, 270, 411, 23));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget_25);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_25);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(113, 0));

        horizontalLayout_24->addWidget(label_23);

        lineEdit_direccion = new QLineEdit(layoutWidget_25);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        horizontalLayout_24->addWidget(lineEdit_direccion);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 21, 256, 248));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(113, 0));

        horizontalLayout_21->addWidget(label_20);

        lineEdit_dni = new QLineEdit(layoutWidget1);
        lineEdit_dni->setObjectName(QString::fromUtf8("lineEdit_dni"));
        lineEdit_dni->setMinimumSize(QSize(100, 0));
        lineEdit_dni->setMaxLength(8);

        horizontalLayout_21->addWidget(lineEdit_dni);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(113, 0));

        horizontalLayout_23->addWidget(label_22);

        lineEdit_nombres = new QLineEdit(layoutWidget1);
        lineEdit_nombres->setObjectName(QString::fromUtf8("lineEdit_nombres"));

        horizontalLayout_23->addWidget(lineEdit_nombres);


        verticalLayout->addLayout(horizontalLayout_23);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(113, 0));

        horizontalLayout_19->addWidget(label_18);

        lineEdit_apPaterno = new QLineEdit(layoutWidget1);
        lineEdit_apPaterno->setObjectName(QString::fromUtf8("lineEdit_apPaterno"));

        horizontalLayout_19->addWidget(lineEdit_apPaterno);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_25 = new QLabel(layoutWidget1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(113, 0));

        horizontalLayout_26->addWidget(label_25);

        lineEdit_apMaterno = new QLineEdit(layoutWidget1);
        lineEdit_apMaterno->setObjectName(QString::fromUtf8("lineEdit_apMaterno"));

        horizontalLayout_26->addWidget(lineEdit_apMaterno);


        verticalLayout->addLayout(horizontalLayout_26);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(113, 0));
        label_24->setMaximumSize(QSize(113, 16777215));

        horizontalLayout_5->addWidget(label_24);

        dateEdit_nacimiento = new QDateEdit(layoutWidget1);
        dateEdit_nacimiento->setObjectName(QString::fromUtf8("dateEdit_nacimiento"));

        horizontalLayout_5->addWidget(dateEdit_nacimiento);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_27 = new QLabel(layoutWidget1);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(113, 0));
        label_27->setMaximumSize(QSize(113, 16777215));

        horizontalLayout_6->addWidget(label_27);

        comboBox_genero = new QComboBox(layoutWidget1);
        comboBox_genero->setObjectName(QString::fromUtf8("comboBox_genero"));
        comboBox_genero->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(comboBox_genero);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(113, 0));
        label_21->setMaximumSize(QSize(113, 16777215));

        horizontalLayout_7->addWidget(label_21);

        comboBox_estCivil = new QComboBox(layoutWidget1);
        comboBox_estCivil->setObjectName(QString::fromUtf8("comboBox_estCivil"));
        comboBox_estCivil->setMinimumSize(QSize(120, 0));

        horizontalLayout_7->addWidget(comboBox_estCivil);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(113, 0));

        horizontalLayout_18->addWidget(label_15);

        lineEdit_celular = new QLineEdit(layoutWidget1);
        lineEdit_celular->setObjectName(QString::fromUtf8("lineEdit_celular"));
        lineEdit_celular->setMaxLength(11);

        horizontalLayout_18->addWidget(lineEdit_celular);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(113, 0));

        horizontalLayout_17->addWidget(label_14);

        lineEdit_telefonoFijo = new QLineEdit(layoutWidget1);
        lineEdit_telefonoFijo->setObjectName(QString::fromUtf8("lineEdit_telefonoFijo"));
        lineEdit_telefonoFijo->setMaxLength(9);

        horizontalLayout_17->addWidget(lineEdit_telefonoFijo);


        verticalLayout->addLayout(horizontalLayout_17);

        QWidget::setTabOrder(lineEdit_dni, lineEdit_nombres);
        QWidget::setTabOrder(lineEdit_nombres, lineEdit_apPaterno);
        QWidget::setTabOrder(lineEdit_apPaterno, lineEdit_apMaterno);
        QWidget::setTabOrder(lineEdit_apMaterno, dateEdit_nacimiento);
        QWidget::setTabOrder(dateEdit_nacimiento, comboBox_genero);
        QWidget::setTabOrder(comboBox_genero, comboBox_estCivil);
        QWidget::setTabOrder(comboBox_estCivil, lineEdit_celular);
        QWidget::setTabOrder(lineEdit_celular, lineEdit_telefonoFijo);
        QWidget::setTabOrder(lineEdit_telefonoFijo, lineEdit_direccion);
        QWidget::setTabOrder(lineEdit_direccion, lineEdit_nick1);
        QWidget::setTabOrder(lineEdit_nick1, lineEdit_pass1);
        QWidget::setTabOrder(lineEdit_pass1, pushButton_change);
        QWidget::setTabOrder(pushButton_change, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_cancel);

        retranslateUi(ui_edit_personalInformation);

        QMetaObject::connectSlotsByName(ui_edit_personalInformation);
    } // setupUi

    void retranslateUi(QDialog *ui_edit_personalInformation)
    {
        ui_edit_personalInformation->setWindowTitle(QApplication::translate("ui_edit_personalInformation", "Informaci\303\263n Personal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_save->setToolTip(QApplication::translate("ui_edit_personalInformation", "Guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_save->setText(QString());
        pushButton_save->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_cancel->setToolTip(QApplication::translate("ui_edit_personalInformation", "Cancelar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_cancel->setText(QString());
        groupBox->setTitle(QApplication::translate("ui_edit_personalInformation", "Datos de acceso", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_edit_personalInformation", "Nick", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_edit_personalInformation", "Password", 0, QApplication::UnicodeUTF8));
        pushButton_change->setText(QApplication::translate("ui_edit_personalInformation", "Cambiar password", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ui_edit_personalInformation", "Datos personales", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ui_edit_personalInformation", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        lineEdit_direccion->setText(QString());
        label_20->setText(QApplication::translate("ui_edit_personalInformation", "DNI", 0, QApplication::UnicodeUTF8));
        lineEdit_dni->setInputMask(QString());
        lineEdit_dni->setText(QString());
        label_22->setText(QApplication::translate("ui_edit_personalInformation", "Nombres", 0, QApplication::UnicodeUTF8));
        lineEdit_nombres->setText(QString());
        label_18->setText(QApplication::translate("ui_edit_personalInformation", "Apellido Paterno", 0, QApplication::UnicodeUTF8));
        lineEdit_apPaterno->setText(QString());
        label_25->setText(QApplication::translate("ui_edit_personalInformation", "Apellido Materno", 0, QApplication::UnicodeUTF8));
        lineEdit_apMaterno->setText(QString());
        label_24->setText(QApplication::translate("ui_edit_personalInformation", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_edit_personalInformation", "G\303\251nero", 0, QApplication::UnicodeUTF8));
        comboBox_genero->clear();
        comboBox_genero->insertItems(0, QStringList()
         << QApplication::translate("ui_edit_personalInformation", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("ui_edit_personalInformation", "Estado Civil", 0, QApplication::UnicodeUTF8));
        comboBox_estCivil->clear();
        comboBox_estCivil->insertItems(0, QStringList()
         << QApplication::translate("ui_edit_personalInformation", "Soltero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Casado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Viudo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_edit_personalInformation", "Divorciado", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("ui_edit_personalInformation", "Celular", 0, QApplication::UnicodeUTF8));
        lineEdit_celular->setInputMask(QString());
        lineEdit_celular->setText(QString());
        label_14->setText(QApplication::translate("ui_edit_personalInformation", "Tel\303\251fono Fijo", 0, QApplication::UnicodeUTF8));
        lineEdit_telefonoFijo->setInputMask(QString());
        lineEdit_telefonoFijo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_edit_personalInformation: public Ui_ui_edit_personalInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EDIT_PERSONALINFORMATION_H
