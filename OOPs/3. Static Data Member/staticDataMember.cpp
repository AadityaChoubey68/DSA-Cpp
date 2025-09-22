#include <iostream>
using namespace std;

class customer
{
public:
    string name;
    int acc_num;
    int balance;
    static int total_mem; // <-- static data member in class
    static int total_bal;

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
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            total_bal += amount;
        }
    }
};

int customer::total_mem = 0; //  <-- definition (and initialization) of a static data member
int customer::total_bal = 0;

int main()
{
    customer c1("Tushar", 0, 5000);
    c1.deposit(100);
    c1.display();
    customer c2("Manish", 1, 55000);
    c2.display();
    customer c3("Himanshu", 2, 000);
    c3.display();
    customer c4("Dheeraj", 5, 22000);
    c4.display();
    customer::getTotal();
}