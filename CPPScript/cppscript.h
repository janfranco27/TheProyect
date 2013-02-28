#ifndef CPPSCRIPT_H
#define CPPSCRIPT_H

// Standart libraries
#include <fstream>
#include <QDebug>
#include <iostream>
#include <vector>
using namespace std;
// Qt libraries
#include <QtSql/QtSql>

// Other libraries

#include <direct.h>

typedef QString _QSTR;

struct TablesAndColumns{
    _QSTR table_name;
    vector<_QSTR> v_column_names;
    TablesAndColumns(_QSTR table_name):table_name(table_name){ }
};

const string STR_OBJECT = "object_";


class CPPScript
{
public:
    CPPScript();
    void generateClass_withinDB(_QSTR class_name);
    void generateClass_withinDB();
    void generateClass_withoutDB(_QSTR class_name, vector<_QSTR>& l_v_dTypes);

    void mf_setHost(_QSTR);
    void mf_setUser(_QSTR);
    void mf_setPass(_QSTR);
    void mf_setDB(_QSTR);

    void setDirFolder(string);

    _QSTR mf_getHost();
    _QSTR mf_getUser();
    _QSTR mf_getPass();
    _QSTR mf_getDB();

    string getDirFolder();
private:
    _QSTR md_o_name_class;
    _QSTR md_o_sql_host;
    _QSTR md_o_sql_user;
    _QSTR md_o_sql_pass;
    _QSTR md_o_sql_db;

    string strDirFolder;

    vector<_QSTR> md_o_v_column_names;
    vector<_QSTR> md_o_v_data_types;

    void mf_extractColumnsTable(_QSTR class_name);
    void mf_extractTables(vector<TablesAndColumns>&);
    bool mf_openFile_h(_QSTR& class_name);
    void mf_fillFile_h(_QSTR& class_name);
    bool mf_openFile_cpp(_QSTR& class_name);
    void mf_fillFile_cpp(_QSTR& class_name);
};

#endif // CPPSCRIPT_H