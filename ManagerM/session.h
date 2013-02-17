#ifndef SESSION_H
#define SESSION_H

#include <string>

using namespace std;

namespace module_session{

typedef string _STR;

class session
{

private:
    _STR md_name;
    _STR md_nick_name;
    _STR md_permissions;

public:

    session();
    session(_STR name,_STR nick_name,_STR permissions);

    void mf_set_name(_STR name);
    void mf_set_nick_name(_STR nick_name);
    void mf_set_permissions(_STR permissions);

    _STR mf_get_name();
    _STR mf_get_nick_name();
    _STR mf_get_permissions();





    ~session(){}
};


}

#endif // SESSION_H
