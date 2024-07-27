#include <iostream>
using namespace std;

// Base class
class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

// Derived class B
class B : public A
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};

// Derived class C
class C : public A
{
public:
    void show()
    {
        cout << "Class C" << endl;
    }
};

// Class D, inheriting from both B and C
class D : public B, public C
{
    // Diamond problem occurs here
};

int main()
{
    D d;
    // d.show(); // Ambiguous call, won't compile

    // To fix the diamond problem, use virtual inheritance:
    // class B : virtual public A { ... };
    // class C : virtual public A { ... };

    return 0;
}

// Explanation of the Diamond Problem:
// The diamond problem occurs in multiple inheritance when a class inherits from two classes
// that have a common base class. In this example, class D inherits from both B and C,
// which both inherit from A. This creates ambiguity when trying to access members of A through D.

// How to fix it:
// 1. Use virtual inheritance when B and C inherit from A:
//    This ensures only one instance of A is inherited by D.
//    Example: class B : virtual public A { ... };
//             class C : virtual public A { ... };

// 2. Use scope resolution to specify which version of the function to call:
//    Example: d.B::show(); or d.C::show();

// 3. Override the ambiguous function in the derived class (D in this case)
//    to explicitly choose which version to use or provide a new implementation.
