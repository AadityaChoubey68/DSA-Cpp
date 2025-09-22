#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 4, 1, 3, 2, 7};
    int n = 6;
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = 0;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}