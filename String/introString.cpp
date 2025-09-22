#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'p', 'p', 'l', 'e'};
    // cout << arr;
    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i];
    }

    string s = "Rohit Negi DSA";
    string s2 = "aaditya";
    string temp = s;
    s=s2;
    s2=temp;

    cout << s2;
}