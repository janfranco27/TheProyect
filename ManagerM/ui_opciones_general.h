#ifndef UI_OPCIONES_GENERAL_H
#define UI_OPCIONES_GENERAL_H

#include "share_include.h"
#include <QWidget>

namespace Ui {
class ui_opciones_general;
}

class ui_opciones_general : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_general(QWidget *parent = 0);
    ~ui_opciones_general();

private:
    Ui::ui_opciones_general *ui;
};

#endif // UI_OPCIONES_GENERAL_H
