#include <iostream>
using namespace std;



class MaxHeap
{
public:
    int *arr;
    int size;
    int totalSize;

    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        totalSize = n;
    }

    void insert(int x)
    {

        if (size == totalSize)
        {
            cout << "Heap OverfloWWWWWWWWWW!!!" << endl;
            return;
        }

        arr[size] = x;
        int index = size;
        size++;

        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }
        cout << x << " is inserted in Max-Heappp !!!" << endl;
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int index, int size)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, size);
    }
}

void sortArray(MaxHeap &m1)
{
    for (int i = m1.size - 1; i > 0; i--)
    {
        swap(m1.arr[0], m1.arr[i]);
        heapify(m1.arr, 0, i);
    }
}

int main()
{
    MaxHeap m1(10);
    int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
    for (int i = 0; i < 10; i++)
    {
        m1.insert(arr[i]);
    }

    m1.printHeap();

    sortArray(m1);

    m1.printHeap();
}