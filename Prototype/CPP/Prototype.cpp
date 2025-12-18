#include <iostream>

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

}