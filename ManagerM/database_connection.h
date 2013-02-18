#ifndef DATABASE_CONNECTION_H
#define DATABASE_CONNECTION_H

#include <QString>
#include <QSqlDatabase>
#include <QDebug>
#include <string>
#include <fstream>

using namespace std;

namespace module_dbconnection{

typedef QString _QSTR;
typedef string _STR;

#define DB_FILE_NAME_EXTENSION ".cfg"

class database_connection
{

private:

  _QSTR md_driver;

  _QSTR md_host;
  _QSTR md_port;

  _QSTR md_user;
  _QSTR md_pass;
  _QSTR md_name;
  _QSTR md_options;

public:
  database_connection();

  void mf_set_driver(_QSTR driver);
  void mf_set_host(_QSTR host);
  void mf_set_port(_QSTR port);
  void mf_set_user(_QSTR user);
  void mf_set_pass(_QSTR pass);
  void mf_set_name(_QSTR name);
  void mf_set_options(_QSTR options);

  _QSTR mf_get_driver();
  _QSTR mf_get_host();
  _QSTR mf_get_port();
  _QSTR mf_get_user();
  _QSTR mf_get_pass();
  _QSTR mf_get_name();
  _QSTR mf_get_options();

  void mf_load_configuration(_STR file_config);

  bool mf_connect();

  ~database_connection();
};

}

#endif // DATABASE_CONNECTION_H
