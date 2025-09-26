#include <iostream>
#include <set>
using namespace std;

// Only Unique value will be stored
// Store value in sorted order (ascending)
// Insertion, deletion, and search operations have logarithmic time complexity
// (0(log n)), making them fast for most use cases.
// Generally Implemented using Red-Black Tree
// We can sort it in descending Order also using greater<type>

class Person
{
public:
    string name;
    int age;

    bool operator<(const Person &other) const
    {
        return age < other.age;
    }
};

int main()
{
    set<int> s;

    s.insert(2);
    s.insert(12);
    s.insert(6);
    s.insert(22);
    s.insert(9);
    s.insert(2);

    s.erase(9);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    if (s.find(2) != s.end())
    {
        cout << "true<<enld;" << endl;
    }

    set<Person> s2;
    Person p1, p2, p3;
    p1.name = "aaditya";
    p1.age = 21;
    p2.name = "tushar";
    p2.age = 24;
    p3.name = "Himanshu";
    p3.age = 23;

    s2.insert(p1);
    s2.insert(p2);
    s2.insert(p3);

    for (auto it = s2.begin(); it != s2.end(); it++)
    {
        cout << it->age << " " << it->name << endl;
    }
}