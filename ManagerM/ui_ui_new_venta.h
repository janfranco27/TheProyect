/********************************************************************************
** Form generated from reading UI file 'ui_new_venta.ui'
**
<<<<<<< HEAD
** Created: Sun 5. May 01:02:02 2013
=======
** Created: Sat 27. Apr 21:06:38 2013
>>>>>>> Commit
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
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_new_venta
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *lineEdit_total;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_atras;
    QPushButton *pushButton_siguiente;
    QFrame *line;
    QStackedWidget *stackedWidget_ventas;
    QWidget *page;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QLabel *label;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_nombre;
    QLineEdit *le_nombre;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *l_marca;
    QLineEdit *le_marca;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *l_medida;
    QLineEdit *le_medida;
    QTableView *tableView_articulos_1;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_down;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_up;
    QTableWidget *tableWidget_articulos_1;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QSplitter *splitter_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *cb_tipo_comprobante;
    QSpacerItem *horizontalSpacer_7;
    QSplitter *splitter_2;
    QLabel *label_5;
    QTableWidget *tableWidget_articulos_2;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;
    QFrame *line_4;
    QTableView *tableView_articulos3;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_serie;
    QLabel *label_7;
    QLineEdit *lineEdit_numero;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QDateEdit *dateEdit_fecha_emision;
    QWidget *widget_venta;

    void setupUi(QWidget *ui_new_venta)
    {
        if (ui_new_venta->objectName().isEmpty())
            ui_new_venta->setObjectName(QString::fromUtf8("ui_new_venta"));
        ui_new_venta->resize(808, 527);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Iconos/Iconos/Stack.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_new_venta->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(ui_new_venta);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_4 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(ui_new_venta);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_11);

        lineEdit_total = new QLineEdit(ui_new_venta);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_total->sizePolicy().hasHeightForWidth());
        lineEdit_total->setSizePolicy(sizePolicy1);
        lineEdit_total->setMinimumSize(QSize(100, 0));
        lineEdit_total->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(lineEdit_total);


        horizontalLayout_12->addLayout(horizontalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_atras = new QPushButton(ui_new_venta);
        pushButton_atras->setObjectName(QString::fromUtf8("pushButton_atras"));

        horizontalLayout_9->addWidget(pushButton_atras);

        pushButton_siguiente = new QPushButton(ui_new_venta);
        pushButton_siguiente->setObjectName(QString::fromUtf8("pushButton_siguiente"));

        horizontalLayout_9->addWidget(pushButton_siguiente);


        horizontalLayout_11->addLayout(horizontalLayout_9);


        gridLayout_2->addLayout(horizontalLayout_11, 3, 0, 1, 1);

        line = new QFrame(ui_new_venta);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        stackedWidget_ventas = new QStackedWidget(ui_new_venta);
        stackedWidget_ventas->setObjectName(QString::fromUtf8("stackedWidget_ventas"));
        stackedWidget_ventas->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(page);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        splitter->addWidget(label);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_nombre = new QLabel(page);
        l_nombre->setObjectName(QString::fromUtf8("l_nombre"));
        l_nombre->setMinimumSize(QSize(50, 0));
        l_nombre->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(l_nombre);

        le_nombre = new QLineEdit(page);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));
        le_nombre->setMinimumSize(QSize(200, 0));
        le_nombre->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_4->addWidget(le_nombre);


        horizontalLayout_10->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        l_marca = new QLabel(page);
        l_marca->setObjectName(QString::fromUtf8("l_marca"));
        l_marca->setMinimumSize(QSize(50, 0));
        l_marca->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(l_marca);

        le_marca = new QLineEdit(page);
        le_marca->setObjectName(QString::fromUtf8("le_marca"));

        horizontalLayout_5->addWidget(le_marca);


        horizontalLayout_10->addLayout(horizontalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        l_medida = new QLabel(page);
        l_medida->setObjectName(QString::fromUtf8("l_medida"));
        l_medida->setMinimumSize(QSize(50, 0));
        l_medida->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(l_medida);

        le_medida = new QLineEdit(page);
        le_medida->setObjectName(QString::fromUtf8("le_medida"));

        horizontalLayout_7->addWidget(le_medida);


        horizontalLayout_10->addLayout(horizontalLayout_7);


        gridLayout->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        tableView_articulos_1 = new QTableView(page);
        tableView_articulos_1->setObjectName(QString::fromUtf8("tableView_articulos_1"));
        tableView_articulos_1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_articulos_1->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableView_articulos_1, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_down = new QPushButton(page);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_br_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon1);
        pushButton_down->setIconSize(QSize(20, 20));
        pushButton_down->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_down);

        horizontalSpacer = new QSpacerItem(648, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_up = new QPushButton(page);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Iconos/Iconos/sq_br_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon2);
        pushButton_up->setIconSize(QSize(20, 20));
        pushButton_up->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_up);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        tableWidget_articulos_1 = new QTableWidget(page);
        tableWidget_articulos_1->setObjectName(QString::fromUtf8("tableWidget_articulos_1"));

        gridLayout->addWidget(tableWidget_articulos_1, 6, 0, 1, 1);

        line_3 = new QFrame(page);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 2, 0, 1, 1);

        stackedWidget_ventas->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        splitter_3 = new QSplitter(page_2);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        sizePolicy2.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy2);
        splitter_3->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font);
        splitter_3->addWidget(label_2);

        gridLayout_5->addWidget(splitter_3, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(110, 0));
        label_4->setMaximumSize(QSize(110, 16777215));

        horizontalLayout->addWidget(label_4);

        cb_tipo_comprobante = new QComboBox(page_2);
        cb_tipo_comprobante->setObjectName(QString::fromUtf8("cb_tipo_comprobante"));
        cb_tipo_comprobante->setMinimumSize(QSize(100, 0));
        cb_tipo_comprobante->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(cb_tipo_comprobante);


        horizontalLayout_13->addLayout(horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);


        gridLayout_5->addLayout(horizontalLayout_13, 4, 0, 1, 1);

        splitter_2 = new QSplitter(page_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_2->addWidget(label_5);
        tableWidget_articulos_2 = new QTableWidget(splitter_2);
        tableWidget_articulos_2->setObjectName(QString::fromUtf8("tableWidget_articulos_2"));
        splitter_2->addWidget(tableWidget_articulos_2);

        gridLayout_5->addWidget(splitter_2, 5, 0, 1, 1);

        line_2 = new QFrame(page_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_4, 3, 0, 1, 1);

        stackedWidget_ventas->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        line_4 = new QFrame(page_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 29, 729, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tableView_articulos3 = new QTableView(page_3);
        tableView_articulos3->setObjectName(QString::fromUtf8("tableView_articulos3"));
        tableView_articulos3->setGeometry(QRect(10, 203, 731, 241));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 170, 16));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font);
        widget = new QWidget(page_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 57, 731, 141));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_serie = new QLineEdit(widget);
        lineEdit_serie->setObjectName(QString::fromUtf8("lineEdit_serie"));
        lineEdit_serie->setMinimumSize(QSize(100, 0));
        lineEdit_serie->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit_serie);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_numero = new QLineEdit(widget);
        lineEdit_numero->setObjectName(QString::fromUtf8("lineEdit_numero"));
        lineEdit_numero->setMinimumSize(QSize(100, 0));
        lineEdit_numero->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit_numero);


        horizontalLayout_14->addLayout(horizontalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(label_8);

        dateEdit_fecha_emision = new QDateEdit(widget);
        dateEdit_fecha_emision->setObjectName(QString::fromUtf8("dateEdit_fecha_emision"));
        dateEdit_fecha_emision->setMinimumSize(QSize(100, 0));
        dateEdit_fecha_emision->setMaximumSize(QSize(100, 16777215));
        dateEdit_fecha_emision->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateEdit_fecha_emision);


        horizontalLayout_14->addLayout(horizontalLayout_3);


        gridLayout_6->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        widget_venta = new QWidget(widget);
        widget_venta->setObjectName(QString::fromUtf8("widget_venta"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_venta->sizePolicy().hasHeightForWidth());
        widget_venta->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(widget_venta, 1, 0, 1, 1);

        stackedWidget_ventas->addWidget(page_3);

        gridLayout_3->addWidget(stackedWidget_ventas, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nombre, cb_marca);
        QWidget::setTabOrder(cb_marca, cb_medida);
        QWidget::setTabOrder(cb_medida, tableView_articulos_1);
        QWidget::setTabOrder(tableView_articulos_1, pushButton_down);
        QWidget::setTabOrder(pushButton_down, pushButton_up);
        QWidget::setTabOrder(pushButton_up, tableWidget_articulos_1);
        QWidget::setTabOrder(tableWidget_articulos_1, lineEdit_total);
        QWidget::setTabOrder(lineEdit_total, pushButton_atras);
        QWidget::setTabOrder(pushButton_atras, pushButton_siguiente);
        QWidget::setTabOrder(pushButton_siguiente, cb_tipo_comprobante);
        QWidget::setTabOrder(cb_tipo_comprobante, tableWidget_articulos_2);
        QWidget::setTabOrder(tableWidget_articulos_2, lineEdit_serie);
        QWidget::setTabOrder(lineEdit_serie, lineEdit_numero);
        QWidget::setTabOrder(lineEdit_numero, dateEdit_fecha_emision);
        QWidget::setTabOrder(dateEdit_fecha_emision, tableView_articulos3);

        retranslateUi(ui_new_venta);

        stackedWidget_ventas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_new_venta);
    } // setupUi

    void retranslateUi(QWidget *ui_new_venta)
    {
        ui_new_venta->setWindowTitle(QApplication::translate("ui_new_venta", "Ventas", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_new_venta", "Total", 0, QApplication::UnicodeUTF8));
        pushButton_atras->setText(QApplication::translate("ui_new_venta", "<<Atras", 0, QApplication::UnicodeUTF8));
        pushButton_siguiente->setText(QApplication::translate("ui_new_venta", "Siguiente>>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_new_venta", "Agregue art\303\255culos a la venta", 0, QApplication::UnicodeUTF8));
        l_nombre->setText(QApplication::translate("ui_new_venta", "Nombre", 0, QApplication::UnicodeUTF8));
        l_marca->setText(QApplication::translate("ui_new_venta", "Marca", 0, QApplication::UnicodeUTF8));
        l_medida->setText(QApplication::translate("ui_new_venta", "Medida", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QString());
        pushButton_up->setText(QString());
        label_2->setText(QApplication::translate("ui_new_venta", "Seleccione tipo de comprobante", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_new_venta", "Tipo de comprobante", 0, QApplication::UnicodeUTF8));
        cb_tipo_comprobante->clear();
        cb_tipo_comprobante->insertItems(0, QStringList()
         << QApplication::translate("ui_new_venta", "Boleta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_venta", "Factura", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_venta", "Proforma", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_new_venta", "Cotizaci\303\263n", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("ui_new_venta", "Articulos seleccionados:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_new_venta", "Complete los datos para la venta", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_new_venta", "Serie - N\303\272mero", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_new_venta", "-", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_new_venta", "Fecha Emisi\303\263n", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_new_venta: public Ui_ui_new_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_VENTA_H
