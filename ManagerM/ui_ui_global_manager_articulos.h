/********************************************************************************
** Form generated from reading UI file 'ui_global_manager_articulos.ui'
**
** Created: Sat 25. May 11:00:06 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_GLOBAL_MANAGER_ARTICULOS_H
#define UI_UI_GLOBAL_MANAGER_ARTICULOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_global_manager_articulos
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_modo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_descripcion;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox_marca;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QComboBox *comboBox_medida;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_grupo;
    QComboBox *comboBox_grupo;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_9;
    QFrame *line;
    QTableView *tableView_articulos;

    void setupUi(QWidget *ui_global_manager_articulos)
    {
        if (ui_global_manager_articulos->objectName().isEmpty())
            ui_global_manager_articulos->setObjectName(QString::fromUtf8("ui_global_manager_articulos"));
        ui_global_manager_articulos->resize(534, 525);
        gridLayout = new QGridLayout(ui_global_manager_articulos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(ui_global_manager_articulos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(ui_global_manager_articulos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_modo = new QComboBox(ui_global_manager_articulos);
        comboBox_modo->setObjectName(QString::fromUtf8("comboBox_modo"));

        horizontalLayout_3->addWidget(comboBox_modo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_descripcion = new QLineEdit(ui_global_manager_articulos);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));

        horizontalLayout_4->addWidget(lineEdit_descripcion);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(ui_global_manager_articulos);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(ui_global_manager_articulos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 0));

        horizontalLayout_6->addWidget(label);

        comboBox_marca = new QComboBox(ui_global_manager_articulos);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));
        comboBox_marca->setMinimumSize(QSize(150, 0));

        horizontalLayout_6->addWidget(comboBox_marca);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(ui_global_manager_articulos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 0));

        horizontalLayout_7->addWidget(label_2);

        comboBox_medida = new QComboBox(ui_global_manager_articulos);
        comboBox_medida->setObjectName(QString::fromUtf8("comboBox_medida"));
        comboBox_medida->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(comboBox_medida);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_grupo = new QLabel(ui_global_manager_articulos);
        label_grupo->setObjectName(QString::fromUtf8("label_grupo"));
        label_grupo->setMinimumSize(QSize(40, 0));

        horizontalLayout_8->addWidget(label_grupo);

        comboBox_grupo = new QComboBox(ui_global_manager_articulos);
        comboBox_grupo->setObjectName(QString::fromUtf8("comboBox_grupo"));
        comboBox_grupo->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(comboBox_grupo);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        gridLayout->addLayout(horizontalLayout_9, 8, 0, 1, 1);

        line = new QFrame(ui_global_manager_articulos);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 9, 0, 1, 1);

        tableView_articulos = new QTableView(ui_global_manager_articulos);
        tableView_articulos->setObjectName(QString::fromUtf8("tableView_articulos"));

        gridLayout->addWidget(tableView_articulos, 10, 0, 1, 1);

        QWidget::setTabOrder(tableView_articulos, comboBox_modo);

        retranslateUi(ui_global_manager_articulos);

        QMetaObject::connectSlotsByName(ui_global_manager_articulos);
    } // setupUi

    void retranslateUi(QWidget *ui_global_manager_articulos)
    {
        ui_global_manager_articulos->setWindowTitle(QApplication::translate("ui_global_manager_articulos", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_global_manager_articulos", "Busqueda Avanzada", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_global_manager_articulos", "Eliga el modo de busqueda para la descripcion\n"
" y realize su busqueda:", 0, QApplication::UnicodeUTF8));
        comboBox_modo->clear();
        comboBox_modo->insertItems(0, QStringList()
         << QApplication::translate("ui_global_manager_articulos", "Empieza con", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_global_manager_articulos", "Contiene a", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("ui_global_manager_articulos", "Restringe tus resultados por:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_global_manager_articulos", "Marca", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_global_manager_articulos", "Medida", 0, QApplication::UnicodeUTF8));
        label_grupo->setText(QApplication::translate("ui_global_manager_articulos", "Grupo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_global_manager_articulos: public Ui_ui_global_manager_articulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_GLOBAL_MANAGER_ARTICULOS_H
