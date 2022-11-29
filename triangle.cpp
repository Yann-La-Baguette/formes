#include "triangle.h"

Triangle::Triangle(){

}

QString Triangle::getDescription(){
return description;
}

double Triangle::surface(){
return (base*hauteur)/2;
}

double Triangle::perimetre(){
    cout<<"Je calcule le perimetre bip boup";
    return 0;
}

void Triangle::set_base(double base){
    this->base = base;
}

void Triangle::set_hauteur(double hauteur){
    this->hauteur = hauteur;
}
