#ifndef ISHAPE_H
#define ISHAPE_H

#include<iostream>
#include<memory>

class IShape{
public:
    virtual ~IShape() = default;
    virtual std::unique_ptr<IShape> Clone() const = 0;
    virtual void Draw() const = 0; 
};

#endif