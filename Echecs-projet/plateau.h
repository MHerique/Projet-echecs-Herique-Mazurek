#ifndef PLATEAU_H
#define PLATEAU_H

#include <QVector>
#include "entite.h"

class Plateau{
private:
    QVector<QVector<Entite*>*> cases_plateau;
public:
    Plateau(); // initialisation de toute les cases du plateau sans pions
    Entite* getCase(int x, int y);
    QVector<QVector<Entite*>*>* getPlateau();
};

#endif // PLATEAU_H
