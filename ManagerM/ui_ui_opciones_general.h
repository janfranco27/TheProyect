/********************************************************************************
** Form generated from reading UI file 'ui_opciones_general.ui'
**
** Created: Tue 2. Apr 00:17:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_GENERAL_H
#define UI_UI_OPCIONES_GENERAL_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_general
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_igv;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_guardar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_opciones_general)
    {
        if (ui_opciones_general->objectName().isEmpty())
            ui_opciones_general->setObjectName(QString::fromUtf8("ui_opciones_general"));
        ui_opciones_general->resize(571, 408);
        ui_opciones_general->setMinimumSize(QSize(571, 408));
        ui_opciones_general->setMaximumSize(QSize(571, 408));
        gridLayout_3 = new QGridLayout(ui_opciones_general);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(ui_opciones_general);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_igv = new QLineEdit(groupBox);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));
        lineEdit_igv->setMinimumSize(QSize(100, 0));
        lineEdit_igv->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(lineEdit_igv);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_guardar = new QPushButton(groupBox);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_guardar->setIcon(icon);
        pushButton_guardar->setFlat(true);

        horizontalLayout->addWidget(pushButton_guardar);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 296, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_general);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_opciones_general);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_general)
    {
        ui_opciones_general->setWindowTitle(QApplication::translate("ui_opciones_general", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ui_opciones_general", "I.G.V", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_general", "Valor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_general", "%", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_general", "Sistema", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_general: public Ui_ui_opciones_general {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_GENERAL_H
