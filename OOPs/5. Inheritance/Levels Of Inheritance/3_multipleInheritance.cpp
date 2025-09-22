#include <iostream>
using namespace std;

// Multiple Inheritance
// 👉 A class inherits from more than one base class.

class Youtuber
{
protected:
    int subscriber;

public:
    void introduction()
    {
        cout << "Hi my subs are " << subscriber << endl;
    }
};

class Engineer
{
protected:
    int salary;

public:
    void Amount()
    {
        cout << "And my salary is : " << salary << endl;
    }
};

class Edtech : public Youtuber, public Engineer // inherits from Youtuber and Engineer
{

protected:
    string name;

public:
    Edtech(int subscriber, int salary, string name)
    {
        this->subscriber = subscriber;
        this->salary = salary;
        this->name = name;
    }

    void Edtect_Intro()
    {
        cout << "my name is " << name << endl;
        Amount();
        introduction();
    }
};

int main()
{
    Edtech m1(123344, 45738387, "Aaditya");
    m1.Edtect_Intro();
}