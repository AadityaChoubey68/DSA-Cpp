#include <iostream>
using namespace std;

// Multilevel Inheritance
// 👉 A class inherits from a class, which itself inherits from another class.

class Person
{
protected:
    string name;

public:
    void introduction()
    {
        cout << "Hi my name is " << name << endl;
    }
};

class Employee : public Person // inherits from Person
{                              // |
protected:                     // |
    int salary;                // |
                               // |
public:                        // \/
    void Amount()
    {
        cout << "And my salary is : " << salary << endl;
    }
};

class Manager : public Employee // inherits from Employee
{

protected:
    string department;

public:
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void Department()
    {
        cout << "And my department is " << department << endl;
    }
};

int main()
{
    Manager m1("Aaditya", 45738387, "Software");
    m1.introduction();
    m1.Amount();
    m1.Department();
}