#ifndef USUARIOS_H
#define USUARIOS_H

#include <QWidget>

namespace Ui {
class usuarios;
}

class usuarios : public QWidget
{
    Q_OBJECT

public:
    explicit usuarios(QWidget *parent = 0);
    ~usuarios();

private:
    Ui::usuarios *ui;
};

#endif // USUARIOS_H
