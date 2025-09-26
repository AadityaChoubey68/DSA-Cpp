#include <iostream>
#include <utility>
using namespace std;

int main()
{
    // pair<string, int> p;
    // p = make_pair("Aadi", 30);
    // p.first = "aadi";
    // p.second = 22;

    // name age weight
    pair<string, pair<int, int>> p;

    // p.first = "Aaditya";
    // p.second.first = 22;
    // p.second.second = 62;

    p = make_pair("aadi",make_pair(22,63));

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
}