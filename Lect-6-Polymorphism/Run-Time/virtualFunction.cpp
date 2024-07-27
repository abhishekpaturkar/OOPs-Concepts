#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class" << endl;
    }

    // By adding virtual keyword we expect to be redefind in the Child class
    virtual void hello()
    {
        cout << "Hello from Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child Class" << endl;
    }

    void hello()
    {
        cout << "Hello from Child class" << endl;
    }
};

int main()
{
    Child c;
    c.getInfo();
    return 0;
}