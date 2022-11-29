#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : figure
{
private:
    QString description = "rectangle";
    double longueur;
    double largeur;

public:
    Rectangle();
    QString getDescription();
    double surface();
    double perimetre();
    void set_longueur(double longueur);
    void set_largeur(double largeur);
};

#endif // RECTANGLE_H
