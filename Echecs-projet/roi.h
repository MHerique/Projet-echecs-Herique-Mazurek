#ifndef ROI_H
#define ROI_H
#include "entite.h"
#include "plateau.h"


class Roi : public Entite
{
public:
    Roi();
    bool deplacement_possible(int x, int y,Plateau *plateau);
};

#endif // ROI_H
