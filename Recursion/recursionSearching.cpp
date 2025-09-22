#include <iostream>
using namespace std;

bool linearSearch(int arr[], int index, int target)
{
    if (index == -1)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    return linearSearch(arr, index - 1, target);
}

bool binarySearch(int arr[], int start, int end, int target)
{
    if (end < start)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, target);
    }
}

int main()
{
    int arr[5] = {1, 4, 18, 32, 93};
    cout << linearSearch(arr, 4, 32) << endl;
    cout << binarySearch(arr, 0, 4, 93) << endl;
}