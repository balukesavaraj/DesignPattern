#include<iostream>
#include"SportsCarBuilder.h"
#include"Director.h"
#include"Car.h"

// Key:
// Same construction process can create different representations.

// Participants
// Product – the complex object being built(Car). It can have interface and concerte class as well.
// Builder – abstract interface (ICardBuilder)
// ConcreteBuilder – implements building steps
// Director (optional) – defines the construction order

int main()
{
    SportsCardBuilder builder;
    Director director;

    director.Constrct(builder);
    Car productCar = builder.GetCar();
    productCar.Show();
    return 0;
}