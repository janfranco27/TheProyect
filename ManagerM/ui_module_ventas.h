#ifndef UI_MODULE_VENTAS_H
#define UI_MODULE_VENTAS_H

#include <QWidget>

namespace Ui {
class ui_module_ventas;
}

class ui_module_ventas : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_ventas(QWidget *parent = 0);
    ~ui_module_ventas();
    
private:
    Ui::ui_module_ventas *ui;
};

#endif // UI_MODULE_VENTAS_H
