#include "cppscript.h"

CPPScript::CPPScript()
{
}

void CPPScript::mf_setHost(_QSTR host){ md_o_sql_host = host; }

void CPPScript::mf_setUser(_QSTR user){ md_o_sql_user = user; }

void CPPScript::mf_setPass(_QSTR pass){ md_o_sql_pass = pass; }

void CPPScript::mf_setDB(_QSTR db){ md_o_sql_db = db; }

void CPPScript::setDirFolder(string str){ strDirFolder = str + "\\"; }

_QSTR CPPScript::mf_getHost(){ return md_o_sql_host; }

_QSTR CPPScript::mf_getUser(){ return md_o_sql_user; }

_QSTR CPPScript::mf_getPass(){ return md_o_sql_pass; }

_QSTR CPPScript::mf_getDB(){ return md_o_sql_db; }

string CPPScript::getDirFolder(){ return strDirFolder; }

void CPPScript::generateClass_withinDB(_QSTR class_name)
{
    // Abrir File
    mkdir(getDirFolder().c_str());

    QSqlDatabase db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName(md_o_sql_host);
    db.setDatabaseName(md_o_sql_db);
    db.setUserName(md_o_sql_user);
    db.setPassword(md_o_sql_pass);
    bool ok = db.open();

    //md_o_name_class = name_table;
    if(ok)
    {
        qDebug()<<"Connection sucessfull"<<endl;

        mf_extractColumnsTable(class_name);
        if(mf_openFile_h(class_name))
        {
            mf_fillFile_h(class_name);
        }
        if(mf_openFile_cpp(class_name))
        {
            mf_fillFile_cpp(class_name);
        }
    }
    else
    {

    }
}

void CPPScript::mf_extractColumnsTable(_QSTR class_name)
{
    QSqlQuery columnsTable;
    //_QSTR query = "SELECT column_name, data_type, column_key FROM ";
    //query += "INFORMATION_SCHEMA.COLUMNS WHERE table_name = '"+name_table+"'";
    _QSTR query = "SHOW COLUMNS FROM "+class_name;
    columnsTable.prepare(query);

    if(columnsTable.exec())
    {
        qDebug()<<"query successful"<<endl;
        while(columnsTable.next())
        {
            qDebug()<<columnsTable.value(0).toString()<<endl;
            qDebug()<<columnsTable.value(1).toString()<<endl;
            md_o_v_column_names.push_back(columnsTable.value(0).toString());
            md_o_v_data_types.push_back(columnsTable.value(1).toString());
        }
    }


}

void CPPScript::generateClass_withinDB()
{
    // Create folder
    mkdir(getDirFolder().c_str());

    QSqlDatabase db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(md_o_sql_host);
    db.setDatabaseName(md_o_sql_db);
    db.setUserName(md_o_sql_user);
    db.setPassword(md_o_sql_pass);
    bool ok = db.open();

    //md_o_name_class = name_table;
    if(ok)
    {
        qDebug()<<"Connection sucessfull"<<endl;
        vector<TablesAndColumns> v_info;
        mf_extractTables(v_info);

        for(unsigned int i = 0; i < v_info.size(); i++)
        {
            if(mf_openFile_h(v_info[i].table_name))
            {
                md_o_v_column_names = v_info[i].v_column_names;
                mf_fillFile_h(v_info[i].table_name);
            }
        }

        for(unsigned int i = 0; i < v_info.size(); i++)
        {
            if(mf_openFile_cpp(v_info[i].table_name))
            {
                md_o_v_column_names = v_info[i].v_column_names;
                mf_fillFile_cpp(v_info[i].table_name);
            }
        }

    }
    else
    {

    }
}
void CPPScript::mf_extractTables(vector<TablesAndColumns> &v_info)
{
    QSqlQuery sql_tables;
    sql_tables.prepare("SHOW tables");
    if(sql_tables.exec())
    {
        while(sql_tables.next())
        {

            v_info.push_back((*(new TablesAndColumns(sql_tables.value(0).toString() )) ) );
        }
    }

    for(unsigned i = 0; i < v_info.size(); i++)
    {
        QSqlQuery columnsTable;
        //_QSTR query = "SELECT column_name, data_type, column_key FROM ";
        //query += "INFORMATION_SCHEMA.COLUMNS WHERE table_name = '"+name_table+"'";
        _QSTR query = "SHOW COLUMNS FROM "+v_info[i].table_name;
        columnsTable.prepare(query);

        if(columnsTable.exec())
        {
            qDebug()<<"query successful"<<endl;
            while(columnsTable.next())
            {
                v_info[i].v_column_names.push_back(columnsTable.value(0).toString());
            }
        }
    }
}

