#include <iostream>
#include <unordered_set>
using namespace std;

// It contain only unique elements
// Search, insert and removal have average constant time Complexity
// It uses hashing techniuqe to achieve it

int main()
{
    unordered_set<int> s;

    s.insert(2);
    s.insert(12);
    s.insert(6);
    s.insert(22);
    s.insert(9);
    s.insert(2);

    unordered_multiset<int> s1; // duplicate elements present too
    s1.insert(2);
    s1.insert(12);
    s1.insert(6);
    s1.insert(22);
    s1.insert(9);
    s1.insert(2);
    s1.insert(2);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // if (s.find(2) != s.end())
    // {
    //     cout << "true<<enld;" << endl;
    // }
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}