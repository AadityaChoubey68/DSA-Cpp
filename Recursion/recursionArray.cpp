#include <iostream>
using namespace std;

int n = 5;

void printArr(int arr[], int index)
{
    if (index < 0)
    {
        return;
    }
    printArr(arr, index - 1);
    cout << arr[index] << endl;
}

int sumOfArr(int arr[], int index)
{
    if (index < 0)
    {
        return 0;
    }
    return arr[index] + sumOfArr(arr, index - 1);
}

int minInArr(int arr[], int index)
{
    if (index < 0)
    {
        return INT_MAX;
    }
    return min(arr[index], minInArr(arr, index - 1));
}

int main()
{
    int arr[5] = {10, 12, 15, 3, 9};
    cout << minInArr(arr, 4);
}