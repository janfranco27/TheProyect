#ifndef UI_GLOBAL_MANAGER_ARTICULOS_H
#define UI_GLOBAL_MANAGER_ARTICULOS_H

#include <QWidget>
#include "share_include.h"
class Searcher_Articulos;

namespace Ui {
class ui_global_manager_articulos;
}

class ui_global_manager_articulos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_global_manager_articulos(QWidget *parent = 0);
    ~ui_global_manager_articulos();
    
private:
    Ui::ui_global_manager_articulos *ui;

    Searcher_Articulos* searcher;
    void update_table_articulos();


};

#endif // UI_GLOBAL_MANAGER_ARTICULOS_H