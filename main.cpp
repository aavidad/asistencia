#include "asistencia.h"
#include <QApplication>
#include <QSettings>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Asistencia w;
    qApp->setApplicationName("asistencia");
    qApp->setOrganizationName("dipgra");
    w.show();

    return a.exec();
}
