/********************************************************************************
** Form generated from reading UI file 'ui_new_venta_proforma.ui'
**
** Created: Sat 27. Apr 18:15:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_VENTA_PROFORMA_H
#define UI_UI_NEW_VENTA_PROFORMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta_proforma
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *ui_new_venta_proforma)
    {
        if (ui_new_venta_proforma->objectName().isEmpty())
            ui_new_venta_proforma->setObjectName(QString::fromUtf8("ui_new_venta_proforma"));
        ui_new_venta_proforma->resize(591, 146);
        pushButton = new QPushButton(ui_new_venta_proforma);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 90, 111, 23));
        widget = new QWidget(ui_new_venta_proforma);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 30, 178, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(ui_new_venta_proforma);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 60, 159, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        widget2 = new QWidget(ui_new_venta_proforma);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 90, 184, 22));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        retranslateUi(ui_new_venta_proforma);

        QMetaObject::connectSlotsByName(ui_new_venta_proforma);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta_proforma)
    {
        ui_new_venta_proforma->setWindowTitle(QApplication::translate("ui_new_venta_proforma", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_new_venta_proforma", "Buscar cliente...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta_proforma", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta_proforma", "DNI", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta_proforma", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta_proforma: public Ui_ui_new_venta_proforma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_PROFORMA_H
