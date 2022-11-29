#include "cercle.h"


Cercle::Cercle()
{

}

QString Cercle::getDescription(){
    return description;
}

double Cercle::surface(){
    return M_PI*rayon*rayon;
}

double Cercle::perimetre(){
    return 2*M_PI*rayon;
}

void Cercle::set_rayon(double rayon){
    this->rayon = rayon;
}
