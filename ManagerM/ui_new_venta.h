#ifndef UI_NEW_VENTA_H
#define UI_NEW_VENTA_H

#include <QWidget>
#include <QSqlRelationalTableModel>

class QStandardItemModel;

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

    void on_pushButton_siguiente_clicked();

    void on_pushButton_atras_clicked();

    void on_cb_tipo_comprobante_activated(const QString &arg1);

    void on_le_marca_textEdited(const QString &arg1);

    void on_le_medida_textEdited(const QString &arg1);

    void on_pushButton_down_clicked();

    void on_pushButton_up_clicked();

private:
    Ui::ui_new_venta *ui;
     QSqlRelationalTableModel * table;
     QStandardItemModel * seleccionados_model ;
     double montoTotal;



     void table_view_seleccionados_addHeaders();
     void updatePrecioView();
     void hideHabilitadoSeleccionadosColumn(bool hide);
};

#endif // UI_NEW_VENTA_H
