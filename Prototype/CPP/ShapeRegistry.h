#ifndef SHAPE_REGISTRY_H
#define SHAPE_REGISTRY_H

#include <unordered_map>
#include "IShape.h"

class ShapeRegistry
{
private:
    // Why std::unordered_map in the Prototype Registry?
    // Fast Lookup by Key (Primary Reason)
    //      Registry is essentially a lookup table
    //      unordered_map gives average O(1) lookup
    //      Order does not matter
    // Keys Are Semantic, Not Ordered
    //      So, map (tree-based, ordered) adds unnecessary overhead, unordered_map fits better
    // Registry Is Not a Collection API
    //      The registry is not meant for: Sorting, Traversal logic, Range operations
    //      It is a service
    std::unordered_map<std::string, std::unique_ptr<IShape>> prototypes;
public:
    // Note it is a move, i.e. the registry takes the ownership of the protoype of Shape
    void RegisterPrototype(const std::string& keyProtoName, std::unique_ptr<IShape> prototype)
    {
        prototypes[keyProtoName] = std::move(prototype);
    }

    std::unique_ptr<IShape> Create(const std::string& keyProtoName)
    {
        return prototypes.at(keyProtoName)->Clone();
    }
};

#endif