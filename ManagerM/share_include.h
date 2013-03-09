#ifndef SHARE_INCLUDE_H
#define SHARE_INCLUDE_H

//LANGUAGE INCLUDES - NAMESPACE

//INCLUDES

//#include <ostream>

#include <stdio.h>
#include <time.h>
#include <ostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>

//NAMESPACES

using namespace std;

//IDE INCLUDES - NAMESPACE

//INCLUDES

#include <QMessageBox>

#include <QDebug>

#include <QtGui>
#include <QSystemTrayIcon>
#include <QMenu>

#include <QMainWindow>
#include <QtGui/QApplication>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QVariant>
#include <QSqlRecord>

//NAMESPACES

//PROYECT INCLUDES - NAMESPACE

//INCLUDES

#include "ui_main.h"
#include "share_typedef.h"

#include "singleton.h"
#include "system_log.h"
#include "database_connection.h"
#include "session.h"
#include "freequery.h"
#include "sistema.h"

#include "object_general.h"

#include "object_e_usuario.h"
#include "object_e_grupo.h"
#include "object_e_marca.h"
#include "object_e_medida.h"





#include "ui_login.h"

#include "ui_opciones_base_datos.h"
#include "ui_opciones_articulo.h"


#include "ui_opciones.h"

#include "ui_articulo.h"


#include "ui_tree_ventas.h"
#include "ui_table_ventas.h"

#include "ui_area_trabajo.h"



//NAMESPACES

using namespace module_log;
using namespace module_dbconnection;
using namespace module_session;



#endif // SHARE_INCLUDE_H
