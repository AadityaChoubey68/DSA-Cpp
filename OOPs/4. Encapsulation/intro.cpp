#include <iostream>
using namespace std;

// Encapsulation = binding data + the methods that operate on it into a single unit (class)
// while also restricting direct access to some of the object’s components.

class customer
{
    string name; // private variables
    int acc_num; // private variables
    int balance; // private variables
    static int total_mem;
    static int total_bal;

public: // <- Access modifier is here so no one can modify the actual private values above.
    customer(string n, int a, int b)
    {
        name = n;
        acc_num = a;
        balance = b;
        total_mem++;
        total_bal += balance;
    }

    void display()
    {
        cout << "The Name is " << name << " and the account number is " << acc_num << " and balane is " << balance << endl;
    }
    static void getTotal()
    {
        cout << "Total Members : " << total_mem << endl;
        cout << "Total Balance : " << total_bal << endl;
    }
    void deposit(int amount) // Abstraction -> Here user does not know how we are implementing deposit logic, so this is called Abstraction
    {
        if (amount > 0)
        {
            balance = balance + amount;
            total_bal += amount;
        }
    }
};

int customer::total_mem = 0;
int customer::total_bal = 0;

int main()
{
    customer c1("Tushar", 0, 5000);
    c1.deposit(100);
    // c1.balance = 100; Here we cannot do this because balance is private and protected
    c1.display();

    customer c2("Manish", 1, 55000);
    c2.display();
    customer c3("Himanshu", 2, 000);
    c3.display();
    customer c4("Dheeraj", 5, 22000);
    c4.display();
    customer::getTotal();
}