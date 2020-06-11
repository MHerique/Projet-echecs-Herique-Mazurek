#ifndef PLATEAU_H
#define PLATEAU_H

#include <vector>
#include "entite.h"

class Plateau{
private:
    std::vector<std::vector<Entite*>*>* cases_plateau;
public:
    Plateau(); // initialisation de toute les cases du plateau sans pions
    Entite* getCase(int x, int y);
    std::vector<std::vector<Entite*>*>* getPlateau();
};

#endif // PLATEAU_H
