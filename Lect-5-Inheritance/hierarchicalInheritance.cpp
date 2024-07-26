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

int main()
{
    Teacher t;
    Student s;

    // Student
    cout << "Student" << endl;

    s.name = "Rahul";
    s.age = 21;
    s.rollNo = 101;

    cout << s.name << " " << s.age << " " << s.rollNo << endl;

    // Teacher
    cout << "Teacher" << endl;

    t.name = "Samay";
    t.age = 45;
    t.subject = "C++";
    t.salary = 10000;

    cout << t.name << " " << t.age << " " << t.subject << " " << t.salary << endl;

    return 0;
}
