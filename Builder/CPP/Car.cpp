#include "Car.h" 
void Car::Show() const
{
    std::cout << "Engine: "  << engine
              << "Wheels: "  << wheels
              << "Sunroof: " << sunroof
              << "GPS: "     << gps << std::endl;
}