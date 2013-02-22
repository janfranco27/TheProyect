/********************************************************************************
** Form generated from reading UI file 'ui_dialog_opciones.ui'
**
** Created: Thu 21. Feb 16:01:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DIALOG_OPCIONES_H
#define UI_UI_DIALOG_OPCIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ui_dialog_opciones
{
public:

    void setupUi(QDialog *ui_dialog_opciones)
    {
        if (ui_dialog_opciones->objectName().isEmpty())
            ui_dialog_opciones->setObjectName(QString::fromUtf8("ui_dialog_opciones"));
        ui_dialog_opciones->setWindowModality(Qt::ApplicationModal);
        ui_dialog_opciones->resize(400, 300);
        ui_dialog_opciones->setModal(false);

        retranslateUi(ui_dialog_opciones);

        QMetaObject::connectSlotsByName(ui_dialog_opciones);
    } // setupUi

    void retranslateUi(QDialog *ui_dialog_opciones)
    {
        ui_dialog_opciones->setWindowTitle(QApplication::translate("ui_dialog_opciones", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_dialog_opciones: public Ui_ui_dialog_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DIALOG_OPCIONES_H