void CPPScript::generateClass_withoutDB(_QSTR class_name, vector<_QSTR>& l_v_dTypes)
{

}

bool CPPScript::mf_openFile_h(_QSTR& class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+".h";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_h openned"<<endl;
        return true;
    }

    qDebug()<<"File_h not openned"<<endl;
    return false;
}
bool CPPScript::mf_openFile_cpp(_QSTR& class_name)
{
    ofstream file;
    string str_name_class = getDirFolder()+STR_OBJECT+class_name.toStdString()+".cpp";
    file.open(str_name_class.c_str());

    if(file.is_open())
    {
        qDebug()<<"File_cpp openned"<<endl;
        return true;
    }

    qDebug()<<"File_cpp not openned"<<endl;
    return false;
}
void CPPScript::mf_fillFile_h(_QSTR& class_name)
{
    qDebug()<<"mf_fillFile_h class_name: "<<class_name<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+".h";
    fstream file(file_class_name.c_str());

    string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#ifndef OBJECT_"<<str_class_name_upper<<"_H"<<endl;
    file<<"#define OBJECT_"<<str_class_name_upper<<"_H"<<endl;
    file<<endl;
    file<<"#include \"share_include.h\""<<endl;
    file<<endl;
    file<<"class object_"<<str_class_name<<":public object_general"<<endl;
    file<<"{"<<endl;
    file<<endl;

    file<<"private:"<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t_QSTR md_o_"<<temp<<";"<<endl;
    }
    file<<endl;
    file<<"public:"<<endl;
    file<<"\tobject_"<<str_class_name<<"();"<<endl;

    string temp_1 = md_o_v_column_names[0].toStdString();
    file<<"\tobject_"<<str_class_name<<"(_QSTR "<<temp_1;
    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<");"<<endl;

    string temp_2 = md_o_v_column_names[1].toStdString();
    file<<"\tobject_"<<str_class_name<<"(_QSTR "<<temp_2;
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<");"<<endl;
    file<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tvoid mf_set_"<<temp<<"(_QSTR "<<temp<<");"<<endl;
    }

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t_QSTR mf_get_"<<temp<<"();"<<endl;
    }
    file<<endl;


    file<<"\tbool mf_load(_QSTR pk);"<<endl;
    file<<"\tbool mf_add();"<<endl;
    file<<"\tbool mf_update();"<<endl;
    file<<"\tbool mf_remove();"<<endl;
    file<<endl;
    file<<"\t~object_"<<str_class_name<<"();"<<endl;
    file<<"};";
    file<<endl;
    file<<"#endif // OBJECT_"+str_class_name_upper+"_H";

}

