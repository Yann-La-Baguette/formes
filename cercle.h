#ifndef CERCLE_H
#define CERCLE_H

#include "figure.h"

class Cercle : figure
{
private:
    QString description = "cercle";
    double rayon;

public:
    Cercle();
    QString getDescription();
    double surface();
    double perimetre();
    void set_rayon(double rayon);
};

#endif // CERCLE_H
