#ifndef UI_NEW_VENTA_COTIZACION_H
#define UI_NEW_VENTA_COTIZACION_H

#include <QWidget>

namespace Ui {
class ui_new_venta_cotizacion;
}

class ui_new_venta_cotizacion : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_cotizacion(QWidget *parent = 0);
    ~ui_new_venta_cotizacion();
    
private:
    Ui::ui_new_venta_cotizacion *ui;
};

#endif // UI_NEW_VENTA_COTIZACION_H
