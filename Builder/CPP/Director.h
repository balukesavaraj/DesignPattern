#include "ICarBuilder.h"

#ifndef DIRECTOR_H
#define DIRECTOR_H

class Director
{
public:
    void Constrct(ICarBuilder& builder)
    {
        builder.BuildEngine();
        builder.BuildWheels();
        builder.BuildSunRoof();
        builder.BuildGPS();
    }
};
#endif