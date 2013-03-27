#ifndef UI_NEW_VENTA_H
#define UI_NEW_VENTA_H

#include <QWidget>

namespace Ui {
class ui_new_venta;
}

class ui_new_venta : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta(QWidget *parent = 0);
    ~ui_new_venta();
    
private slots:
    void on_le_nombre_textEdited(const QString &arg1);

private:
    Ui::ui_new_venta *ui;
};

#endif // UI_NEW_VENTA_H
