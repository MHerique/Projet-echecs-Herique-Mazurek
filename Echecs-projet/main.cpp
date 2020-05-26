#include "mainwindow.h"
#include "minuteur.h"
#include "iostream"
#include <QObject>
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Minuteur *tet = new Minuteur(255800);

    tet->test();
    return a.exec();

}
