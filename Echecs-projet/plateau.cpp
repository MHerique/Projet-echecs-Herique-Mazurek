#include "plateau.h"
#include "entite.h"
#include <QVector>
#include <iostream>

Plateau::Plateau()
{
    QVector<Entite*>* declaration_vecteur;
    Entite* declaration_case = NULL;
    for( int x = 0 ; x < 8 ; x++){
        declaration_vecteur = new QVector<Entite*>;
        cases_plateau.push_back(declaration_vecteur);
        for( int y = 0 ; y < 8 ; y++){
            cases_plateau.at(x)->push_back(declaration_case);
        }
    }
}

Entite* Plateau::getCase(int x , int y){
    return cases_plateau.at(x)->at(y);
};


QVector<QVector<Entite*>*> Plateau::getPlateau(){
    return cases_plateau;
};
