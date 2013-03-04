#ifndef UI_OPCIONES_ARTICULO_H
#define UI_OPCIONES_ARTICULO_H

#include <QTabWidget>
#include "share_include.h"


namespace Ui {
class ui_opciones_articulo;
}

class ui_opciones_articulo : public QTabWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_articulo(QWidget *parent = 0);
    ~ui_opciones_articulo();
    
private slots:
    void on_pushButton_save_grupo_clicked();




private:
    Ui::ui_opciones_articulo *ui;
};

#endif // UI_OPCIONES_ARTICULO_H
