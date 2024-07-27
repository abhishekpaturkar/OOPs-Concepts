#include <iostream>
#include <string>
using namespace std;

// Abstract Class
// The below class have a "pure virtual function", hence this class is Abstract class.
class Shape
{
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "This is a Circle" << endl;
    }
};

int main()
{
    // Shape s; -> This will throw an error 'Shape' is an abstract class.
    Circle c;
    c.draw();

    return 0;
}