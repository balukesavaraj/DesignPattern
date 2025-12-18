#include "Rectangle.h"

std::unique_ptr<IShape> Rectangle::Clone() const
{
    return std::make_unique<Rectangle>(*this);
}

void Rectangle::Draw() const
{
    std::cout << "Rectangle " << iWidth << "x" << iHeight << std::endl;
}