#ifndef UI_NEW_PROVEEDOR_H
#define UI_NEW_PROVEEDOR_H

#include <QWidget>
#include "share_include.h"
#include <QMessageBox>
namespace Ui {
class ui_new_proveedor;
}

class ui_new_proveedor : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_proveedor(QWidget *parent = 0);
    ~ui_new_proveedor();
    
    void setType(int);
    void setUiModuleCompras(ui_module_compras*);

private slots:
    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();    

private:
    Ui::ui_new_proveedor *ui;

    ui_module_compras* module_compras;
};

#endif // UI_NEW_PROVEEDOR_H