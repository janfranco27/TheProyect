/********************************************************************************
** Form generated from reading UI file 'ui_module_articulos.ui'
**
** Created: Fri 22. Mar 14:35:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_ARTICULOS_H
#define UI_UI_MODULE_ARTICULOS_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_module_articulos
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTreeWidget *treeWidget_articulos;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_nuevo_2;
    QPushButton *pushButton_editar_2;
    QPushButton *pushButton_eliminar_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_buscar_2;
    QPushButton *pushButton_buscar_2;
    QTableView *tableView_articulos;

    void setupUi(QWidget *ui_module_articulos)
    {
        if (ui_module_articulos->objectName().isEmpty())
            ui_module_articulos->setObjectName(QString::fromUtf8("ui_module_articulos"));
        ui_module_articulos->resize(822, 274);
        gridLayout = new QGridLayout(ui_module_articulos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(ui_module_articulos);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 24));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_2);

        treeWidget_articulos = new QTreeWidget(layoutWidget_3);
        treeWidget_articulos->setObjectName(QString::fromUtf8("treeWidget_articulos"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget_articulos->sizePolicy().hasHeightForWidth());
        treeWidget_articulos->setSizePolicy(sizePolicy1);
        treeWidget_articulos->setHeaderHidden(false);
        treeWidget_articulos->setExpandsOnDoubleClick(true);

        verticalLayout_3->addWidget(treeWidget_articulos);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        pushButton_nuevo_2 = new QPushButton(layoutWidget_4);
        pushButton_nuevo_2->setObjectName(QString::fromUtf8("pushButton_nuevo_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_nuevo_2->sizePolicy().hasHeightForWidth());
        pushButton_nuevo_2->setSizePolicy(sizePolicy2);
        pushButton_nuevo_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Black_New-Page.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nuevo_2->setIcon(icon);
        pushButton_nuevo_2->setIconSize(QSize(16, 16));
        pushButton_nuevo_2->setAutoDefault(false);
        pushButton_nuevo_2->setDefault(false);
        pushButton_nuevo_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_nuevo_2);

        pushButton_editar_2 = new QPushButton(layoutWidget_4);
        pushButton_editar_2->setObjectName(QString::fromUtf8("pushButton_editar_2"));
        sizePolicy2.setHeightForWidth(pushButton_editar_2->sizePolicy().hasHeightForWidth());
        pushButton_editar_2->setSizePolicy(sizePolicy2);
        pushButton_editar_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editar_2->setIcon(icon1);
        pushButton_editar_2->setIconSize(QSize(16, 16));
        pushButton_editar_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_editar_2);

        pushButton_eliminar_2 = new QPushButton(layoutWidget_4);
        pushButton_eliminar_2->setObjectName(QString::fromUtf8("pushButton_eliminar_2"));
        sizePolicy2.setHeightForWidth(pushButton_eliminar_2->sizePolicy().hasHeightForWidth());
        pushButton_eliminar_2->setSizePolicy(sizePolicy2);
        pushButton_eliminar_2->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar_2->setIcon(icon2);
        pushButton_eliminar_2->setIconSize(QSize(16, 16));
        pushButton_eliminar_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_eliminar_2);

        horizontalSpacer_4 = new QSpacerItem(168, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lineEdit_buscar_2 = new QLineEdit(layoutWidget_4);
        lineEdit_buscar_2->setObjectName(QString::fromUtf8("lineEdit_buscar_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_buscar_2->sizePolicy().hasHeightForWidth());
        lineEdit_buscar_2->setSizePolicy(sizePolicy3);
        lineEdit_buscar_2->setMinimumSize(QSize(250, 0));
        lineEdit_buscar_2->setMaximumSize(QSize(250, 16777215));
        lineEdit_buscar_2->setFrame(true);
        lineEdit_buscar_2->setEchoMode(QLineEdit::NoEcho);
        lineEdit_buscar_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_buscar_2->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_buscar_2);

        pushButton_buscar_2 = new QPushButton(layoutWidget_4);
        pushButton_buscar_2->setObjectName(QString::fromUtf8("pushButton_buscar_2"));
        sizePolicy2.setHeightForWidth(pushButton_buscar_2->sizePolicy().hasHeightForWidth());
        pushButton_buscar_2->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/monotone_search_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_buscar_2->setIcon(icon3);
        pushButton_buscar_2->setIconSize(QSize(16, 16));
        pushButton_buscar_2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_buscar_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tableView_articulos = new QTableView(layoutWidget_4);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));
        tableView_articulos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_articulos->setAlternatingRowColors(true);
        tableView_articulos->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView_articulos->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_articulos->setShowGrid(false);
        tableView_articulos->setGridStyle(Qt::NoPen);

        verticalLayout_4->addWidget(tableView_articulos);

        splitter->addWidget(layoutWidget_4);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(ui_module_articulos);

        QMetaObject::connectSlotsByName(ui_module_articulos);
    } // setupUi

    void retranslateUi(QWidget *ui_module_articulos)
    {
        ui_module_articulos->setWindowTitle(QApplication::translate("ui_module_articulos", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_module_articulos", "  Navegaci\303\263n ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_articulos->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_module_articulos", "Articulos", 0, QApplication::UnicodeUTF8));
        pushButton_nuevo_2->setText(QApplication::translate("ui_module_articulos", "Nuevo", 0, QApplication::UnicodeUTF8));
        pushButton_editar_2->setText(QApplication::translate("ui_module_articulos", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar_2->setText(QApplication::translate("ui_module_articulos", "Eliminar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        lineEdit_buscar_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_buscar_2->setText(QString());
        lineEdit_buscar_2->setPlaceholderText(QApplication::translate("ui_module_articulos", "Buscar . . .", 0, QApplication::UnicodeUTF8));
        pushButton_buscar_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_articulos: public Ui_ui_module_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_ARTICULOS_H
