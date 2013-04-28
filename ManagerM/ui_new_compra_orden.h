#ifndef UI_NEW_COMPRA_ORDEN_H
#define UI_NEW_COMPRA_ORDEN_H

#include <QWidget>

namespace Ui {
class ui_new_compra_orden;
}

class ui_new_compra_orden : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_compra_orden(QWidget *parent = 0);
    ~ui_new_compra_orden();
    
    void setType(int);
    void setText_lineEdit_ruc(QString);
    void setText_lineEdit_razon_social(QString);

private slots:
    void on_pushButton_buscarProveedor_clicked();

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();

    void on_pushButton_proveedor_clicked();

    void on_pushButton_transportista_clicked();

    void on_lineEdit_codigoProveedor_textChanged(const QString &arg1);

    void on_lineEdit_codigoTransportista_textChanged(const QString &arg1);

    void on_lineEdit_proveedorNombre_returnPressed();

    void on_lineEdit_transportistaNombre_returnPressed();

    void on_lineEdit_proveedorNombre_activated(const QString&);

    void on_lineEdit_transportistaNombre_activated(const QString&);

private:
    Ui::ui_new_compra_orden *ui;

    void init_lineEdit_proveedorNombre();
    void init_lineEdit_transportistaNombre();
};

#endif // UI_NEW_COMPRA_ORDEN_H
