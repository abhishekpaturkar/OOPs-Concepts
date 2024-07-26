#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    // Data Hiding
    double balance;
    string password;

public:
    string accountNumber;
    string customerName;
};

int main()
{
    Account a1;
    return 0;
}