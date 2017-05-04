#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#include <QMainWindow>

namespace Ui {
class Asistencia;
}

class Asistencia : public QMainWindow
{
    Q_OBJECT

public:
    explicit Asistencia(QWidget *parent = 0);
    ~Asistencia();

private slots:
    void on_actionISL_triggered();

    void on_actionCronos_triggered();

    void on_actionGlpi_triggered();

private:
    Ui::Asistencia *ui;
};

#endif // ASISTENCIA_H
