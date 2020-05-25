#include "mainwindow.h"
#include "minuteur.h"
#include "iostream"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Minuteur tet = Minuteur();
    std::cout << tet.get() << std::endl;
    tet.minuteur->start(15000);
    //std::cout << tet.minuteur->remainingTimeAsDuration() << std::endl;
    tet.minuteur->stop();

    return a.exec();

}
