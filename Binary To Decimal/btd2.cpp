#include <iostream>
using namespace std;

int main()
{
    int ans=0, rem=0, power = 0;
    int num = 1101;
    while (num > 0)
    {
        rem = num % 10;
        ans = rem * pow(2, power++) + ans;
        num = num / 10;
    }
    cout << "Ans : " << ans;
}