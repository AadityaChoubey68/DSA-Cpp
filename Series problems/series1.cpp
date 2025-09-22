#include <iostream>
using namespace std;
char Convert(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}

int main()
{
    char ch;
    cout << "Enter the Name : ";
    cin >> ch;
    cout << Convert(ch);
}