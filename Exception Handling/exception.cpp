// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// errors/issues. Exception occurs during the running of the program

// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, age;

public:
    Customer(string name, int balance, int age)
    {
        this->name = name;
        this->balance = balance;
        this->age = age;
    }
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            throw "Amount should be Greater than 0";
        }
        balance += amount;
        cout << "Deposited " << amount << " successfully!!!" << endl;
    }
    void withdraw(int amount)
    {
        if (amount < 0)
        {
            throw "Amount should be Greater than 0";
        }
        else if (amount > balance)
        {
            throw "Insuffecient Balance";
        }
        balance -= amount;
        cout << "Debited " << amount << " successfully!!!" << endl;
    }
};

int main()
{
    try
    {

        Customer c1("aaditya", 90000, 21);
        c1.deposit(0);
        c1.withdraw(100000);
    }
    catch (const char *e)
    {
        cout << "Exception Occoured : " << e;
    }
}