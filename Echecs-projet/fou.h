#ifndef FOU_H
#define FOU_H

#include "entite.h"

#include <QObject>

class Fou : public Entite{
public:
    Fou();
    bool deplacement_possible(int x , int y);
};

#endif // FOU_H
