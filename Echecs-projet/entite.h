#ifndef ENTITE_H
#define ENTITE_H

#include <QObject>
#include <QVector>

class Entite{ //classe mère de toute les pions sur le plateau

protected:
    int position_x; //position x du pion
    int position_y; //position y du pion
    int est_mange; // savoir à quel tour il a été mangé =0 si il n'a pas été mangé
    QVector<int> a_mange; //retient le tour où ce pion a mangé un autre pion

public:
    Entite();
    bool Deplacement(int x, int y); //slot? déplace le pion aux coordonnées passés en paramètre si elles sont valide
    int Manger(int x, int y);   //slot?

};

#endif // ENTITE_H
