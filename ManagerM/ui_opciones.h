#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones;
}

class ui_opciones : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones(QWidget *parent = 0);
    ~ui_opciones();
    
private slots:


    void on_listWidget_modulos_clicked(const QModelIndex &index);

private:
    Ui::ui_opciones *ui;
};

#endif // UI_OPCIONES_H
