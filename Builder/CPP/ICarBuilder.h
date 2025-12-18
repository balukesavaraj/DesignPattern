#include "Car.h"

#ifndef ICARBUILDER_H
#define ICARBUILDER_H

class ICarBuilder
{
public:
    virtual ~ICarBuilder() = default;
    virtual void BuildEngine() = 0;
    virtual void BuildWheels() = 0;
    virtual void BuildSunRoof() = 0;
    virtual void BuildGPS() = 0;
    virtual Car GetCar() = 0;
};

#endif