#include<iostream>
#include<string>

#ifndef CAR_H
#define CAR_H

// This is product - has composite of objects all together forms the product
class Car
{
public:
    std::string engine;
    int wheels;
    bool sunroof;
    bool gps;

    void Show() const;
};

#endif
