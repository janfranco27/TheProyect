#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QWidget>

namespace Ui {
class ui_inicio;
}

class ui_inicio : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_inicio(QWidget *parent = 0);
    ~ui_inicio();
    
private:
    Ui::ui_inicio *ui;
};

#endif // UI_INICIO_H
