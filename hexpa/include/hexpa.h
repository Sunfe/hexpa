#ifndef PARZER_H
#define PARZER_H

#include <QDialog>
#include "ui_hexpa.h"

class Parzer : public QDialog, public Ui_Parzer
{
    Q_OBJECT

public:
    Parzer(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~Parzer();

public slots:
    void ParzeMagic();
};

#endif // PARZER_H
