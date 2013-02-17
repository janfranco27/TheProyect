/********************************************************************************
** Form generated from reading UI file 'ui_main.ui'
**
** Created: Sun 17. Feb 13:43:43 2013
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
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
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
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_usuario;
    QPushButton *pushButton_user;
    QGridLayout *gridLayout;
    QPushButton *pushButton_ventas;
    QPushButton *pushButton_;
    QPushButton *pushButton_colaboradores;
    QPushButton *pushButton_5;
    QPushButton *pushButton_sistema;
    QPushButton *pushButton_compras;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menuBar;
    QMenu *menuAyuda;
    QMenu *menuVentana;
    QMenu *menuUsuario;
    QMenu *menuVer;
    QMenu *menuPersonas;
    QMenu *menuEmpresas;
    QMenu *menuEditar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ui_main)
    {
        if (ui_main->objectName().isEmpty())
            ui_main->setObjectName(QString::fromUtf8("ui_main"));
        ui_main->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ui_main->sizePolicy().hasHeightForWidth());
        ui_main->setSizePolicy(sizePolicy);
        ui_main->setMinimumSize(QSize(800, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconos/main_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_main->setWindowIcon(icon);
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
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tunga"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_usuario = new QLabel(centralWidget);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tunga"));
        font1.setPointSize(16);
        label_usuario->setFont(font1);

        horizontalLayout->addWidget(label_usuario);

        pushButton_user = new QPushButton(centralWidget);
        pushButton_user->setObjectName(QString::fromUtf8("pushButton_user"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconos/1361145248_User_No-Frame.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_user->setIcon(icon1);
        pushButton_user->setIconSize(QSize(40, 40));
        pushButton_user->setFlat(true);

        horizontalLayout->addWidget(pushButton_user);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_ventas = new QPushButton(centralWidget);
        pushButton_ventas->setObjectName(QString::fromUtf8("pushButton_ventas"));
        sizePolicy.setHeightForWidth(pushButton_ventas->sizePolicy().hasHeightForWidth());
        pushButton_ventas->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconos/1361145244_My_Apps.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ventas->setIcon(icon2);
        pushButton_ventas->setIconSize(QSize(200, 200));
        pushButton_ventas->setFlat(true);

        gridLayout->addWidget(pushButton_ventas, 0, 1, 1, 1);

        pushButton_ = new QPushButton(centralWidget);
        pushButton_->setObjectName(QString::fromUtf8("pushButton_"));
        sizePolicy.setHeightForWidth(pushButton_->sizePolicy().hasHeightForWidth());
        pushButton_->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconos/1361145253_Pin.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_->setIcon(icon3);
        pushButton_->setIconSize(QSize(200, 200));
        pushButton_->setFlat(true);

        gridLayout->addWidget(pushButton_, 1, 0, 1, 1);

        pushButton_colaboradores = new QPushButton(centralWidget);
        pushButton_colaboradores->setObjectName(QString::fromUtf8("pushButton_colaboradores"));
        sizePolicy.setHeightForWidth(pushButton_colaboradores->sizePolicy().hasHeightForWidth());
        pushButton_colaboradores->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconos/1361145249_myspace_alt.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_colaboradores->setIcon(icon4);
        pushButton_colaboradores->setIconSize(QSize(200, 200));
        pushButton_colaboradores->setFlat(true);

        gridLayout->addWidget(pushButton_colaboradores, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconos/1361145251_Ease_of_Access.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(200, 200));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_sistema = new QPushButton(centralWidget);
        pushButton_sistema->setObjectName(QString::fromUtf8("pushButton_sistema"));
        sizePolicy.setHeightForWidth(pushButton_sistema->sizePolicy().hasHeightForWidth());
        pushButton_sistema->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iconos/1361145252_Configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sistema->setIcon(icon6);
        pushButton_sistema->setIconSize(QSize(200, 200));
        pushButton_sistema->setFlat(true);

        gridLayout->addWidget(pushButton_sistema, 2, 1, 1, 1);

        pushButton_compras = new QPushButton(centralWidget);
        pushButton_compras->setObjectName(QString::fromUtf8("pushButton_compras"));
        sizePolicy.setHeightForWidth(pushButton_compras->sizePolicy().hasHeightForWidth());
        pushButton_compras->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iconos/1361145254_Security_Approved.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_compras->setIcon(icon7);
        pushButton_compras->setIconSize(QSize(200, 200));
        pushButton_compras->setFlat(true);

        gridLayout->addWidget(pushButton_compras, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 229, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_9, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 1, 1, 1);

        ui_main->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ui_main);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        menuVentana = new QMenu(menuBar);
        menuVentana->setObjectName(QString::fromUtf8("menuVentana"));
        menuUsuario = new QMenu(menuBar);
        menuUsuario->setObjectName(QString::fromUtf8("menuUsuario"));
        menuVer = new QMenu(menuBar);
        menuVer->setObjectName(QString::fromUtf8("menuVer"));
        menuPersonas = new QMenu(menuVer);
        menuPersonas->setObjectName(QString::fromUtf8("menuPersonas"));
        menuEmpresas = new QMenu(menuVer);
        menuEmpresas->setObjectName(QString::fromUtf8("menuEmpresas"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        ui_main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ui_main);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ui_main->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ui_main);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ui_main->setStatusBar(statusBar);

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
        actionInicial_Sesion->setText(QApplication::translate("ui_main", "Inicial Sesion", 0, QApplication::UnicodeUTF8));
        actionCerrar_Sesion->setText(QApplication::translate("ui_main", "Cerrar Sesion", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("ui_main", "Salir", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("ui_main", "Ventas", 0, QApplication::UnicodeUTF8));
        actionCliente->setText(QApplication::translate("ui_main", "Cliente", 0, QApplication::UnicodeUTF8));
        actionColaborador->setText(QApplication::translate("ui_main", "Colaborador", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("ui_main", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("ui_main", "Editar", 0, QApplication::UnicodeUTF8));
        actionEliminar->setText(QApplication::translate("ui_main", "Eliminar", 0, QApplication::UnicodeUTF8));
        actionEmpresas_2->setText(QApplication::translate("ui_main", "Empresas", 0, QApplication::UnicodeUTF8));
        actionTiendas->setText(QApplication::translate("ui_main", "Tiendas", 0, QApplication::UnicodeUTF8));
        actionUsuarios->setText(QApplication::translate("ui_main", "Usuarios", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_main", "Inicio", 0, QApplication::UnicodeUTF8));
        label_usuario->setText(QApplication::translate("ui_main", "user", 0, QApplication::UnicodeUTF8));
        pushButton_user->setText(QString());
        pushButton_ventas->setText(QString());
        pushButton_->setText(QString());
        pushButton_colaboradores->setText(QString());
        pushButton_5->setText(QString());
        pushButton_sistema->setText(QString());
        pushButton_compras->setText(QString());
        pushButton_7->setText(QApplication::translate("ui_main", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ui_main", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("ui_main", "PushButton", 0, QApplication::UnicodeUTF8));
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
