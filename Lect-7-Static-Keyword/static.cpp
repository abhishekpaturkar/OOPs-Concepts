#include <iostream>
#include <string>
using namespace std;

void func()
{
    // Static variable in a function
    // It retains its value between function calls and is initialized only once
    static int x = 0;
    cout << "X : " << x << endl;
    x++;
}

// Static member variable in a class
// It is shared by all objects of the class and exists even without creating an object
class A
{
public:
    static int count; // Declaration of static member variable

    A()
    {
        count++; // Incrementing the shared count
        cout << "Constructor called. Object count: " << count << endl;
    }

    ~A()
    {
        count--; // Decrementing the shared count
        cout << "Destructor called. Object count: " << count << endl;
    }

    static void printCount() // Static member function
    {
        cout << "Current object count: " << count << endl;
    }
};

// Definition of static member variable
int A::count = 0;

int main()
{
    cout << "Demonstrating static variable in function:" << endl;
    func(); // 0
    func(); // 1
    func(); // 2
    func(); // 3

    cout << "Demonstrating static member in class:" << endl;
    A a1;
    A a2;
    A::printCount(); // Calling static member function

    cout << "\nDemonstrating static object:" << endl;
    static A staticObj; // Static object, destroyed only when program ends

    // When the static object is created it is available till the Lifetime of the program
    // Output : Constructor called. Object count:
    //          End of the Main function
    //          Destructor called. Object count:

    cout << "End of the Main function" << endl;
    return 0;
}