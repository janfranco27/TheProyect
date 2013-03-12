/********************************************************************************
** Form generated from reading UI file 'ui_module_home.ui'
**
** Created: Mon 11. Mar 21:15:36 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MODULE_HOME_H
#define UI_UI_MODULE_HOME_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_module_home
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_usuario_2;
    QPushButton *pushButton_usuario_2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_compras_2;
    QPushButton *pushButton_ventas_2;
    QPushButton *pushButton_articulo_2;
    QPushButton *pushButton_colaboradores_2;
    QPushButton *pushButton_facturacion_2;
    QPushButton *pushButton_sistema_2;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *ui_module_home)
    {
        if (ui_module_home->objectName().isEmpty())
            ui_module_home->setObjectName(QString::fromUtf8("ui_module_home"));
        ui_module_home->resize(826, 640);
        gridLayout_2 = new QGridLayout(ui_module_home);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(ui_module_home);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_usuario_2 = new QLabel(frame);
        label_usuario_2->setObjectName(QString::fromUtf8("label_usuario_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_usuario_2->sizePolicy().hasHeightForWidth());
        label_usuario_2->setSizePolicy(sizePolicy);
        label_usuario_2->setMinimumSize(QSize(70, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_usuario_2->setFont(font1);

        horizontalLayout_4->addWidget(label_usuario_2);

        pushButton_usuario_2 = new QPushButton(frame);
        pushButton_usuario_2->setObjectName(QString::fromUtf8("pushButton_usuario_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_usuario_2->sizePolicy().hasHeightForWidth());
        pushButton_usuario_2->setSizePolicy(sizePolicy1);
        pushButton_usuario_2->setMinimumSize(QSize(50, 50));
        pushButton_usuario_2->setMaximumSize(QSize(50, 50));
        pushButton_usuario_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_usuario_2->setIcon(icon);
        pushButton_usuario_2->setIconSize(QSize(50, 50));
        pushButton_usuario_2->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_usuario_2);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(10);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_compras_2 = new QPushButton(frame);
        pushButton_compras_2->setObjectName(QString::fromUtf8("pushButton_compras_2"));
        sizePolicy1.setHeightForWidth(pushButton_compras_2->sizePolicy().hasHeightForWidth());
        pushButton_compras_2->setSizePolicy(sizePolicy1);
        pushButton_compras_2->setMinimumSize(QSize(150, 150));
        pushButton_compras_2->setMaximumSize(QSize(150, 150));
        pushButton_compras_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_compras_2->setMouseTracking(false);
        pushButton_compras_2->setFocusPolicy(Qt::WheelFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Marketplace (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_compras_2->setIcon(icon1);
        pushButton_compras_2->setIconSize(QSize(150, 150));
        pushButton_compras_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_compras_2, 0, 0, 1, 1);

        pushButton_ventas_2 = new QPushButton(frame);
        pushButton_ventas_2->setObjectName(QString::fromUtf8("pushButton_ventas_2"));
        sizePolicy1.setHeightForWidth(pushButton_ventas_2->sizePolicy().hasHeightForWidth());
        pushButton_ventas_2->setSizePolicy(sizePolicy1);
        pushButton_ventas_2->setMinimumSize(QSize(150, 150));
        pushButton_ventas_2->setMaximumSize(QSize(150, 150));
        pushButton_ventas_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Android_Market.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ventas_2->setIcon(icon2);
        pushButton_ventas_2->setIconSize(QSize(150, 150));
        pushButton_ventas_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_ventas_2, 0, 1, 1, 1);

        pushButton_articulo_2 = new QPushButton(frame);
        pushButton_articulo_2->setObjectName(QString::fromUtf8("pushButton_articulo_2"));
        sizePolicy1.setHeightForWidth(pushButton_articulo_2->sizePolicy().hasHeightForWidth());
        pushButton_articulo_2->setSizePolicy(sizePolicy1);
        pushButton_articulo_2->setMinimumSize(QSize(150, 150));
        pushButton_articulo_2->setMaximumSize(QSize(150, 150));
        pushButton_articulo_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_articulo_2->setIcon(icon3);
        pushButton_articulo_2->setIconSize(QSize(150, 150));
        pushButton_articulo_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_articulo_2, 1, 0, 1, 1);

        pushButton_colaboradores_2 = new QPushButton(frame);
        pushButton_colaboradores_2->setObjectName(QString::fromUtf8("pushButton_colaboradores_2"));
        sizePolicy1.setHeightForWidth(pushButton_colaboradores_2->sizePolicy().hasHeightForWidth());
        pushButton_colaboradores_2->setSizePolicy(sizePolicy1);
        pushButton_colaboradores_2->setMinimumSize(QSize(150, 150));
        pushButton_colaboradores_2->setMaximumSize(QSize(150, 150));
        pushButton_colaboradores_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_colaboradores_2->setIcon(icon4);
        pushButton_colaboradores_2->setIconSize(QSize(150, 150));
        pushButton_colaboradores_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_colaboradores_2, 1, 1, 1, 1);

        pushButton_facturacion_2 = new QPushButton(frame);
        pushButton_facturacion_2->setObjectName(QString::fromUtf8("pushButton_facturacion_2"));
        sizePolicy1.setHeightForWidth(pushButton_facturacion_2->sizePolicy().hasHeightForWidth());
        pushButton_facturacion_2->setSizePolicy(sizePolicy1);
        pushButton_facturacion_2->setMinimumSize(QSize(150, 150));
        pushButton_facturacion_2->setMaximumSize(QSize(150, 150));
        pushButton_facturacion_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/Journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_facturacion_2->setIcon(icon5);
        pushButton_facturacion_2->setIconSize(QSize(150, 150));
        pushButton_facturacion_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_facturacion_2, 2, 0, 1, 1);

        pushButton_sistema_2 = new QPushButton(frame);
        pushButton_sistema_2->setObjectName(QString::fromUtf8("pushButton_sistema_2"));
        sizePolicy1.setHeightForWidth(pushButton_sistema_2->sizePolicy().hasHeightForWidth());
        pushButton_sistema_2->setSizePolicy(sizePolicy1);
        pushButton_sistema_2->setMinimumSize(QSize(150, 150));
        pushButton_sistema_2->setMaximumSize(QSize(150, 150));
        pushButton_sistema_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sistema_2->setIcon(icon6);
        pushButton_sistema_2->setIconSize(QSize(150, 1505));
        pushButton_sistema_2->setFlat(true);

        gridLayout_5->addWidget(pushButton_sistema_2, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 2, 0, 2, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 3, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(80, 80));
        pushButton_10->setMaximumSize(QSize(80, 80));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Iconos/Iconos/Facebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon7);
        pushButton_10->setIconSize(QSize(80, 80));
        pushButton_10->setAutoDefault(false);
        pushButton_10->setDefault(false);
        pushButton_10->setFlat(true);

        gridLayout_6->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(80, 80));
        pushButton_11->setMaximumSize(QSize(80, 80));
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Iconos/Iconos/Twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon8);
        pushButton_11->setIconSize(QSize(80, 80));
        pushButton_11->setAutoDefault(false);
        pushButton_11->setDefault(false);
        pushButton_11->setFlat(true);

        gridLayout_6->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(80, 80));
        pushButton_12->setMaximumSize(QSize(80, 80));
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Iconos/Iconos/Gmail.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon9);
        pushButton_12->setIconSize(QSize(80, 80));
        pushButton_12->setAutoDefault(false);
        pushButton_12->setDefault(false);
        pushButton_12->setFlat(true);

        gridLayout_6->addWidget(pushButton_12, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 3, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(78, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 308, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(41, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 2, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ui_module_home);

        QMetaObject::connectSlotsByName(ui_module_home);
    } // setupUi

    void retranslateUi(QWidget *ui_module_home)
    {
        ui_module_home->setWindowTitle(QApplication::translate("ui_module_home", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_module_home", "Inicio", 0, QApplication::UnicodeUTF8));
        label_usuario_2->setText(QApplication::translate("ui_module_home", "user", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_usuario_2->setToolTip(QApplication::translate("ui_module_home", "Usuario", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_usuario_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_compras_2->setToolTip(QApplication::translate("ui_module_home", "Compras", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_compras_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_compras_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras_2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras_2->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_compras_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_ventas_2->setToolTip(QApplication::translate("ui_module_home", "Ventas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_ventas_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_articulo_2->setToolTip(QApplication::translate("ui_module_home", "Articulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_articulo_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_colaboradores_2->setToolTip(QApplication::translate("ui_module_home", "Colaboradores", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_colaboradores_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_facturacion_2->setToolTip(QApplication::translate("ui_module_home", "Facturacion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_facturacion_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_sistema_2->setToolTip(QApplication::translate("ui_module_home", "Ajustes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_sistema_2->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_module_home: public Ui_ui_module_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MODULE_HOME_H
