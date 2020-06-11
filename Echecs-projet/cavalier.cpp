#include "cavalier.h"
#include "entite.h"
#include <vector>
Cavalier::Cavalier()
{

}
bool Cavalier::Deplacement(int x, int y, std::vector<std::vector<Entite*>*>* plateau){ // on regarde si le déplacement est valide
    int a[4] = {3,-3,1,-1};

    for(int i = 0 ; i < 2 ; i++){
        if((position_x+a[i]==x)&&((position_y+1==y)||(position_y-1==y))){  // si le cavalier peut se déplacer latéralement vers le haut ou le bas
            position_x=x;
            position_y=y;
            return true;
        }
        else if((position_y+a[i]==x)&&((position_x+1==y)||(position_x-1==y))){ // si le cavalier peut se déplacer horisontalement vers la droite ou la gauche
            position_x=x;
            position_y=y;
            return false;
        }
    }
    return -1;
}

int Cavalier::Manger(int x, int y){

}
