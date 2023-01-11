#include "QtWidgetsApplication.h"
#include <QtWidgets/QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    

    a.setWindowIcon(QIcon("abc.ico"));
    QtWidgetsApplication w;
    w.show();
    return a.exec();
}
