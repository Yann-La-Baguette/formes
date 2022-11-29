#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : figure
{
private:
    QString description = "triangle";
    double base;
    double hauteur;

public:
    Triangle();
    QString getDescription();
    double surface();
    double perimetre();
    void set_base(double base);
    void set_hauteur(double hauteur);
};

#endif // TRIANGLE_H
