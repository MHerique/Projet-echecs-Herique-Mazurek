#ifndef SEIGNEUR_H
#define SEIGNEUR_H

#include "entite.h"
#include "plateau.h"

template<typename T>

class Seigneur : public Entite
{
protected:
    int portee;
public:
    Seigneur();
    bool deplacement_possible(int x, int y, Plateau<T> *plateau);

};

#endif // SEIGNEUR_H
