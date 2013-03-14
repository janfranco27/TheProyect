/********************************************************************************
** Form generated from reading UI file 'ui_home.ui'
**
** Created: Mon 11. Mar 21:02:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_HOME_H
#define UI_UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_home
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *ui_home)
    {
        if (ui_home->objectName().isEmpty())
            ui_home->setObjectName(QString::fromUtf8("ui_home"));
        ui_home->resize(174, 70);
        ui_home->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        gridLayout = new QGridLayout(ui_home);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(ui_home);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(ui_home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(ui_home);

        QMetaObject::connectSlotsByName(ui_home);
    } // setupUi

    void retranslateUi(QWidget *ui_home)
    {
        ui_home->setWindowTitle(QApplication::translate("ui_home", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_home", "asdasd", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_home", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_home: public Ui_ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_HOME_H
