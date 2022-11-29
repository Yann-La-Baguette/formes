#include "rectangle.h"

Rectangle::Rectangle()
{

}

QString Rectangle::getDescription(){
    return description;
}

double Rectangle::surface(){
    return longueur*largeur;
}

double Rectangle::perimetre(){
    return (longueur*2) + (largeur*2);
}

void Rectangle::set_longueur(double longueur){
    this->longueur = longueur;
}

void Rectangle::set_largeur(double largeur){
    this->largeur = largeur;
}

