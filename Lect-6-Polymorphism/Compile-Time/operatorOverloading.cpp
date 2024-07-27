#include <iostream>
using namespace std;

// Example of Compile time polymorphism

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Operator overloading for addition
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Method to display the complex number
    void display()
    {
        cout << real << " + " << imag << "i" << std::endl;
    }
};

int main()
{
    // Test Complex class
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);
    Complex c3 = c1 + c2;

    // Display the results
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c3 = c1 + c2 = ";
    c3.display();

    return 0;
}
