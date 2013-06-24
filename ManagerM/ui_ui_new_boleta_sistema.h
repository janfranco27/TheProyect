/********************************************************************************
** Form generated from reading UI file 'ui_new_boleta_sistema.ui'
**
** Created: Sun 23. Jun 20:49:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_BOLETA_SISTEMA_H
#define UI_UI_NEW_BOLETA_SISTEMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_boleta_sistema
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_serie;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *spinBox_numero_i;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpinBox *spinBox_numero_f;
    QPushButton *pushButton_new;

    void setupUi(QWidget *ui_new_boleta_sistema)
    {
        if (ui_new_boleta_sistema->objectName().isEmpty())
            ui_new_boleta_sistema->setObjectName(QString::fromUtf8("ui_new_boleta_sistema"));
        ui_new_boleta_sistema->setWindowModality(Qt::ApplicationModal);
        ui_new_boleta_sistema->resize(596, 30);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Configure_alt_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_boleta_sistema->setWindowIcon(icon);
        gridLayout = new QGridLayout(ui_new_boleta_sistema);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ui_new_boleta_sistema);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 0));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label);

        spinBox_serie = new QSpinBox(ui_new_boleta_sistema);
        spinBox_serie->setObjectName(QString::fromUtf8("spinBox_serie"));
        spinBox_serie->setMinimumSize(QSize(100, 0));
        spinBox_serie->setMaximumSize(QSize(100, 16777215));
        spinBox_serie->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_serie->setMaximum(1000000);

        horizontalLayout->addWidget(spinBox_serie);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        line = new QFrame(ui_new_boleta_sistema);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(ui_new_boleta_sistema);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_2);

        spinBox_numero_i = new QSpinBox(ui_new_boleta_sistema);
        spinBox_numero_i->setObjectName(QString::fromUtf8("spinBox_numero_i"));
        spinBox_numero_i->setMinimumSize(QSize(100, 0));
        spinBox_numero_i->setMaximumSize(QSize(100, 16777215));
        spinBox_numero_i->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_numero_i->setMaximum(1000000);

        horizontalLayout_2->addWidget(spinBox_numero_i);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(ui_new_boleta_sistema);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_3);

        spinBox_numero_f = new QSpinBox(ui_new_boleta_sistema);
        spinBox_numero_f->setObjectName(QString::fromUtf8("spinBox_numero_f"));
        spinBox_numero_f->setMinimumSize(QSize(100, 0));
        spinBox_numero_f->setMaximumSize(QSize(100, 16777215));
        spinBox_numero_f->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_numero_f->setMaximum(1000000);

        horizontalLayout_3->addWidget(spinBox_numero_f);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        pushButton_new = new QPushButton(ui_new_boleta_sistema);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new->setIcon(icon1);
        pushButton_new->setIconSize(QSize(20, 20));
        pushButton_new->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_new);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        retranslateUi(ui_new_boleta_sistema);

        QMetaObject::connectSlotsByName(ui_new_boleta_sistema);
    } // setupUi

    void retranslateUi(QWidget *ui_new_boleta_sistema)
    {
        ui_new_boleta_sistema->setWindowTitle(QApplication::translate("ui_new_boleta_sistema", "Nueva Boleta", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_boleta_sistema", "Serie", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_new_boleta_sistema", "Numero Inicio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_boleta_sistema", "Numero Fin", 0, QApplication::UnicodeUTF8));
        pushButton_new->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_new_boleta_sistema: public Ui_ui_new_boleta_sistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_BOLETA_SISTEMA_H
