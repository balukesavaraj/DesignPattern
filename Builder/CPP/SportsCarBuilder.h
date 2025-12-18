#include "ICarBuilder.h"
#ifndef SPORTS_CARBUILDER_H
#define SPORTS_CARBUILDER_H

class SportsCardBuilder: public ICarBuilder
{
private:
    Car prodcutCar;

public:
    void BuildEngine() override;
    void BuildWheels() override;
    void BuildSunRoof() override;
    void BuildGPS() override;
    Car GetCar() override;
};

#endif