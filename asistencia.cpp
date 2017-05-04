#include "asistencia.h"
#include "ui_asistencia.h"
#include "QtCore/QProcess"
#include "configuracion.h"

Asistencia::Asistencia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Asistencia)
{
    ui->setupUi(this);
}

Asistencia::~Asistencia()
{
    delete ui;
}

void Asistencia::on_actionISL_triggered()
{
    QProcess process;
       //process.start("xdg-open", QStringList() << "http://cronos.grx");
       process.startDetached("proxychains", QStringList() << "/opt/ISLOnline/ISLLight/ISLLight");
       //connect(process, static_cast<void(QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished),
          // [=](int exitCode, QProcess::ExitStatus exitStatus){ ui->statusBar->showMessage("Ha salido",2000) });
       //process.waitForFinished(-1);
}

void Asistencia::on_actionCronos_triggered()
{



    QProcess process;

       //process.startDetached("xdg-open", QStringList() << "http://www.dipgra.es");

       //connect(process, static_cast<void(QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished),
          // [=](int exitCode, QProcess::ExitStatus exitStatus){ ui->statusBar->showMessage("Ha salido",2000) });
       //process.waitForFinished(-1);
}

void Asistencia::on_actionGlpi_triggered()
{
  Configuracion *confi = new Configuracion();
  confi->show();
}
