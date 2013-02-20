/********************************************************************************
** Form generated from reading UI file 'ui_main.ui'
**
** Created: Wed 20. Feb 10:27:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAIN_H
#define UI_UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_main
{
public:
    QAction *actionAcerca_de_ManagerM;
    QAction *actionPantalla_Completa;
    QAction *actionInicial_Sesion;
    QAction *actionCerrar_Sesion;
    QAction *actionSalir;
    QAction *actionVentas;
    QAction *actionCliente;
    QAction *actionColaborador;
    QAction *actionNuevo;
    QAction *actionEditar;
    QAction *actionEliminar;
    QAction *actionEmpresas_2;
    QAction *actionTiendas;
    QAction *actionUsuarios;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usuario;
    QPushButton *pushButton_usuario;
    QGridLayout *gridLayout;
    QPushButton *pushButton_compras;
    QPushButton *pushButton_ventas;
    QPushButton *pushButton_articulo;
    QPushButton *pushButton_colaboradores;
    QPushButton *pushButton_facturacion;
    QPushButton *pushButton_sistema;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_showMenuBar;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuAyuda;
    QMenu *menuVentana;
    QMenu *menuUsuario;
    QMenu *menuVer;
    QMenu *menuPersonas;
    QMenu *menuEmpresas;
    QMenu *menuEditar;

    void setupUi(QMainWindow *ui_main)
    {
        if (ui_main->objectName().isEmpty())
            ui_main->setObjectName(QString::fromUtf8("ui_main"));
        ui_main->resize(848, 671);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_main->sizePolicy().hasHeightForWidth());
        ui_main->setSizePolicy(sizePolicy);
        ui_main->setMinimumSize(QSize(848, 671));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Configure_alt_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_main->setWindowIcon(icon);
        ui_main->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 62);"));
        ui_main->setDocumentMode(false);
        actionAcerca_de_ManagerM = new QAction(ui_main);
        actionAcerca_de_ManagerM->setObjectName(QString::fromUtf8("actionAcerca_de_ManagerM"));
        actionPantalla_Completa = new QAction(ui_main);
        actionPantalla_Completa->setObjectName(QString::fromUtf8("actionPantalla_Completa"));
        actionInicial_Sesion = new QAction(ui_main);
        actionInicial_Sesion->setObjectName(QString::fromUtf8("actionInicial_Sesion"));
        actionCerrar_Sesion = new QAction(ui_main);
        actionCerrar_Sesion->setObjectName(QString::fromUtf8("actionCerrar_Sesion"));
        actionSalir = new QAction(ui_main);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionVentas = new QAction(ui_main);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionCliente = new QAction(ui_main);
        actionCliente->setObjectName(QString::fromUtf8("actionCliente"));
        actionColaborador = new QAction(ui_main);
        actionColaborador->setObjectName(QString::fromUtf8("actionColaborador"));
        actionNuevo = new QAction(ui_main);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionEditar = new QAction(ui_main);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionEliminar = new QAction(ui_main);
        actionEliminar->setObjectName(QString::fromUtf8("actionEliminar"));
        actionEmpresas_2 = new QAction(ui_main);
        actionEmpresas_2->setObjectName(QString::fromUtf8("actionEmpresas_2"));
        actionTiendas = new QAction(ui_main);
        actionTiendas->setObjectName(QString::fromUtf8("actionTiendas"));
        actionUsuarios = new QAction(ui_main);
        actionUsuarios->setObjectName(QString::fromUtf8("actionUsuarios"));
        centralWidget = new QWidget(ui_main);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_4 = new QSpacerItem(15, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 45, 62, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(85, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_usuario = new QLabel(centralWidget);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_usuario->sizePolicy().hasHeightForWidth());
        label_usuario->setSizePolicy(sizePolicy1);
        label_usuario->setMinimumSize(QSize(70, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush4(QColor(0, 170, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_usuario->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_usuario->setFont(font1);

        horizontalLayout->addWidget(label_usuario);

        pushButton_usuario = new QPushButton(centralWidget);
        pushButton_usuario->setObjectName(QString::fromUtf8("pushButton_usuario"));
        sizePolicy.setHeightForWidth(pushButton_usuario->sizePolicy().hasHeightForWidth());
        pushButton_usuario->setSizePolicy(sizePolicy);
        pushButton_usuario->setMinimumSize(QSize(50, 50));
        pushButton_usuario->setMaximumSize(QSize(50, 50));
        pushButton_usuario->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/Personal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_usuario->setIcon(icon1);
        pushButton_usuario->setIconSize(QSize(50, 50));
        pushButton_usuario->setFlat(true);

        horizontalLayout->addWidget(pushButton_usuario);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_compras = new QPushButton(centralWidget);
        pushButton_compras->setObjectName(QString::fromUtf8("pushButton_compras"));
        sizePolicy.setHeightForWidth(pushButton_compras->sizePolicy().hasHeightForWidth());
        pushButton_compras->setSizePolicy(sizePolicy);
        pushButton_compras->setMinimumSize(QSize(150, 150));
        pushButton_compras->setMaximumSize(QSize(150, 150));
        pushButton_compras->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_compras->setMouseTracking(false);
        pushButton_compras->setFocusPolicy(Qt::WheelFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Windows_Marketplace (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_compras->setIcon(icon2);
        pushButton_compras->setIconSize(QSize(150, 150));
        pushButton_compras->setFlat(true);

        gridLayout->addWidget(pushButton_compras, 0, 0, 1, 1);

        pushButton_ventas = new QPushButton(centralWidget);
        pushButton_ventas->setObjectName(QString::fromUtf8("pushButton_ventas"));
        sizePolicy.setHeightForWidth(pushButton_ventas->sizePolicy().hasHeightForWidth());
        pushButton_ventas->setSizePolicy(sizePolicy);
        pushButton_ventas->setMinimumSize(QSize(150, 150));
        pushButton_ventas->setMaximumSize(QSize(150, 150));
        pushButton_ventas->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Iconos/Iconos/Android_Market.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ventas->setIcon(icon3);
        pushButton_ventas->setIconSize(QSize(150, 150));
        pushButton_ventas->setFlat(true);

        gridLayout->addWidget(pushButton_ventas, 0, 1, 1, 1);

        pushButton_articulo = new QPushButton(centralWidget);
        pushButton_articulo->setObjectName(QString::fromUtf8("pushButton_articulo"));
        sizePolicy.setHeightForWidth(pushButton_articulo->sizePolicy().hasHeightForWidth());
        pushButton_articulo->setSizePolicy(sizePolicy);
        pushButton_articulo->setMinimumSize(QSize(150, 150));
        pushButton_articulo->setMaximumSize(QSize(150, 150));
        pushButton_articulo->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_articulo->setIcon(icon4);
        pushButton_articulo->setIconSize(QSize(150, 150));
        pushButton_articulo->setFlat(true);

        gridLayout->addWidget(pushButton_articulo, 1, 0, 1, 1);

        pushButton_colaboradores = new QPushButton(centralWidget);
        pushButton_colaboradores->setObjectName(QString::fromUtf8("pushButton_colaboradores"));
        sizePolicy.setHeightForWidth(pushButton_colaboradores->sizePolicy().hasHeightForWidth());
        pushButton_colaboradores->setSizePolicy(sizePolicy);
        pushButton_colaboradores->setMinimumSize(QSize(150, 150));
        pushButton_colaboradores->setMaximumSize(QSize(150, 150));
        pushButton_colaboradores->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Iconos/Iconos/myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_colaboradores->setIcon(icon5);
        pushButton_colaboradores->setIconSize(QSize(150, 150));
        pushButton_colaboradores->setFlat(true);

        gridLayout->addWidget(pushButton_colaboradores, 1, 1, 1, 1);

        pushButton_facturacion = new QPushButton(centralWidget);
        pushButton_facturacion->setObjectName(QString::fromUtf8("pushButton_facturacion"));
        sizePolicy.setHeightForWidth(pushButton_facturacion->sizePolicy().hasHeightForWidth());
        pushButton_facturacion->setSizePolicy(sizePolicy);
        pushButton_facturacion->setMinimumSize(QSize(150, 150));
        pushButton_facturacion->setMaximumSize(QSize(150, 150));
        pushButton_facturacion->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Iconos/Iconos/Journal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_facturacion->setIcon(icon6);
        pushButton_facturacion->setIconSize(QSize(150, 150));
        pushButton_facturacion->setFlat(true);

        gridLayout->addWidget(pushButton_facturacion, 2, 0, 1, 1);

        pushButton_sistema = new QPushButton(centralWidget);
        pushButton_sistema->setObjectName(QString::fromUtf8("pushButton_sistema"));
        sizePolicy.setHeightForWidth(pushButton_sistema->sizePolicy().hasHeightForWidth());
        pushButton_sistema->setSizePolicy(sizePolicy);
        pushButton_sistema->setMinimumSize(QSize(150, 150));
        pushButton_sistema->setMaximumSize(QSize(150, 150));
        pushButton_sistema->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Iconos/Iconos/Services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sistema->setIcon(icon7);
        pushButton_sistema->setIconSize(QSize(150, 1505));
        pushButton_sistema->setFlat(true);

        gridLayout->addWidget(pushButton_sistema, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(80, 80));
        pushButton_7->setMaximumSize(QSize(80, 80));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Iconos/Iconos/Facebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon8);
        pushButton_7->setIconSize(QSize(80, 80));
        pushButton_7->setAutoDefault(false);
        pushButton_7->setDefault(false);
        pushButton_7->setFlat(true);

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(80, 80));
        pushButton_8->setMaximumSize(QSize(80, 80));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Iconos/Iconos/Twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon9);
        pushButton_8->setIconSize(QSize(80, 80));
        pushButton_8->setAutoDefault(false);
        pushButton_8->setDefault(false);
        pushButton_8->setFlat(true);

        gridLayout_2->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(80, 80));
        pushButton_9->setMaximumSize(QSize(80, 80));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Iconos/Iconos/Gmail.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon10);
        pushButton_9->setIconSize(QSize(80, 80));
        pushButton_9->setAutoDefault(false);
        pushButton_9->setDefault(false);
        pushButton_9->setFlat(true);

        gridLayout_2->addWidget(pushButton_9, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 3, 3, 1, 1);

        pushButton_showMenuBar = new QPushButton(centralWidget);
        pushButton_showMenuBar->setObjectName(QString::fromUtf8("pushButton_showMenuBar"));
        pushButton_showMenuBar->setMaximumSize(QSize(0, 0));
        pushButton_showMenuBar->setStyleSheet(QString::fromUtf8("background-image: url(:/Iconos/Iconos/fondo1.png);"));
        pushButton_showMenuBar->setFlat(false);

        gridLayout_3->addWidget(pushButton_showMenuBar, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(78, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(17, 308, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(15, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 2, 1, 1, 1);

        ui_main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ui_main);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy2);
        menuBar->setMinimumSize(QSize(1000, 0));
        menuBar->setNativeMenuBar(false);
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuVentana = new QMenu(menuBar);
        menuVentana->setObjectName(QString::fromUtf8("menuVentana"));
        menuUsuario = new QMenu(menuBar);
        menuUsuario->setObjectName(QString::fromUtf8("menuUsuario"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        menuUsuario->setPalette(palette2);
        menuUsuario->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(255, 255, 255);"));
        menuVer = new QMenu(menuBar);
        menuVer->setObjectName(QString::fromUtf8("menuVer"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        menuVer->setPalette(palette3);
        menuPersonas = new QMenu(menuVer);
        menuPersonas->setObjectName(QString::fromUtf8("menuPersonas"));
        menuEmpresas = new QMenu(menuVer);
        menuEmpresas->setObjectName(QString::fromUtf8("menuEmpresas"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        ui_main->setMenuBar(menuBar);

        menuBar->addAction(menuUsuario->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuVer->menuAction());
        menuBar->addAction(menuVentana->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuAyuda->addAction(actionAcerca_de_ManagerM);
        menuVentana->addAction(actionPantalla_Completa);
        menuUsuario->addAction(actionCerrar_Sesion);
        menuUsuario->addSeparator();
        menuUsuario->addAction(actionSalir);
        menuVer->addAction(menuPersonas->menuAction());
        menuVer->addAction(menuEmpresas->menuAction());
        menuVer->addAction(actionVentas);
        menuPersonas->addAction(actionCliente);
        menuPersonas->addAction(actionColaborador);
        menuPersonas->addAction(actionUsuarios);
        menuEmpresas->addAction(actionEmpresas_2);
        menuEmpresas->addAction(actionTiendas);
        menuEditar->addAction(actionNuevo);
        menuEditar->addAction(actionEditar);
        menuEditar->addAction(actionEliminar);
        menuEditar->addSeparator();

        retranslateUi(ui_main);

        QMetaObject::connectSlotsByName(ui_main);
    } // setupUi

    void retranslateUi(QMainWindow *ui_main)
    {
        ui_main->setWindowTitle(QApplication::translate("ui_main", "ManagerM", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_ManagerM->setText(QApplication::translate("ui_main", "Acerca de ManagerM...", 0, QApplication::UnicodeUTF8));
        actionPantalla_Completa->setText(QApplication::translate("ui_main", "Pantalla Completa", 0, QApplication::UnicodeUTF8));
        actionPantalla_Completa->setShortcut(QApplication::translate("ui_main", "F11", 0, QApplication::UnicodeUTF8));
        actionInicial_Sesion->setText(QApplication::translate("ui_main", "Inicial Sesion", 0, QApplication::UnicodeUTF8));
        actionCerrar_Sesion->setText(QApplication::translate("ui_main", "Cerrar Sesion", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("ui_main", "Salir", 0, QApplication::UnicodeUTF8));
        actionSalir->setShortcut(QApplication::translate("ui_main", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("ui_main", "Ventas", 0, QApplication::UnicodeUTF8));
        actionCliente->setText(QApplication::translate("ui_main", "Cliente", 0, QApplication::UnicodeUTF8));
        actionColaborador->setText(QApplication::translate("ui_main", "Colaborador", 0, QApplication::UnicodeUTF8));
        actionColaborador->setShortcut(QApplication::translate("ui_main", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("ui_main", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("ui_main", "Editar", 0, QApplication::UnicodeUTF8));
        actionEliminar->setText(QApplication::translate("ui_main", "Eliminar", 0, QApplication::UnicodeUTF8));
        actionEmpresas_2->setText(QApplication::translate("ui_main", "Empresas", 0, QApplication::UnicodeUTF8));
        actionTiendas->setText(QApplication::translate("ui_main", "Tiendas", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setText(QApplication::translate("ui_main", "Usuarios", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_main", "Inicio", 0, QApplication::UnicodeUTF8));
        label_usuario->setText(QApplication::translate("ui_main", "user", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_usuario->setToolTip(QApplication::translate("ui_main", "Usuario", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_usuario->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_compras->setToolTip(QApplication::translate("ui_main", "Compras", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_compras->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_compras->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_compras->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_compras->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_ventas->setToolTip(QApplication::translate("ui_main", "Ventas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_ventas->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_articulo->setToolTip(QApplication::translate("ui_main", "Articulos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_articulo->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_colaboradores->setToolTip(QApplication::translate("ui_main", "Colaboradores", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_colaboradores->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_facturacion->setToolTip(QApplication::translate("ui_main", "Facturacion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_facturacion->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_sistema->setToolTip(QApplication::translate("ui_main", "Ajustes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_sistema->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_showMenuBar->setText(QString());
        pushButton_showMenuBar->setShortcut(QApplication::translate("ui_main", "Alt+M", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("ui_main", "Ayuda", 0, QApplication::UnicodeUTF8));
        menuVentana->setTitle(QApplication::translate("ui_main", "Ventana", 0, QApplication::UnicodeUTF8));
        menuUsuario->setTitle(QApplication::translate("ui_main", "Usuario", 0, QApplication::UnicodeUTF8));
        menuVer->setTitle(QApplication::translate("ui_main", "Ver", 0, QApplication::UnicodeUTF8));
        menuPersonas->setTitle(QApplication::translate("ui_main", "Personas", 0, QApplication::UnicodeUTF8));
        menuEmpresas->setTitle(QApplication::translate("ui_main", "Empresas", 0, QApplication::UnicodeUTF8));
        menuEditar->setTitle(QApplication::translate("ui_main", "Editar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_main: public Ui_ui_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAIN_H
