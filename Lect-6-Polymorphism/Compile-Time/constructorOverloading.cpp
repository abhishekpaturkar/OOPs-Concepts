#include <string>
#include <iostream>
using namespace std;

// Classic example of Polymorphism is Contructor Overloading

// Compile Time Polymorphism
class Student
{
public:
    string name;
    int rollNo;

    // Non-parameterized Constructor
    Student()
    {
        cout << "Non-parameterized Constructor" << endl;
    }

    // Parameterized Constructor
    Student(string name, int rollNo)
    {
        cout << "Parameterized Constructor" << endl;
        this->name = name;
        this->rollNo = rollNo;
    }
};

int main()
{
    Student s1;
    Student s2("John", 101);
    return 0;
}