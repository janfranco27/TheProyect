/********************************************************************************
** Form generated from reading UI file 'ui_new_venta_factura.ui'
**
** Created: Sat 23. Mar 12:36:58 2013
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta_factura
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ui_new_venta_factura)
    {
        if (ui_new_venta_factura->objectName().isEmpty())
            ui_new_venta_factura->setObjectName(QString::fromUtf8("ui_new_venta_factura"));
        ui_new_venta_factura->resize(710, 395);
        label = new QLabel(ui_new_venta_factura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 46, 13));
        label_2 = new QLabel(ui_new_venta_factura);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 81, 16));
        lineEdit = new QLineEdit(ui_new_venta_factura);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 60, 113, 20));
        lineEdit_2 = new QLineEdit(ui_new_venta_factura);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 90, 113, 20));
        pushButton_2 = new QPushButton(ui_new_venta_factura);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 90, 75, 23));

        retranslateUi(ui_new_venta_factura);

        QMetaObject::connectSlotsByName(ui_new_venta_factura);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta_factura)
    {
        ui_new_venta_factura->setWindowTitle(QApplication::translate("ui_new_venta_factura", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta_factura", "Ruc", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta_factura", "Raz\303\263n social", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_new_venta_factura", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta_factura: public Ui_ui_new_venta_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_FACTURA_H
