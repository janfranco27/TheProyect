#ifndef UI_OPCIONES_TIENDA_H
#define UI_OPCIONES_TIENDA_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_tienda;
}

class ui_opciones_tienda : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_tienda(QWidget *parent = 0);
    ~ui_opciones_tienda();
    
private slots:
    void on_pushButton_guardar_clicked();

private:
    Ui::ui_opciones_tienda *ui;
};

#endif // UI_OPCIONES_TIENDA_H
