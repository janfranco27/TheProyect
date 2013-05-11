/********************************************************************************
** Form generated from reading UI file 'ui_new_venta_boleta.ui'
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

#ifndef UI_UI_NEW_VENTA_BOLETA_H
#define UI_UI_NEW_VENTA_BOLETA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta_boleta
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *ui_new_venta_boleta)
    {
        if (ui_new_venta_boleta->objectName().isEmpty())
            ui_new_venta_boleta->setObjectName(QString::fromUtf8("ui_new_venta_boleta"));
        ui_new_venta_boleta->resize(480, 116);
        layoutWidget_2 = new QWidget(ui_new_venta_boleta);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 20, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        layoutWidget = new QWidget(ui_new_venta_boleta);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 20, 178, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget = new QWidget(ui_new_venta_boleta);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 321, 22));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        retranslateUi(ui_new_venta_boleta);

        QMetaObject::connectSlotsByName(ui_new_venta_boleta);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta_boleta)
    {
        ui_new_venta_boleta->setWindowTitle(QApplication::translate("ui_new_venta_boleta", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta_boleta", "Dni", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta_boleta", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta_boleta", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta_boleta: public Ui_ui_new_venta_boleta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_BOLETA_H
