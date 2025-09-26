#include <iostream>
#include <map>
using namespace std;

// It store data in key-value pair
// Key should be unique
// It uses Red-black Tree or AVL for implementation
// Insertion, deletion, and search operations have logarithmic time complexity
// (0(log n)), making them fast for most use cases.

int main()
{
    map<int, int> m;
    m.insert(make_pair(2, 500));
    m.insert(make_pair(12, 400));
    m.insert(make_pair(22, 600));
    m.insert(make_pair(2, 800));
    m.insert(make_pair(42, 1000));
    m[100] = 60;
    m[1] = 60000;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}