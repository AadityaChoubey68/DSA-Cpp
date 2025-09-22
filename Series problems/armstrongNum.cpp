#include <iostream>
using namespace std;

bool IsArmstrong(int num)
{
    int rem, ans = 0;
    int count = 0;
    int temp = num;
    int original = num;
    while (temp)
    {
        rem = temp % 10;
        count++;
        temp = temp / 10;
    }
    rem = 0;
    while (num)
    {
        rem = num % 10;
        ans = ans + pow(rem, count);
        num = num / 10;
    }
    if (ans == original)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int Num;
    cout << "Enter the Number : ";
    cin >> Num;
    cout << IsArmstrong(Num);
}