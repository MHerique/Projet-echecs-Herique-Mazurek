#ifndef FOU_H
#define FOU_H

#include "entite.h"

#include <QObject>
#include <vector>

class Fou : public Entite{
public:
    Fou();
    bool Deplacement(int x, int y,std::vector<std::vector<Entite*>*>* plateau);
};

#endif // FOU_H
