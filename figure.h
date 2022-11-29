#ifndef FIGURE_H
#define FIGURE_H

#include <QString>
#include <iostream>
#include <math.h>

using namespace std;

class figure
{
private:
    QString description = "forme";

public:
    figure();
    QString getDescription();
};

#endif // FIGURE_H
