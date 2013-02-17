#ifndef SYSTEM_LOG_H
#define SYSTEM_LOG_H

#include <fstream>
#include <string>
#include <time.h>
#include <stdio.h>

using namespace std;

namespace module_log{

typedef string _STR;
typedef const string _CSTR;
typedef ofstream _OFILE;


#define DEFAULT_LOG_NAME "myapp.log"
#define DEFAULT_LOG_NAME_ERROR "myappx.log"
#define DEFAULT_LOG_FILE_EXTENSION ".log"
#define SPC " "

class system_log
{
private:

    _OFILE md_log_file;
    _OFILE md_log_file_error;

    _STR mdp_file_name_log;
    _STR mdp_file_name_log_error;


    system_log(const system_log&);
    system_log& operator = (const system_log&);

    _STR md_name_app;
    _STR md_name_file;
    _STR md_name_class;
    _STR md_name_function;
    _STR md_state;
    _STR md_comment;

public:

    system_log();
    system_log(_STR file_name_log);
    system_log(_STR file_name_log, _STR file_name_log_error);

    void mf_set_file_name_log(_STR file_name_log);
    void mf_set_file_name_log_error(_STR file_name_log_error);

    _STR mf_get_file_name_log();
    _STR mf_get_file_name_log_error();

    void mf_set_name_app(_STR name_app);
    void mf_set_name_file(_STR name_file);
    void mf_set_name_class(_STR name_class);
    void mf_set_name_function(_STR name_function);
    void mf_set_state(_STR state);
    void mf_set_comment(_STR comment);

    _STR mf_get_name_app();
    _STR mf_get_name_file();
    _STR mf_get_name_class();
    _STR mf_get_name_function();
    _STR mf_get_state();
    _STR mf_get_comment();

    void write();
    void write(_STR comment);

    ~system_log();

};

}
#endif // SYSTEM_LOG_H
