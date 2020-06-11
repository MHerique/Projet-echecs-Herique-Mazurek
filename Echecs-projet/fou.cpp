#include "fou.h"
#include <vector>

Fou::Fou()
{

}

bool Fou::Deplacement(int x, int y,std::vector<std::vector<Entite*>*>* plateau){
    int diff_x = position_x-x;
    int diff_y = position_y-y;
    if(diff_x > 0 ){
        if(diff_y > 0){
            for(int i = 1 ; i <diff_x ; i++){
                if(plateau->at(position_x+i)->at(position_y+i) != NULL)
                    return false;
            }
        }
        else{
            for(int i = 1 ; i <diff_x ; i++){
                if(plateau->at(position_x+i)->at(position_y-i) != NULL)
                    return false;
            }
        }
    }
    else{
        diff_x = -1*diff_x;
        if(diff_y > 0){
            for(int i = 1 ; i <diff_x ; i++){
                if(plateau->at(position_x-i)->at(position_y+i) != NULL)
                    return false;
            }
        }
        else{
            for(int i = 1 ; i <diff_x ; i++){
                if(plateau->at(position_x-i)->at(position_y-i) != NULL)
                    return false;
            }
        }
    }

    return true;
}
