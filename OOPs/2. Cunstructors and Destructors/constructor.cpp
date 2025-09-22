#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_number;

public:
    customer() //  <-- Default COnstructor
    {
        name = "Aaditya";
        account_number = 1234;
    }
    customer(string name, int account_number) //  <-- Parameterized constructor
    {
        this->name = name;
        this->account_number = account_number;
    }
    customer(string n) //  <-- Parameterized constructor with only 1 Arguments
    {
        name = n;
    }

    // So as we saw , we declared 3 constructors and they'll have same name only but with different parameters
    // This is called Constructor Overloading
    void display()
    {
        cout << "Name is : " << name << " and account number is : " << account_number << endl;
    }
};

class car
{
    string name;
    string model;

public:
    inline car(string a, string b) : name(a), model(b) // <-- Inline constructor
    {
    }
    car(car &b) // <-- Copy Constructor
    {
        name = b.name;
        model = b.model;
    }
    void display()
    {
        cout << "Name is : " << name << " and model is : " << model << endl;
    }
};

int main()
{
    customer c1("Rohit", 836488); //  <--Calling Parameterized constructor
    c1.display();
    customer c2; //  <--Calling Default constructor
    c2.display();
    customer c3("Shyam");
    c3.display();

    car c4("Maruti", "Baleno"); // <-- Calling Inline constructor
    c4.display();
    car c5(c4); // <--Calling Copy Constructor
    c5.display();
}