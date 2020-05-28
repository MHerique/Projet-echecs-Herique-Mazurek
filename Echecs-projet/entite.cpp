#include "entite.h"

Entite::Entite(QObject* parent) : QObject(parent)
{

}
void Entite::deplacement(int x, int y){
    position_x=x;
    position_y=y;
}
