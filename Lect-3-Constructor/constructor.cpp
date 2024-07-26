#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Constructor

    // 1. Non-parameterized Constructor
    Teacher()
    {
        salary = 10000;
    }

    // 2. Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // 3. Copy Constructor
    Teacher(Teacher &t) // pass by reference
    {
        this->name = t.name;
        this->dept = t.dept;
        this->subject = t.subject;
    }

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
    // Constructor Invoked
    Teacher t1;                               // Non Parameterized Constructor
    Teacher t2("John", "CSE", "Maths", 5000); // Parameterized Constructor
    Teacher t3(t2);                           // Copy Constructor (cpp also have default copy constructor)

    cout << t1.getSalary() << endl;

    cout << "T2 Name : " << t2.name << endl;

    cout << "T3 Name : " << t3.name << endl;
    return 0;
}