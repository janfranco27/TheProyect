#ifndef UI_EDIT_PROVEEDOR_H
#define UI_EDIT_PROVEEDOR_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_edit_proveedor;
}

class ui_edit_proveedor : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_edit_proveedor(QWidget *parent = 0);
    ~ui_edit_proveedor();
    
private slots:
    void on_pushButton_aceptar_clicked();

private:
    Ui::ui_edit_proveedor *ui;
};

#endif // UI_EDIT_PROVEEDOR_H
