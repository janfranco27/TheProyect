/********************************************************************************
** Form generated from reading UI file 'ui_new_venta.ui'
**
** Created: Sat 23. Mar 12:36:57 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_VENTA_H
#define UI_UI_NEW_VENTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableView;
    QTableWidget *tableWidget;
    QSplitter *splitter_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QSplitter *splitter_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QTableWidget *tableWidget_2;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QWidget *page_3;
    QWidget *widget1;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *lineEdit_6;

    void setupUi(QWidget *ui_new_venta)
    {
        if (ui_new_venta->objectName().isEmpty())
            ui_new_venta->setObjectName(QString::fromUtf8("ui_new_venta"));
        ui_new_venta->resize(907, 581);
        stackedWidget = new QStackedWidget(ui_new_venta);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 871, 461));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 60, 781, 211));
        tableWidget = new QTableWidget(page);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 320, 771, 121));
        splitter_3 = new QSplitter(page);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(260, 30, 170, 20));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_3->addWidget(label_3);
        comboBox = new QComboBox(splitter_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        splitter_3->addWidget(comboBox);
        splitter_2 = new QSplitter(page);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(470, 30, 170, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        comboBox_2 = new QComboBox(splitter_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        splitter_2->addWidget(comboBox_2);
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 280, 31, 23));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 280, 31, 23));
        splitter = new QSplitter(page);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(60, 30, 170, 20));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        splitter->addWidget(lineEdit);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableWidget_2 = new QTableWidget(page_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(30, 110, 831, 291));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 80, 114, 13));
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 10, 178, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        widget1 = new QWidget(page_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 80, 801, 331));
        widget2 = new QWidget(page_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(40, 30, 351, 22));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_2 = new QLineEdit(widget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_3 = new QLineEdit(widget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);

        widget3 = new QWidget(page_3);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(660, 30, 158, 22));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        dateEdit = new QDateEdit(widget3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        stackedWidget->addWidget(page_3);
        pushButton_3 = new QPushButton(ui_new_venta);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 550, 75, 23));
        pushButton_4 = new QPushButton(ui_new_venta);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(730, 550, 75, 23));
        layoutWidget_2 = new QWidget(ui_new_venta);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(660, 500, 185, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        retranslateUi(ui_new_venta);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ui_new_venta);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta)
    {
        ui_new_venta->setWindowTitle(QApplication::translate("ui_new_venta", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta", "Marca", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_venta", "Medida", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_new_venta", "v", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_new_venta", "^", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta", "Nombre", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_new_venta", "Articulos seleccionados:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_new_venta", "Tipo de comprobante", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_new_venta", "Serie - Numero", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_new_venta", "-", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_new_venta", "Fecha Emisi\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_new_venta", "Siguiente", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ui_new_venta", "Atras", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_new_venta", "Total", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta: public Ui_ui_new_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_H
