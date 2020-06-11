#include "plateau.h"
#include "entite.h"
#include "casevide.h"
#include <vector>
#include <iostream>

Plateau::Plateau()
{
    std::vector<Entite*>* declaration_vecteur;
    CaseVide* declaration_case;
    for( int x = 0 ; x < 8 ; x++){
        declaration_vecteur = new std::vector<Entite*>;
        cases_plateau->push_back(declaration_vecteur);
        for( int y = 0 ; y < 8 ; y++){
            declaration_case = new CaseVide();
            cases_plateau->at(x)->push_back(declaration_case);
        }
    }
}

Entite* Plateau::getCase(int x , int y){
    return cases_plateau->at(x)->at(y);
};


std::vector<std::vector<Entite*>*>* Plateau::getPlateau(){
    return cases_plateau;
};
