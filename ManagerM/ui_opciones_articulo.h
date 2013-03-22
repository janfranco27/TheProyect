#ifndef UI_OPCIONES_ARTICULO_H
#define UI_OPCIONES_ARTICULO_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_articulo;
}

class ui_opciones_articulo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_articulo(QWidget *parent = 0);
    ~ui_opciones_articulo();

private:

    QSqlQueryModel *model_marca;
    QSqlQueryModel *model_medida;
    QSqlQueryModel *model_grupo;

public:
    void update_table_marcas();
    void update_table_medidas();
    void update_table_grupos();
    void setCurrentTab(int index);
    
private slots:
    void on_pushButton_save_grupo_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_save_medida_clicked();

    void on_pushButton_save_marca_clicked();

    void closeEvent(QCloseEvent *ev );

signals:
    void closing();

private:
    Ui::ui_opciones_articulo *ui;
};

#endif // UI_OPCIONES_ARTICULO_H
