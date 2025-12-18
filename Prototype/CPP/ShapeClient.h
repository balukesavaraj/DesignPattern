#ifndef SHAPE_CLIENT_H
#define SHAPE_CLIENT_H

#include"IShape.h"

class ShapeClient
{
private:
    IShape* shapePrototype;

public:
    ShapeClient(IShape* protoObject):shapePrototype(protoObject){}

    std::unique_ptr<IShape> CloneShape()
    {
        return shapePrototype->Clone();
    }
};

#endif