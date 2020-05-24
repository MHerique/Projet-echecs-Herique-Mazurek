#include "mainwindow.h"
#include "plateau.h"
#include "cavalier.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    Plateau *ptest = new Plateau();
    QVector<QVector<Entite*>*> cases_plateau = ptest->getPlateau();
    std::cout << "après init" << std::endl;

    Cavalier* tet = new Cavalier();
    cases_plateau.at(1)->insert(1,tet);
    std::cout << cases_plateau.at(1)->at(1)->getTest() << std::endl;
    cases_plateau.at(1)->at(1)->setTest();
    std::cout << cases_plateau.at(1)->at(1)->getTest() << std::endl;
   /* QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();*/
}
