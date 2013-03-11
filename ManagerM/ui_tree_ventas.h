#ifndef UI_TREE_VENTAS_H
#define UI_TREE_VENTAS_H

#include <QWidget>
#include <QModelIndex>
namespace Ui {
class ui_tree_ventas;
}

class ui_tree_ventas : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_tree_ventas(QWidget *parent = 0);
    ~ui_tree_ventas();
    
private slots:
    void on_treeWidget_doubleClicked(const QModelIndex &index);

  signals:
    void boleta();
private:
    Ui::ui_tree_ventas *ui;
};


#endif // UI_TREE_VENTAS_H
