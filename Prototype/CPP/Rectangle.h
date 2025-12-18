#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"IShape.h"
class Rectangle: public IShape
{
private:
    int iWidth, iHeight;
public:
    Rectangle(int w, int h):iWidth(w),iHeight(h){}

    std::unique_ptr<IShape> Clone() const override;
    void Draw() const override;
};
#endif