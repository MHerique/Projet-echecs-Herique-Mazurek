#include "plateau.h"
#include "case.h"
#include "tour.h"
#include "fou.h"
#include "cavalier.h"
#include "roi.h"
#include "reine.h"
#include "pion.h"

#include <QVector>
#include <iostream>
template<typename T>

Plateau<T>::Plateau(bool plateau_vierge){
    QVector<Case<T>*>* declaration_vecteur;
    Case<int>* declaration_case_vide = NULL;
    Case<Pion>* case_pion = NULL;
    Pion* pion;
    if( plateau_vierge == true ){
        for( int x = 0 ; x < 8 ; x++){
            declaration_vecteur = new QVector<Case<T>*>;
            cases_plateau.push_back(declaration_vecteur);
            for( int y = 0 ; y < 8 ; y++){
                cases_plateau.at(x)->push_back(declaration_case_vide);
            }
        }
    }
    else{
        cases_plateau.push_back(setLignePrincipale(true));
        declaration_vecteur = new QVector<Case<T>*>;
        cases_plateau.push_back(declaration_vecteur);
        for( int i = 0 ; i < 8 ; i++ ){
            pion = new Pion();
            case_pion = new Case<Pion>(pion);
            cases_plateau.at(1)->push_back(case_pion);
        }
        for( int x = 2 ; x < 6 ; x++){
            declaration_vecteur = new QVector<Case<T>*>;
            cases_plateau.push_back(declaration_vecteur);
            for( int y = 0 ; y < 8 ; y++){
                cases_plateau.at(x)->push_back(declaration_case_vide);
            }
        }
        declaration_vecteur = new QVector<Case<T>*>;
        cases_plateau.push_back(declaration_vecteur);
        for( int i = 0 ; i < 8 ; i++ ){
            pion = new Pion();
            case_pion = new Case<Pion>(pion);
            cases_plateau.at(1)->push_back(case_pion);
        }
        cases_plateau.push_back(setLignePrincipale(false));
    }
}

template<typename T>
QVector<Case<T>*> Plateau<T>::setLignePrincipale(bool couleur_noire){
    QVector<Case<T>*>* declaration_vecteur;
    declaration_vecteur = new QVector<Case<T>*>;
    //instanciation des 5 premiers pions de la ligne
    Tour* tour = new Tour();
    Case<Tour>* declaration_tour = new Case<Tour>(tour);
    Cavalier* cavalier = new Cavalier();
    Case<Cavalier>* declaration_cavalier = new Case<Cavalier>(cavalier);
    Fou* fou = new Fou();
    Case<Fou>* declaration_fou = new Case<Fou>(fou);
    Reine* reine = new Reine();
    Case<Reine>* declaration_reine = new Case<Reine>(reine);
    Roi* roi = new Roi();
    Case<Roi>* declaration_roi = new Case<Roi>(roi);
    //insertion des premiers pions dans le vecteur
    declaration_vecteur->push_back(declaration_tour);
    declaration_vecteur->push_back(declaration_cavalier);
    declaration_vecteur->push_back(declaration_fou);
    // placer la dame après le roi pour la ligne des pions noirs et inversement pour la ligne blanc
    if( couleur_noire == true ){
        declaration_vecteur->push_back(declaration_roi);
        declaration_vecteur->push_back(declaration_reine);
    }
    else{
        declaration_vecteur->push_back(declaration_reine);
        declaration_vecteur->push_back(declaration_roi);
    }
    //instanciations des pions pour compléter la ligne
    tour = new Tour();
    declaration_tour = new Case<Tour>(tour);
    cavalier = new Cavalier();
    declaration_cavalier = new Case<Cavalier>(cavalier);
    fou = new Fou();
    declaration_fou = new Case<Fou>(fou);
    //finalisation du vecteur
    declaration_vecteur->push_back(declaration_fou);
    declaration_vecteur->push_back(declaration_cavalier);
    declaration_vecteur->push_back(declaration_tour);
    //résultat
    return declaration_vecteur;
}

template<typename T>
Case<T>* Plateau<T>::getCase(int x , int y){
    return cases_plateau.at(x)->at(y);
};

template<typename T>
QVector<QVector<Case<T>*>*> Plateau<T>::getPlateau(){
    return cases_plateau;
};
