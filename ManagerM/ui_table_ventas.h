#ifndef UI_TABLE_VENTAS_H
#define UI_TABLE_VENTAS_H

#include <QMainWindow>


namespace Ui {
class ui_table_ventas;
}

class ui_table_ventas : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ui_table_ventas(QWidget *parent = 0);
    ~ui_table_ventas();
    
private:
    Ui::ui_table_ventas *ui;

private slots:

    void llenaBoleta();
};

#endif // UI_TABLE_VENTAS_H
