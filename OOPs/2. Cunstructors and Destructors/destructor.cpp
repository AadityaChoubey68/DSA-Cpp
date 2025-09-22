#include <iostream>
using namespace std;

class customer
{
    string name;
    int *acc_num;

public:
    customer() //  <-- Constructor
    {
        name = "Suresh";
        acc_num = new int;
        *acc_num = 16723;
    }
    ~customer() //  <-- Destructor
    {
        delete acc_num;
    }
    void display()
    {
        cout << "Name is " << name << " account number is " << *acc_num;
    }
};

int main()
{
    customer c1;
    c1.display();
}