#include "roi.h"
#include "plateau.h"

Roi::Roi()
{

}

bool Roi::deplacement_possible(int x, int y,Plateau *plateau){
    int test=0;
    Entite *position_arrive = NULL ;
    if( (position_x==x) && (position_y=y) ){ // position d'arrivé = position de départ
        return false;
    }
    if(position_x==x){ //déplacement verticale

    }
    else if(position_y==y){ //déplacement horisontale

    }
    else if(qAbs(position_x-x)==qAbs(position_y-y) ){ //déplacement diagonale

    }
    else{
        return false;
    }


    return false;
}
