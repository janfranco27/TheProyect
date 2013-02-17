#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QMainWindow>
#include "ui_colaborador.h"
namespace Ui {
class ui_main;
}

class ui_main : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ui_main(QWidget *parent = 0);
    ~ui_main();
    
private slots:
    void on_actionAcerca_de_ManagerM_triggered();

    void on_actionPantalla_Completa_triggered();

    void on_actionSalir_triggered();

    void on_actionCerrar_Sesion_triggered();

    void on_pushButton_colaboradores_clicked();

private:
    Ui::ui_main *ui;
};

#endif // UI_MAIN_H
