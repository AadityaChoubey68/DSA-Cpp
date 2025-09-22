#include <iostream>

using namespace std;

int main()
{
    // Binary to decima;l
    int n = 15;
    int ans = 0;
    int rem = 0;
    int power = 0;
    while (n > 0)
    {
        cout << n << endl;
        rem = n % 2; // rem = n&1;
        ans = rem * pow(10, power++) + ans;
        cout << "rem : " << rem << endl;
        n = n / 2; // n>>1
    }
    cout << "ans : " << ans;
}