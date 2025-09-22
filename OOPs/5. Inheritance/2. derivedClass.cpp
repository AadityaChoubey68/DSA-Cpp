#include <iostream>
using namespace std;

class Human //  <- Parent Class
{
private:
    string Name;

protected:
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
};
int main()
{
    Student A;
    // A.Name="AAdiya"; <- not allowed (private Human);
    // A.age = 10;  <- not allowed ('age' is a protected member of 'Human')
    A.weight = 20; // <- Allowed
    A.InitName("Okayis");
    A.DisplayName();
}