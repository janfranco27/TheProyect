#ifndef UI_OPCIONES_BASE_DATOS_H
#define UI_OPCIONES_BASE_DATOS_H

#include <QTabWidget>

namespace Ui {
class ui_opciones_base_datos;
}

class ui_opciones_base_datos : public QTabWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_base_datos(QWidget *parent = 0);
    ~ui_opciones_base_datos();
    
private:
    Ui::ui_opciones_base_datos *ui;
};

#endif // UI_OPCIONES_BASE_DATOS_H
