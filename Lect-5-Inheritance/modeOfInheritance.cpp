// Modes of Inheritance (9 combinations):

// 1. public inheritance of public members:
// class B : public A
// Public members of A become public members of B
// class A { public: int x; };
// class B : public A {};

// 2. public inheritance of protected members:
// class B : public A
// Protected members of A become protected members of B
// class A { protected: int x; };
// class B : public A {};

// 3. public inheritance of private members:
// class B : public A
// Private members of A are not accessible in B
// class A { private: int x; };
// class B : public A {};

// 4. protected inheritance of public members:
// class B : protected A
// Public members of A become protected members of B
// class A { public: int x; };
// class B : protected A {};

// 5. protected inheritance of protected members:
// class B : protected A
// Protected members of A become protected members of B
// class A { protected: int x; };
// class B : protected A {};

// 6. protected inheritance of private members:
// class B : protected A
// Private members of A are not accessible in B
// class A { private: int x; };
// class B : protected A {};

// 7. private inheritance of public members:
// class B : private A
// Public members of A become private members of B
// class A { public: int x; };
// class B : private A {};

// 8. private inheritance of protected members:
// class B : private A
// Protected members of A become private members of B
// class A { protected: int x; };
// class B : private A {};

// 9. private inheritance of private members:
// class B : private A
// Private members of A are not accessible in B
// class A { private: int x; };
// class B : private A {};

#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Base class constructor invoked" << endl;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    ~Person()
    {
        cout << "Base class destructor invoked" << endl;
    }
};

// If we inherit as Private
// Then the Name & Age from Person class is treated as Private in Student class
class Student : private Person
{
    // Name & Age from Person class
public:
    int rollNo;

    Student()
    {
        cout << "Derived class constructor invoked" << endl;
    }

    // Parameterized constructor calling base class constructor
    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No.: " << rollNo << endl;
    }

    ~Student()
    {
        cout << "Derived class destructor invoked" << endl;
    }
};

int main()
{
    Student s1("John", 20, 101);
    s1.getInfo();

    // As we inherited as Private
    // So we cannot access the name & age from Person class
    // This line below will give error
    // cout << s1.name << endl;
    return 0;
}
