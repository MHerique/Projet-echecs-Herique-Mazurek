#ifndef ENTITE_H
#define ENTITE_H

#include <QObject>
#include <QVector>

class Entite : public QObject{ //classe mère de toute les pions sur le plateau
    Q_OBJECT
protected:
    int position_x; //position x du pion
    int position_y; //position y du pion
    int est_mange; // savoir à quel tour il a été mangé =0 si il n'a pas été mangé
    //QVector<int> a_mange; //retient le tour où ce pion a mangé un autre pion

public:
    Entite(QObject *parent=0);
    bool deplacement_possible(int x, int y,Entite *position_arrive); //slot? déplace le pion aux coordonnées passés en paramètre si elles sont valide
    void deplacement(int x,int y);
    int manger(int x, int y);   //slot?
    int getTest(){return position_x;};
    int setTest(){position_x=5;};
};

#endif // ENTITE_H
