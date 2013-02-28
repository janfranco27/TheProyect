#ifndef SISTEMA_H
#define SISTEMA_H

#include "share_include.h"

class Sistema
{
private:

public:
    Sistema();

    bool validarUsuario(_QSTR nick, _QSTR pass);

    bool is_dbConfigurate();


};


#endif // SISTEMA_H
