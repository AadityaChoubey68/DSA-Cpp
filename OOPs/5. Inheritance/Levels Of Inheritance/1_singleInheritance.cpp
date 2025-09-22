#include <iostream>
using namespace std;
// 1. Single Inheritance
// 👉 A class inherits directly from one base class.
class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        cout << "Default Human constructoe called" << endl;
    }
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Students : public Human // <-- Single Level Inheritance from HUMAN
{
protected:
    int roll_num;
    int grade;

public:
    Students()
    {
        cout << "Default Students Constructor Called" << endl;
    }
    Students(string name, int age, int roll_num, int grade) : Human(name, age) // <-- Constructor Inheritance
    {

        this->roll_num = roll_num;
        this->grade = grade;
    }
    void GetDetails()
    {
        cout << name << endl;
        cout << age << endl;
        cout << roll_num << endl;
        cout << grade << endl;
    }
};

int main()
{
    Students s1;
    Students s2("Manish", 26, 0456502721, 8);
    s2.GetDetails();
}