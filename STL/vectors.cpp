#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(14);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    vector<int> v1(5, 1);
    cout << "Size of v1 : " << v1.size() << endl;
    cout << "Capacity of v1 : " << v1.capacity() << endl;
}