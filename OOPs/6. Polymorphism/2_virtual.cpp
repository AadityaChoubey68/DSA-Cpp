#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu HU";
    }
    // virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bhow Bhow";
    }
};

int main()
{
    Animal *p;
    p = new Dog();
    p->speak();
}