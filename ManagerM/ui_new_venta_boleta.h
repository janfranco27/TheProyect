#ifndef UI_NEW_VENTA_BOLETA_H
#define UI_NEW_VENTA_BOLETA_H

#include <QWidget>

namespace Ui {
class ui_new_venta_boleta;
}

class ui_new_venta_boleta : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_boleta(QWidget *parent = 0);
    ~ui_new_venta_boleta();
    
private:
    Ui::ui_new_venta_boleta *ui;
};

#endif // UI_NEW_VENTA_BOLETA_H
