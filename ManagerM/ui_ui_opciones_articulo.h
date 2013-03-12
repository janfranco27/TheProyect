/********************************************************************************
** Form generated from reading UI file 'ui_opciones_articulo.ui'
**
** Created: Mon 11. Mar 20:55:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_OPCIONES_ARTICULO_H
#define UI_UI_OPCIONES_ARTICULO_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_opciones_articulo
{
public:
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QTableView *tableView_medida;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_medida;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_save_medida;
    QPushButton *pushButton_delete_medida;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QTableView *tableView_grupo;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_grupo;
    QLineEdit *lineEdit_grupo;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_save_grupo;
    QPushButton *pushButton_delete_grupo;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QTableView *tableView_marca;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_marca;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save_marca;
    QPushButton *pushButton_delete_marca;

    void setupUi(QWidget *ui_opciones_articulo)
    {
        if (ui_opciones_articulo->objectName().isEmpty())
            ui_opciones_articulo->setObjectName(QString::fromUtf8("ui_opciones_articulo"));
        ui_opciones_articulo->resize(571, 408);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_opciones_articulo->sizePolicy().hasHeightForWidth());
        ui_opciones_articulo->setSizePolicy(sizePolicy);
        ui_opciones_articulo->setMinimumSize(QSize(571, 408));
        ui_opciones_articulo->setMaximumSize(QSize(571, 408));
        gridLayout_5 = new QGridLayout(ui_opciones_articulo);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMinimumSize);
        tabWidget = new QTabWidget(ui_opciones_articulo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView_medida = new QTableView(tab);
        tableView_medida->setObjectName(QString::fromUtf8("tableView_medida"));

        gridLayout_2->addWidget(tableView_medida, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_medida = new QLineEdit(tab);
        lineEdit_medida->setObjectName(QString::fromUtf8("lineEdit_medida"));

        horizontalLayout_5->addWidget(lineEdit_medida);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_save_medida = new QPushButton(tab);
        pushButton_save_medida->setObjectName(QString::fromUtf8("pushButton_save_medida"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_save_medida->setIcon(icon);
        pushButton_save_medida->setIconSize(QSize(20, 20));
        pushButton_save_medida->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_save_medida);

        pushButton_delete_medida = new QPushButton(tab);
        pushButton_delete_medida->setObjectName(QString::fromUtf8("pushButton_delete_medida"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete_medida->setIcon(icon1);
        pushButton_delete_medida->setIconSize(QSize(20, 20));
        pushButton_delete_medida->setFlat(true);

        horizontalLayout_6->addWidget(pushButton_delete_medida);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView_grupo = new QTableView(tab_2);
        tableView_grupo->setObjectName(QString::fromUtf8("tableView_grupo"));
        tableView_grupo->setAlternatingRowColors(true);
        tableView_grupo->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_grupo->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_grupo->setShowGrid(false);
        tableView_grupo->setGridStyle(Qt::NoPen);
        tableView_grupo->setSortingEnabled(false);

        gridLayout_3->addWidget(tableView_grupo, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_grupo = new QLabel(tab_2);
        label_grupo->setObjectName(QString::fromUtf8("label_grupo"));
        label_grupo->setMinimumSize(QSize(50, 0));

        horizontalLayout_8->addWidget(label_grupo);

        lineEdit_grupo = new QLineEdit(tab_2);
        lineEdit_grupo->setObjectName(QString::fromUtf8("lineEdit_grupo"));

        horizontalLayout_8->addWidget(lineEdit_grupo);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_save_grupo = new QPushButton(tab_2);
        pushButton_save_grupo->setObjectName(QString::fromUtf8("pushButton_save_grupo"));
        pushButton_save_grupo->setIcon(icon);
        pushButton_save_grupo->setIconSize(QSize(20, 20));
        pushButton_save_grupo->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_save_grupo);

        pushButton_delete_grupo = new QPushButton(tab_2);
        pushButton_delete_grupo->setObjectName(QString::fromUtf8("pushButton_delete_grupo"));
        pushButton_delete_grupo->setIcon(icon1);
        pushButton_delete_grupo->setIconSize(QSize(20, 20));
        pushButton_delete_grupo->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_delete_grupo);


        horizontalLayout_7->addLayout(horizontalLayout_9);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView_marca = new QTableView(tab_3);
        tableView_marca->setObjectName(QString::fromUtf8("tableView_marca"));

        gridLayout->addWidget(tableView_marca, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(label);

        lineEdit_marca = new QLineEdit(tab_3);
        lineEdit_marca->setObjectName(QString::fromUtf8("lineEdit_marca"));

        horizontalLayout_2->addWidget(lineEdit_marca);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_save_marca = new QPushButton(tab_3);
        pushButton_save_marca->setObjectName(QString::fromUtf8("pushButton_save_marca"));
        pushButton_save_marca->setIcon(icon);
        pushButton_save_marca->setIconSize(QSize(20, 20));
        pushButton_save_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_save_marca);

        pushButton_delete_marca = new QPushButton(tab_3);
        pushButton_delete_marca->setObjectName(QString::fromUtf8("pushButton_delete_marca"));
        pushButton_delete_marca->setIcon(icon1);
        pushButton_delete_marca->setIconSize(QSize(20, 20));
        pushButton_delete_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_delete_marca);


        horizontalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(ui_opciones_articulo);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ui_opciones_articulo);
    } // setupUi

    void retranslateUi(QWidget *ui_opciones_articulo)
    {
        ui_opciones_articulo->setWindowTitle(QApplication::translate("ui_opciones_articulo", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_opciones_articulo", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton_save_medida->setText(QString());
        pushButton_delete_medida->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ui_opciones_articulo", "Medidas", 0, QApplication::UnicodeUTF8));
        label_grupo->setText(QApplication::translate("ui_opciones_articulo", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_save_grupo->setToolTip(QApplication::translate("ui_opciones_articulo", "Guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_save_grupo->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_delete_grupo->setToolTip(QApplication::translate("ui_opciones_articulo", "Eliminar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_delete_grupo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ui_opciones_articulo", "Grupos", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_opciones_articulo", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton_save_marca->setText(QString());
        pushButton_delete_marca->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ui_opciones_articulo", "Marcas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_opciones_articulo: public Ui_ui_opciones_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_OPCIONES_ARTICULO_H
