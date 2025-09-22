#include <iostream>
using namespace std;

int pivotFinder(int arr[], int start, int end)
{
    int position = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[position], arr[i]);
            position++;
        }
    }
    return position - 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = pivotFinder(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int arr[10] = {4, 1, 6, 7, 3, 9, 7, 5, 2, 11};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}