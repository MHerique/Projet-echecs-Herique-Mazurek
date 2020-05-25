#include "minuteur.h"
#include <QObject>
#include <QTimer>
#include<iostream>

Minuteur::Minuteur()
{
    minuteur = new QTimer();
    connect(minuteur, SIGNAL(timeout()),
              this, SLOT(minuteurSlot()));
    minuteur->start(5000);
}

void Minuteur::minuteurSlot(){
    std::cout << "test" << std::endl;
}
