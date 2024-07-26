#include <string>
#include <iostream>

// The shallow is problemetic when the object has dynamically allocated memory
// The pointer is point to the same address space
// So when you change the value inside the copy, the original object will also change

// This problem tackle by using deep copy
// The deep copy also copies the dynamically allocated memory of that object

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

    // The below constructor makes a deep copy of data
    Student(Student &s)
    {
        this->name = s.name;
        cgpaPtr = new double;
        *(cgpaPtr) = *s.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("John", 8.5);

    // ----------- This problem is Due to shallow copy of data ---------------
    // Student s2(s1); // s2 is a copy of s1
    // s1.getInfo();   // CGPA : 8.5

    // Changing cgpa of s2 to 9.2
    // *(s2.cgpaPtr) = 9.2;

    // s1.getInfo(); // s1 is changes as well (CGPA : 9.2)

    // ------------- Deep Copy------------------
    Student s2(s1); // s2 is a copy of s1
    s1.getInfo();   // CGPA : 8.5

    s2.name = "Roman";
    *(s2.cgpaPtr) = 9.2;

    cout << "s1 : " << endl;
    s1.getInfo();
    // Name: John
    // CGPA : 8.5

    cout << "s2 : " << endl;
    s2.getInfo();
    // Name : Roman
    // CGPA: 9.2
}
