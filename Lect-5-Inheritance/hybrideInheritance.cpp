#include <iostream>
#include <string>
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

class Teacher : public Person
{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher
{
public:
    string TASubject;
};

class GraduateStudent : public Student
{
public:
    string researchSubject;
};

int main()
{
    GraduateStudent g;

    g.name = "Rahul";
    cout << g.name << endl;

    TA t;
    t.TASubject = "CS";

    return 0;
}
