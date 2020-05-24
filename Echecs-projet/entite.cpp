#include "entite.h"

Entite::Entite(): position_x(-1),position_y(-1),est_mange(0)
{

}
void Entite::deplacement(int x, int y){
    position_x=x;
    position_y=y;
}
