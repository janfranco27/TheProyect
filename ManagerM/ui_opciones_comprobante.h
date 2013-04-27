#ifndef UI_OPCIONES_COMPROBANTE_H
#define UI_OPCIONES_COMPROBANTE_H

#include <QWidget>

namespace Ui {
class ui_opciones_comprobante;
}

class ui_opciones_comprobante : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_comprobante(QWidget *parent = 0);
    ~ui_opciones_comprobante();
    
private:
    Ui::ui_opciones_comprobante *ui;
};

#endif // UI_OPCIONES_COMPROBANTE_H
