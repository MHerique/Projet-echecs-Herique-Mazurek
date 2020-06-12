#ifndef CASEVIDE_H
#define CASEVIDE_H

#include "entite.h"


class CaseVide : public Entite
{
private:
    const bool case_vide = false;
public:
    CaseVide();
};

#endif // CASEVIDE_H
