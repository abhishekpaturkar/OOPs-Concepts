#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher
{
};

int main()
{
    TA t;
    t.name = "Rahul";
    t.rollNo = 101;
    t.subject = "C++";
    t.salary = 10000;

    cout << t.name << " " << t.rollNo << " " << t.subject << " " << t.salary << endl;

    return 0;
}
