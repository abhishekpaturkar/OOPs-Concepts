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
};

class Child : public Parent
{
public:
    // This will override the method of the parent class
    void getInfo()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    Child c;
    c.getInfo();
    return 0;
}