#include"entite.h"
#ifndef CAVALIER_H
#define CAVALIER_H

#include <QObject>
#include <vector>

class Cavalier : public Entite{
public:
    Cavalier();
    bool Deplacement(int x, int y,std::vector<std::vector<Entite*>*>* plateau);
    int Manger(int x, int y); // à faire

};

#endif // CAVALIER_H
