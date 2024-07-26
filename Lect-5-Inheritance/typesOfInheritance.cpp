#include <iostream>
using namespace std;

// ----- Single Inheritance -----
// In single inheritance, a derived class inherits from a single base class

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

// Usage:
// Dog dog;
// dog.eat();  // Inherited from Animal
// dog.bark(); // Dog's own method

// ----- Multiple Inheritance -----
// In multiple inheritance, a derived class inherits from two or more base classes

class FlyingObject
{
public:
    void fly()
    {
        cout << "Object is flying" << endl;
    }
};

class Bird : public Animal, public FlyingObject
{
public:
    void chirp()
    {
        cout << "Bird is chirping" << endl;
    }
};

// Usage:
// Bird bird;
// bird.eat();   // From Animal
// bird.fly();   // From FlyingObject
// bird.chirp(); // Bird's own method

// ----- Multilevel Inheritance -----
// In multilevel inheritance, a derived class inherits from another derived class

class Mammal : public Animal
{
public:
    void giveBirth()
    {
        cout << "Mammal is giving birth" << endl;
    }
};

class Human : public Mammal
{
public:
    void speak()
    {
        cout << "Human is speaking" << endl;
    }
};

// Usage:
// Human human;
// human.eat();      // From Animal (grandparent)
// human.giveBirth(); // From Mammal (parent)
// human.speak();    // Human's own method

// ----- Hierarchical Inheritance -----
// In hierarchical inheritance, multiple derived classes inherit from a single base class

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing" << endl;
    }
};

// Usage:
// Dog dog;
// Cat cat;
// Both inherit from Animal, but have their own specific methods

// ----- Hybrid (Virtual) Inheritance -----
// Hybrid inheritance is a combination of two or more types of inheritance

class Vehicle
{
public:
    void move()
    {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : virtual public Vehicle
{
public:
    void drive()
    {
        cout << "Car is being driven" << endl;
    }
};

class Boat : virtual public Vehicle
{
public:
    void sail()
    {
        cout << "Boat is sailing" << endl;
    }
};

class AmphibiousVehicle : public Car, public Boat
{
public:
    void transform()
    {
        cout << "Amphibious vehicle is transforming" << endl;
    }
};

// Usage:
// AmphibiousVehicle av;
// av.move();      // From Vehicle (resolved using virtual inheritance)
// av.drive();     // From Car
// av.sail();      // From Boat
// av.transform(); // AmphibiousVehicle's own method

int main()
{
    Vehicle vehicle;
    vehicle.move();

    Car car;
    car.move();  // Inherited from Vehicle
    car.drive(); // Car's own method

    Boat boat;
    boat.move(); // Inherited from Vehicle
    boat.sail(); // Boat's own method

    AmphibiousVehicle av;
    av.move();      // Inherited from Vehicle (through virtual inheritance)
    av.drive();     // Inherited from Car
    av.sail();      // Inherited from Boat
    av.transform(); // AmphibiousVehicle's own method

    return 0;
}
