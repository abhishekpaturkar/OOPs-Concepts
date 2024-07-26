#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Properties
    string name;
    string dept;
    string subject;

    // Methods or Member functions
    void changeDepartment(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double newSalary)
    {
        salary = newSalary;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "John";
    t1.dept = "CSE";
    t1.subject = "Maths";
    // t1.salary = 10000;  As salary is private, we can't access it

    t1.changeDepartment("Civil");
    t1.setSalary(20000);

    cout << "Name : " << t1.name << endl;
    cout << "Salary : " << t1.getSalary() << endl;

    return 0;
}