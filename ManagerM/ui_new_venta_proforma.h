#ifndef UI_NEW_VENTA_PROFORMA_H
#define UI_NEW_VENTA_PROFORMA_H

#include <QWidget>
#include "share_include.h"
namespace Ui {
class ui_new_venta_proforma;
}

class ui_new_venta_proforma : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_proforma(QWidget *parent = 0);
    ~ui_new_venta_proforma();
    
private:
    Ui::ui_new_venta_proforma *ui;
};

#endif // UI_NEW_VENTA_PROFORMA_H
