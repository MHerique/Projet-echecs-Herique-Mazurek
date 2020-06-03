#ifndef PLATEAU_H
#define PLATEAU_H
#include <QVector>
#include "case.h"

template<typename T>
class Plateau{
private:
    QVector<QVector<Case<T>*>*> cases_plateau;
public:
    Plateau(bool plateau_vierge=false); //peut permettre de charger une partie enregistré.
    Case<T>* getCase(int x, int y);
    QVector<QVector<Case<T>*>*> getPlateau();
    QVector<Case<T>*> setLignePrincipale(bool couleur_noire);
};

#endif // PLATEAU_H
