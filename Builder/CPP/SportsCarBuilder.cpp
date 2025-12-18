#include "SportsCarBuilder.h"

void SportsCardBuilder::BuildEngine()
{
    prodcutCar.engine = "VS";
}

void SportsCardBuilder::BuildWheels()
{
    prodcutCar.wheels = 4;
}

void SportsCardBuilder::BuildSunRoof()
{
    prodcutCar.sunroof = true;
}

void SportsCardBuilder::BuildGPS()
{
    prodcutCar.gps = true;
}

Car SportsCardBuilder::GetCar()
{
    return prodcutCar;
}