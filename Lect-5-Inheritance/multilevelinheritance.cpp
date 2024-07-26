#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollNo;
};

class GraduateStudent : public Student
{
public:
    string researchArea;

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main()
{
    GraduateStudent g1;
    g1.name = "Rahul";
    g1.age = 25;
    g1.rollNo = 100;
    g1.researchArea = "Computer Science";

    g1.getInfo();

    return 0;
}