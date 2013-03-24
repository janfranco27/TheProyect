#ifndef UI_NEW_VENTA_FACTURA_H
#define UI_NEW_VENTA_FACTURA_H

#include <QWidget>

namespace Ui {
class ui_new_venta_factura;
}

class ui_new_venta_factura : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_factura(QWidget *parent = 0);
    ~ui_new_venta_factura();
    
private:
    Ui::ui_new_venta_factura *ui;
};

#endif // UI_NEW_VENTA_FACTURA_H
