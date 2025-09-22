#include <iostream>
using namespace std;

class Human
{
private:
    string name;

protected:
    int age;

public:
    int weight;

    void display()
    {
        cout << name << endl;
        cout << age << endl;
        cout << weight << endl;
    }
};

int main()
{
    Human H1;
    // H1.name; X not Allowed -> private
    // H1.age; X not Allowed -> protected

    //  /
    H1.weight=10; // \/ Allowed -> public
    H1.display();
}