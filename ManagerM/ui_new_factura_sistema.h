#ifndef UI_NEW_FACTURA_SISTEMA_H
#define UI_NEW_FACTURA_SISTEMA_H

#include <QWidget>

namespace Ui {
class ui_new_factura_sistema;
}

class ui_new_factura_sistema : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_factura_sistema(QWidget *parent = 0);
    ~ui_new_factura_sistema();
    
private:
    Ui::ui_new_factura_sistema *ui;
};

#endif // UI_NEW_FACTURA_SISTEMA_H
