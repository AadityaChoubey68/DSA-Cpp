#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr;

    int *p1 = new int[11];
    cout << *p1;

    delete ptr;
    delete []p1;
}