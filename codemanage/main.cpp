#include <QtGui/QApplication>
#include "codemanage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CodeManage w;
    w.show();
    
    return a.exec();
}
