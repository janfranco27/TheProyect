#include "session.h"

using namespace module_session;

session::session()
{

}

session::session(_STR name, _STR nick_name, _STR permissions)
{
    md_name = name;
    md_nick_name = nick_name;
    md_permissions = permissions;
}

void session::mf_set_name(_STR name)
{
    md_name = name;
}

void session::mf_set_nick_name(_STR nick_name)
{
    md_nick_name = nick_name;
}

void session::mf_set_permissions(_STR permissions)
{
    md_permissions = permissions;
}

_STR session::mf_get_name()
{
    return md_name;
}

_STR session::mf_get_nick_name()
{
    return md_nick_name;
}

_STR session::mf_get_permissions()
{
    return md_permissions;
}

