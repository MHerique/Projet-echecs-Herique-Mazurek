#ifndef ENTITE_H
#define ENTITE_H

#include <QObject>
#include <vector>

class Entite : public QObject{ //classe mère de toute les pions sur le plateau
    Q_OBJECT
protected:
    int position_x; //position x du pion
    int position_y; //position y du pion
    QString couleur;
    const bool case_vide = true;

public:
    Entite(QObject *parent=0);
    bool deplacement_possible(int x, int y, std::vector<std::vector<Entite*>*>* palteau=NULL); //slot? déplace le pion aux coordonnées passés en paramètre si elles sont valide
    void deplacement(int x,int y);
    int manger(int x, int y);   //slot?
    int getX(){
        return position_x;
    }
};

#endif // ENTITE_H
