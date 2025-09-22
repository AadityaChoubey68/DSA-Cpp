#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printQueue(queue<int> qt)
{
    while (!qt.empty())
    {
        int i = qt.front();
        cout << i << " ";
        qt.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 6, 2, 7, 8, 11};
    queue<int> qt;

    int left = 0;
    int right = 2;
    while (left <= right)
    {
        qt.push(arr[left]);
        left++;
    }
    right++;
    printQueue(qt);
    while (right < arr.size())
    {
        qt.pop();
        qt.push(arr[right]);
        printQueue(qt);
        right++;
    }
}