#include "configuracion.h"
#include "ui_configuracion.h"
#include <QStandardPaths>
#include <QtDebug>
Configuracion::Configuracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configuracion)
{
    ui->setupUi(this);
    carga_configuracion();
}


void Configuracion::carga_configuracion()
{
    //Carga de los valores de las variables de configuracion
    //Usamos Qsettings para guardar los valores de las variables en un archivo .ini
    QString home_usuario = QStandardPaths::locate(QStandardPaths::HomeLocation, QString(), QStandardPaths::LocateDirectory);
    QSettings s(home_usuario+"/conf.ini", QSettings::IniFormat);
    QString clave = s.value("Configuracion/Clave").toString();
    QString tecnico = s.value("Configuracion/Tecnico").toString();
    QString servidor = s.value("Configuracion/Servidor").toString();
    QString password = s.value("Configuracion/Password").toString();
    QString puerto = s.value("Configuracion/Puerto").toString();

    ui->clave->setText(clave);
    ui->tecnico->setText(tecnico);
    ui->servidor->setText(servidor);
    ui->password->setText(password);
    ui->puerto->setText(puerto);
}

Configuracion::~Configuracion()
{
    delete ui;
}

void Configuracion::on_pushButton_clicked()
{

}

void Configuracion::on_buttonBox_accepted()
{
    QString home_usuario = QStandardPaths::locate(QStandardPaths::HomeLocation, QString(), QStandardPaths::LocateDirectory);
    QSettings s(home_usuario+"/conf.ini", QSettings::IniFormat);

    s.setValue("Configuracion/Clave", ui->clave->text());
    s.setValue("Configuracion/Tecnico", ui->tecnico->text());
    s.setValue("Configuracion/Servidor", ui->servidor->text());
    s.setValue("Configuracion/Password", ui->password->text());
    s.setValue("Configuracion/Usuario", ui->puerto->text());
}
