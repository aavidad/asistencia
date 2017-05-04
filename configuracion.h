#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QDialog>
#include <QSettings>
namespace Ui {
class Configuracion;
}

class Configuracion : public QDialog
{
    Q_OBJECT

public:
    explicit Configuracion(QWidget *parent = 0);
    void carga_configuracion();
    ~Configuracion();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

private:
    Ui::Configuracion *ui;
};

#endif // CONFIGURACION_H
