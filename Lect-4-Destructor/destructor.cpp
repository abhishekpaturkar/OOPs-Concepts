#include <string>
#include <iostream>

using namespace std;

class Student
{

public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called. " << endl;
        // To delete/free the dynamically allocated memory
        delete cgpaPtr;
        // If we do not free the dynamically allocated memory. 'Memory Leak' issue arises.
        // Memory Leak -> Wastage of memory.
    }
};

int main()
{
    Student s1("John", 8.5);
    s1.getInfo();
    return 0;
}
