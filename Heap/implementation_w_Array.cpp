#include <iostream>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int x)
    {
        if (size == total_size)
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

    void heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if (left < size && arr[left] > arr[index])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[index])
        {
            largest = right;
        }

        if (largest != index)
        {
            swap(arr[index], arr[largest]);
            heapify(largest);
        }
    }

    void deleteNode()
    {
        if (size == 0)
        {
            cout << "Heapp Underflow !!!!" << endl;
        }
        cout << "Deleted Node " << arr[0] << endl;
        arr[0] = arr[size - 1];
        size--;
        if (size == 0)
        {
            return;
        }
        heapify(0);
    }
};

int main()
{
    MaxHeap m1(5);
    m1.insert(2);
    m1.insert(12);
    m1.insert(6);
    m1.insert(8);
    m1.insert(9);
    m1.insert(1);
    m1.printHeap();
    m1.deleteNode();
    m1.printHeap();
    m1.deleteNode();
    m1.printHeap();
    m1.deleteNode();
    m1.printHeap();
}