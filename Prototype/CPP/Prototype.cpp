#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeClient.h"
#include "ShapeRegistry.h"

// Key
// Create new objects by copying an existing object.

// Prototype is a creational design pattern where new objects are created by 
// cloning existing objects instead of instantiating them via constructors.

// When to Use
// Object creation is costly (e.g., deep initialization, database calls).
// You want to avoid tight coupling to concrete classes.
// You need many objects with similar state but slight variations.

// UML View (Conceptually)
// Prototype: declares a clone() method
// ConcretePrototype: implements cloning
// Client: creates objects by calling clone()

// Risk
// Shallow copy issues - If the object owns pointers/resources, cloning must perform a deep copy 
// to avoid shared state bugs.

// Benifit
// New object variations can be introduced by registering new prototypes, without modifying client code
// New types are data-driven
// System becomes plugin-like
// Behavior can be extended at runtime
// Prototype + Registry turns object creation from code logic into configuration.

int main()
{
    // Consider that this happens somewhere, but client knows only original
    std::unique_ptr<IShape> Original = std::make_unique<Circle>(10);

    //Clone the object
    std::unique_ptr<IShape> Copy = Original->Clone();
    Copy->Draw();

    // Another way with client class
    ShapeClient client(new Circle(20));
    std::unique_ptr<IShape> copyTheClient = client.CloneShape();
    copyTheClient->Draw();

    // Registry method of using prototyp
    ShapeRegistry registry;
    registry.RegisterPrototype("Big_Circle", std::make_unique<Circle>(25)); 
    registry.RegisterPrototype("Rectangle", std::make_unique<Rectangle>(4,6));

    auto protoCircle = registry.Create("Big_Circle");
    auto protoRectanlge = registry.Create("Rectangle");
    
    protoCircle->Draw();
    protoRectanlge->Draw(); 
}