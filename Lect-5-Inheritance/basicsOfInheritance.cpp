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

class Student : public Person
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
    return 0;
}