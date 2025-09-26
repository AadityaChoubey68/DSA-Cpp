#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(5);
    l.push_back(20);

    cout << l.back() << endl;
    cout << l.front() << endl;

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    
}