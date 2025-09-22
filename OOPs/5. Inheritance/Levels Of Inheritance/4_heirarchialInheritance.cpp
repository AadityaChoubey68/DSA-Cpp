#include <iostream>
using namespace std;

class Human //  <- Parent Class
{

protected:
    string Name;
    int age;

public:
    int weight;
    void InitName(string name)
    {
        Name = name;
    }
    void DisplayName()
    {
        cout << Name << endl;
    }
};

class Student : public Human //  <- Derived Class
{
    int roll_no;
    int Section;

public:
    Student(int roll_no, string name, int age)
    {
        this->roll_no = roll_no;
        this->Name = name;
        this->age = age;
    }
    void display()
    {
        cout << Name << " " << age << " " << roll_no << " " << endl;
    }
};

class Teacher : public Human
{
    int salary;

public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->Name = name;
        this->age = age;
    }
    void display()
    {
        cout << Name << " " << age << " " << salary << " " << endl;
    }
};

int main()
{
    Teacher t1(100, "Irwin", 50);
    t1.display();

    Student s1(23344, "aaditya", 21);
    s1.display();
}