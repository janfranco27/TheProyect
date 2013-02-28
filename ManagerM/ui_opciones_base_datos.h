#ifndef UI_OPCIONES_BASE_DATOS_H
#define UI_OPCIONES_BASE_DATOS_H

#include <QTabWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_base_datos;
}

class ui_opciones_base_datos : public QTabWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_base_datos(QWidget *parent = 0);
    ~ui_opciones_base_datos();

public:
    void mf_update_data();
    
private slots:
    void on_pushButton_guardar_clicked();

private:
    Ui::ui_opciones_base_datos *ui;

};

#endif // UI_OPCIONES_BASE_DATOS_H

