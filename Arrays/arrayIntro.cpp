#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 6, 4, 4, 8, 5, 1};
    cout << sizeof(arr) << endl;
    int max = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max : " << max << endl;
    max = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == 8)
        {
            continue;
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Second Max : " << max;
}