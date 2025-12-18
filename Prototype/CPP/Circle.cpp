#include "Circle.h"

std::unique_ptr<IShape> Circle::Clone() const
{        
    return std::make_unique<Circle>(*this);
}

void Circle::Draw() const
{
    std::cout << "Circle wth radius " << iRadius << std::endl;
}