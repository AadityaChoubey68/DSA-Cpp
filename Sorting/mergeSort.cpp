#include <iostream>
using namespace std;

void merge(int arr[], int start, int end, int mid)
{
    int i = start;
    int j = mid + 1;
    int index = 0;
    vector<int> temp(end - start + 1);
    while (i <= mid && j <= end)
    {
        if (arr[i] >= arr[j])
        {
            temp[index] = arr[j];
            index++;
            j++;
        }
        else
        {
            temp[index] = arr[i];
            index++;
            i++;
        }
    }
    while (i <= mid)
    {
        temp[index] = arr[i];
        index++;
        i++;
    }
    while (j <= end)
    {
        temp[index] = arr[j];
        index++;
        j++;
    }
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        index++;
        start++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end, mid);
}

int main()
{
    int arr[10] = {4, 1, 6, 7, 3, 9, 7, 5, 2, 11};
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}