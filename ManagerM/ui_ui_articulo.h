/********************************************************************************
** Form generated from reading UI file 'ui_articulo.ui'
**
** Created: Mon 11. Mar 20:55:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ARTICULO_H
#define UI_UI_ARTICULO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_articulo
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *titulo;
    QTabWidget *tabWidget;
    QWidget *ar_busqueda;
    QGridLayout *gridLayout_3;
    QLabel *info;
    QWidget *ar_registro;
    QGridLayout *gridLayout_4;
    QLabel *info_2;
    QSplitter *splitter_5;
    QSplitter *splitter_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_codigo;
    QLineEdit *le_codigo;
    QLabel *l_codigoop;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *l_nombre;
    QLineEdit *le_nombre;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *l_grupo;
    QLineEdit *le_grupo;
    QSplitter *splitter_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *l_stock;
    QLineEdit *le_stock;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_marca;
    QLineEdit *le_marca;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *l_medida;
    QLineEdit *le_medida;
    QSplitter *splitter_4;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_precio;
    QLineEdit *le_precio;
    QFrame *line;
    QHBoxLayout *horizontalLayout_9;
    QLabel *l_resultado;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_borrar;
    QPushButton *btn_aceptar;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_registrar;

    void setupUi(QWidget *ui_articulo)
    {
        if (ui_articulo->objectName().isEmpty())
            ui_articulo->setObjectName(QString::fromUtf8("ui_articulo"));
        ui_articulo->resize(965, 557);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Tune-Up_Utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_articulo->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(ui_articulo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        titulo = new QLabel(ui_articulo);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        titulo->setFont(font);

        gridLayout->addWidget(titulo, 0, 0, 1, 1);

        tabWidget = new QTabWidget(ui_articulo);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        ar_busqueda = new QWidget();
        ar_busqueda->setObjectName(QString::fromUtf8("ar_busqueda"));
        gridLayout_3 = new QGridLayout(ar_busqueda);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        info = new QLabel(ar_busqueda);
        info->setObjectName(QString::fromUtf8("info"));
        QFont font1;
        font1.setPointSize(9);
        info->setFont(font1);
        info->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(info, 0, 0, 1, 1);

        tabWidget->addTab(ar_busqueda, QString());
        ar_registro = new QWidget();
        ar_registro->setObjectName(QString::fromUtf8("ar_registro"));
        gridLayout_4 = new QGridLayout(ar_registro);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        info_2 = new QLabel(ar_registro);
        info_2->setObjectName(QString::fromUtf8("info_2"));
        info_2->setFont(font1);
        info_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(info_2, 0, 0, 1, 1);

        tabWidget->addTab(ar_registro, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        splitter_5 = new QSplitter(ui_articulo);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        l_codigo = new QLabel(widget);
        l_codigo->setObjectName(QString::fromUtf8("l_codigo"));
        l_codigo->setMinimumSize(QSize(100, 0));
        l_codigo->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(l_codigo);

        le_codigo = new QLineEdit(widget);
        le_codigo->setObjectName(QString::fromUtf8("le_codigo"));
        le_codigo->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(le_codigo);

        l_codigoop = new QLabel(widget);
        l_codigoop->setObjectName(QString::fromUtf8("l_codigoop"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_codigoop->sizePolicy().hasHeightForWidth());
        l_codigoop->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(l_codigoop);

        splitter_2->addWidget(widget);
        widget1 = new QWidget(splitter_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        l_nombre = new QLabel(widget1);
        l_nombre->setObjectName(QString::fromUtf8("l_nombre"));
        l_nombre->setMinimumSize(QSize(100, 0));
        l_nombre->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(l_nombre);

        le_nombre = new QLineEdit(widget1);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));
        le_nombre->setMinimumSize(QSize(200, 0));

        horizontalLayout_5->addWidget(le_nombre);

        splitter_2->addWidget(widget1);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        l_grupo = new QLabel(widget2);
        l_grupo->setObjectName(QString::fromUtf8("l_grupo"));
        l_grupo->setMinimumSize(QSize(100, 0));
        l_grupo->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(l_grupo);

        le_grupo = new QLineEdit(widget2);
        le_grupo->setObjectName(QString::fromUtf8("le_grupo"));
        le_grupo->setMinimumSize(QSize(200, 0));

        horizontalLayout_7->addWidget(le_grupo);

        splitter_2->addWidget(widget2);
        splitter_5->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_5);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        widget3 = new QWidget(splitter_3);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        horizontalLayout_8 = new QHBoxLayout(widget3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        l_stock = new QLabel(widget3);
        l_stock->setObjectName(QString::fromUtf8("l_stock"));
        l_stock->setMinimumSize(QSize(100, 0));
        l_stock->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(l_stock);

        le_stock = new QLineEdit(widget3);
        le_stock->setObjectName(QString::fromUtf8("le_stock"));
        le_stock->setMinimumSize(QSize(200, 0));

        horizontalLayout_8->addWidget(le_stock);

        splitter_3->addWidget(widget3);
        widget4 = new QWidget(splitter_3);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        horizontalLayout_3 = new QHBoxLayout(widget4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        l_marca = new QLabel(widget4);
        l_marca->setObjectName(QString::fromUtf8("l_marca"));
        l_marca->setMinimumSize(QSize(100, 0));
        l_marca->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(l_marca);

        le_marca = new QLineEdit(widget4);
        le_marca->setObjectName(QString::fromUtf8("le_marca"));
        le_marca->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(le_marca);

        splitter_3->addWidget(widget4);
        widget5 = new QWidget(splitter_3);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        l_medida = new QLabel(widget5);
        l_medida->setObjectName(QString::fromUtf8("l_medida"));
        l_medida->setMinimumSize(QSize(100, 0));
        l_medida->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(l_medida);

        le_medida = new QLineEdit(widget5);
        le_medida->setObjectName(QString::fromUtf8("le_medida"));
        le_medida->setMinimumSize(QSize(200, 0));

        horizontalLayout_6->addWidget(le_medida);

        splitter_3->addWidget(widget5);
        splitter_5->addWidget(splitter_3);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        widget6 = new QWidget(splitter_4);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        horizontalLayout_4 = new QHBoxLayout(widget6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        l_precio = new QLabel(widget6);
        l_precio->setObjectName(QString::fromUtf8("l_precio"));
        l_precio->setMinimumSize(QSize(100, 0));
        l_precio->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(l_precio);

        le_precio = new QLineEdit(widget6);
        le_precio->setObjectName(QString::fromUtf8("le_precio"));
        le_precio->setMinimumSize(QSize(200, 0));

        horizontalLayout_4->addWidget(le_precio);

        splitter_4->addWidget(widget6);
        splitter_5->addWidget(splitter_4);

        gridLayout->addWidget(splitter_5, 2, 0, 1, 1);

        line = new QFrame(ui_articulo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        l_resultado = new QLabel(ui_articulo);
        l_resultado->setObjectName(QString::fromUtf8("l_resultado"));

        horizontalLayout_9->addWidget(l_resultado);

        horizontalSpacer_2 = new QSpacerItem(323, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        btn_borrar = new QPushButton(ui_articulo);
        btn_borrar->setObjectName(QString::fromUtf8("btn_borrar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_borrar->setIcon(icon1);

        horizontalLayout_9->addWidget(btn_borrar);

        btn_aceptar = new QPushButton(ui_articulo);
        btn_aceptar->setObjectName(QString::fromUtf8("btn_aceptar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_aceptar->setIcon(icon2);

        horizontalLayout_9->addWidget(btn_aceptar);


        gridLayout->addLayout(horizontalLayout_9, 4, 0, 1, 1);

        splitter = new QSplitter(ui_articulo);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter->addWidget(tableWidget);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);

        gridLayout->addWidget(splitter, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_registrar = new QPushButton(ui_articulo);
        btn_registrar->setObjectName(QString::fromUtf8("btn_registrar"));

        horizontalLayout->addWidget(btn_registrar);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, le_nombre);
        QWidget::setTabOrder(le_nombre, le_grupo);
        QWidget::setTabOrder(le_grupo, le_marca);
        QWidget::setTabOrder(le_marca, le_medida);
        QWidget::setTabOrder(le_medida, le_stock);
        QWidget::setTabOrder(le_stock, le_precio);
        QWidget::setTabOrder(le_precio, btn_aceptar);
        QWidget::setTabOrder(btn_aceptar, btn_borrar);
        QWidget::setTabOrder(btn_borrar, tableView);

        retranslateUi(ui_articulo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_articulo);
    } // setupUi

    void retranslateUi(QWidget *ui_articulo)
    {
        ui_articulo->setWindowTitle(QApplication::translate("ui_articulo", "Articulos", 0, QApplication::UnicodeUTF8));
        titulo->setText(QApplication::translate("ui_articulo", "Articulos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("ui_articulo", "adasdadsasd", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        info->setText(QApplication::translate("ui_articulo", "Ingrese los campos por los que desea filtrar la b\303\272squeda y seleccione \"Buscar\"", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ar_busqueda), QApplication::translate("ui_articulo", "Busqueda", 0, QApplication::UnicodeUTF8));
        info_2->setText(QApplication::translate("ui_articulo", "Ingrese los campos del nuevo art\303\255culo y presione  \"Agregar\", para agregarlo a la lista.\n"
" Una vez que haya terminado presione \"Registrar\" para confirmar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(ar_registro), QApplication::translate("ui_articulo", "Registro", 0, QApplication::UnicodeUTF8));
        l_codigo->setText(QApplication::translate("ui_articulo", "C\303\263digo:", 0, QApplication::UnicodeUTF8));
        l_codigoop->setText(QString());
        l_nombre->setText(QApplication::translate("ui_articulo", "Nombre:", 0, QApplication::UnicodeUTF8));
        l_grupo->setText(QApplication::translate("ui_articulo", "Grupo:", 0, QApplication::UnicodeUTF8));
        l_stock->setText(QApplication::translate("ui_articulo", "Stock:", 0, QApplication::UnicodeUTF8));
        l_marca->setText(QApplication::translate("ui_articulo", "Marca:", 0, QApplication::UnicodeUTF8));
        l_medida->setText(QApplication::translate("ui_articulo", "Medida:", 0, QApplication::UnicodeUTF8));
        l_precio->setText(QApplication::translate("ui_articulo", "Precio:  S/.", 0, QApplication::UnicodeUTF8));
        l_resultado->setText(QApplication::translate("ui_articulo", "Art\303\255culos encontrados :", 0, QApplication::UnicodeUTF8));
        btn_borrar->setText(QApplication::translate("ui_articulo", "Borrar", 0, QApplication::UnicodeUTF8));
        btn_aceptar->setText(QApplication::translate("ui_articulo", "Buscar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_articulo", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_articulo", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_articulo", "Grupo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_articulo", "Marca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_articulo", "Medida", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_articulo", "Stock", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ui_articulo", "Precio", 0, QApplication::UnicodeUTF8));
        btn_registrar->setText(QApplication::translate("ui_articulo", "Registrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_articulo: public Ui_ui_articulo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ARTICULO_H
