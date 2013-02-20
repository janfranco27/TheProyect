#include <QtGui/QApplication>
#include "mainwindow.h"
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    /*
    fstream ofs("prueba.txt", fstream::out);
    string str = "hola graxia";

    ofs.write(str.c_str(), str.length());
    ofs.close();
    */
    //ofs<<str<<endl;
    return a.exec();
}
