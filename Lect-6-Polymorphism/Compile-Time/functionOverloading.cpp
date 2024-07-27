#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "Int : " << x << endl;
    }

    void show(char c)
    {
        cout << "Char : " << c << endl;
    }
};

int main()
{
    Print p;
    p.show(3);
    p.show('A');
}