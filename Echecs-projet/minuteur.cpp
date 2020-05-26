#include "minuteur.h"
#include <QObject>
#include <QTimer>
#include <QWidget>
#include<iostream>

Minuteur::Minuteur(int temps, QObject *parent):QObject(parent)
{
    minuteur = new QTimer();
    connect(minuteur, SIGNAL(timeout()),
              this, SLOT(minuteurSlot()));
    minuteur->setInterval(temps);
    decisecondes=int(temps%100);
    temps-=int(temps%100);
    temps=int(temps/1000);
    secondes=int(temps%60);
    temps-=int(temps%60);
    //temps-=int(temps/60);
    minutes=int(temps/60);
}

void Minuteur::minuteurSlot(){
    decisecondes--;
    if(decisecondes >=100){
        decisecondes=0;
        if(secondes>=59){
            secondes=0;
            minutes--;
        }
        else{
            secondes--;
        }
    }
}