void CPPScript::mf_fillFile_cpp(_QSTR& class_name)
{
    qDebug()<<"mf_fillFile_cpp class_name: "<<class_name<<endl;
    string file_class_name = getDirFolder()+STR_OBJECT+class_name.toStdString()+".cpp";
    fstream file(file_class_name.c_str());

    //string str_class_name_upper = class_name.toUpper().toStdString();
    string str_class_name = class_name.toStdString();

    file<<"#include \"share_include.h\""<<endl;
    file<<endl;
    file<<"object_"<<str_class_name<<"::"<<"object_"<<str_class_name<<"()"<<endl;
    file<<"{"<<endl;
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_0"<<endl;
    file<<"\t//w!"<<endl;
    file<<"}"<<endl;
    file<<endl;

    string temp_1 = md_o_v_column_names[0].toStdString();
    file<<"object_"<<str_class_name<<"::object_"<<str_class_name<<"(_QSTR "<<temp_1;
    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<")"<<endl;
    file<<"{"<<endl;    
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_1"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
    }
    file<<"}"<<endl;

    string temp_2 = md_o_v_column_names[1].toStdString();
    file<<"object_"<<str_class_name<<"::object_"<<str_class_name<<"(_QSTR "<<temp_2;
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", _QSTR "<<temp;
    }
    file<<")"<<endl;
    file<<"{"<<endl;    
    file<<"\t//file "<<class_name.toStdString()<<endl;
    file<<"\t//function construct_2"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;

    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
    }
    file<<"}"<<endl;

    file<<"object_"<<str_class_name<<"::"<<"~"<<"object_"<<str_class_name<<"()"<<endl;
    file<<"{"<<endl;
    file<<endl;
    file<<"}"<<endl;
    file<<endl;

    file<<endl;
    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"void object_"<<str_class_name<<"::mf_set_"<<temp<<"(_QSTR "<<temp<<")"<<endl;
        file<<"{"<<endl;
        file<<"\t//function mf_set_"<<temp<<endl;
        file<<"\t//w!"<<endl;
        file<<endl;
        file<<"\tmd_o_"<<temp<<" = "<<temp<<";"<<endl;
        file<<"}"<<endl;
    }
    file<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"_QSTR object_"<<str_class_name<<"::mf_get_"<<temp<<"()"<<endl;
        file<<"{"<<endl;
        file<<"\t//function mf_get_"<<temp<<endl;
        file<<"\t//w!"<<endl;
        file<<endl;
        file<<"\treturn md_o_"<<temp<<";"<<endl;
        file<<"}"<<endl;
    }
    file<<endl;

    // FUNCION LOAD
    file<<"bool object_"<<str_class_name<<"::mf_load(_QSTR pk)"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_load"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;
    file<<"\tquery.prepare(\"SELECT * FROM "<<str_class_name<<" WHERE "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;
    file<<"\tquery.bindValue(0,pk);"<<endl;
    file<<"\tquery.exec();"<<endl;
    file<<endl;
    file<<"\tif(query.next())"<<endl;
    file<<"\t{"<<endl;

    for(unsigned int i = 0; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\t\tmd_o_"<<temp<<" = "<<"query.value("<<i<<").toString();"<<endl;

    }
    file<<endl;
    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;

    // FUNCION ADD
    file<<"bool object_"<<str_class_name<<"::mf_add()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_add"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;

    file<<"\tquery.prepare(\"INSERT INTO "<<str_class_name<<"("<<md_o_v_column_names[1].toStdString();
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", "<<temp;
    }
    file<<") VALUES(?";
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        file<<", ?";
    }
    file<<")\");"<<endl;

    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tquery.bindValue("<<(i-1)<<", "<<"md_o_"<<temp<<");"<<endl;
    }

    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;

    // FUNCION UPDATE
    file<<"bool object_"<<str_class_name<<"::mf_update()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_update"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;

    file<<"\tquery.prepare(\"UPDATE "<<str_class_name<<" SET "<<md_o_v_column_names[1].toStdString()<<" = ?";
    for(unsigned int i = 2; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<", "<<temp<<" = ?";
    }

    file<<" WHERE "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;

    for(unsigned int i = 1; i < md_o_v_column_names.size(); i++)
    {
        string temp = md_o_v_column_names[i].toStdString();
        file<<"\tquery.bindValue("<<(i-1)<<", "<<"md_o_"<<temp<<");"<<endl;
    }
    string temp = md_o_v_column_names[0].toStdString();
    file<<"\tquery.bindValue("<<md_o_v_column_names.size()-1<<", "<<"md_o_"<<temp<<");"<<endl;
    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t\t//state FAILED"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;

    // FUNCION REMOVE
    file<<"bool object_"<<str_class_name<<"::mf_remove()"<<endl;
    file<<"{"<<endl;
    file<<"\t//function mf_remove"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\tQSqlQuery query;"<<endl;
    file<<endl;

    file<<"\tquery.prepare(\"DELETE "<<str_class_name<<" FROM "<<md_o_v_column_names[0].toStdString()<<" = ?\");"<<endl;
    file<<"\tquery.bindValue(0"<<", "<<"md_o_"<<md_o_v_column_names[0].toStdString()<<");"<<endl;


    file<<endl;
    file<<"\tif(query.exec())"<<endl;
    file<<"\t{"<<endl;


    file<<"\t\t//state OK"<<endl;
    file<<"\t\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn true;"<<endl;
    file<<endl;
    file<<"\t}else{"<<endl;
    file<<"\t//state FAILED"<<endl;
    file<<"\t//w!"<<endl;
    file<<endl;
    file<<"\t\treturn false;"<<endl;
    file<<"\t}"<<endl;
    file<<"}"<<endl;
    file<<endl;
}

