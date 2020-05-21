#include"entite.h"
#ifndef CAVALIER_H
#define CAVALIER_H

#include <QObject>

class Cavalier : public Entite{
public:
    Cavalier();
    bool Deplacement(int x, int y);
    int Manger(int x, int y); // à faire
};

#endif // CAVALIER_H
