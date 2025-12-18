#ifndef CIRCLE_H
#define CIRCLE_H

#include"IShape.h"

class Circle : public IShape
{
private:
    int iRadius;
public:
    Circle(int r):iRadius(r){}
    std::unique_ptr<IShape> Clone() const override;
    void Draw() const override;
};
#endif