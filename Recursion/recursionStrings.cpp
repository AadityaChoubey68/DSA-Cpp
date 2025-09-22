#include <iostream>
using namespace std;
int n = 10;

bool checkPalindrome(string s, int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    if (s[start] != s[end])
    {
        return 0;
    }
    return checkPalindrome(s, start + 1, end - 1);
}

int countVowels(string s, int i, int count = 0)
{
    if (i == n)
    {
        return count;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        count++;
    }
    return countVowels(s, i + 1, count);
}

void revString(string &s, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(s[start], s[end]);
    revString(s, start + 1, end - 1);
}

void makeCapital(string &s, int i)
{
    if (i == n)
    {
        return;
    }
    s[i] = 'A' + (s[i] - 'a');
    makeCapital(s, i + 1);
}

int main()
{
    string s = "ausafakvmp";
    revString(s, 0, 9);
    makeCapital(s, 0);
    cout << s;
}