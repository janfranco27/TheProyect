#ifndef UI_EDIT_ARTICULOS_H
#define UI_EDIT_ARTICULOS_H

#include <QDialog>
class object_e_articulo;
namespace Ui {
class ui_edit_articulos;
}

class ui_edit_articulo : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_edit_articulo(object_e_articulo * ar, QWidget *parent = 0);
    ~ui_edit_articulo();
    
private:
    Ui::ui_edit_articulos *ui;
    void update_form();
};

#endif // UI_EDIT_ARTICULOS_H
