#ifndef UI_MODULE_HOME_H
#define UI_MODULE_HOME_H

#include <QWidget>

namespace Ui {
class ui_module_home;
}

class ui_module_home : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_home(QWidget *parent = 0);
    ~ui_module_home();
    
private:
    Ui::ui_module_home *ui;
};

#endif // UI_MODULE_HOME_H
