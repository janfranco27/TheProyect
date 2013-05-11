/********************************************************************************
** Form generated from reading UI file 'ui_new_venta_factura.ui'
**
<<<<<<< HEAD
** Created: Sun 28. Apr 01:07:44 2013
=======
** Created: Sat 27. Apr 21:06:38 2013
>>>>>>> Commit
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_VENTA_FACTURA_H
#define UI_UI_NEW_VENTA_FACTURA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta_factura
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *ui_new_venta_factura)
    {
        if (ui_new_venta_factura->objectName().isEmpty())
            ui_new_venta_factura->setObjectName(QString::fromUtf8("ui_new_venta_factura"));
        ui_new_venta_factura->resize(766, 121);
        layoutWidget = new QWidget(ui_new_venta_factura);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 261, 80));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        pushButton = new QPushButton(ui_new_venta_factura);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 70, 101, 23));

        retranslateUi(ui_new_venta_factura);

        QMetaObject::connectSlotsByName(ui_new_venta_factura);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta_factura)
    {
        ui_new_venta_factura->setWindowTitle(QApplication::translate("ui_new_venta_factura", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta_factura", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta_factura", "RUC", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta_factura", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_new_venta_factura", "Buscar cliente...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta_factura: public Ui_ui_new_venta_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_FACTURA_H
