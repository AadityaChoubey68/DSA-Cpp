#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int rear;
    int front;
    int size;

public:
    Queue(int s)
    {
        arr = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }

    void push(int a)
    {
        if (isEmpty())
        {
            front = 0;
            rear = 0;
            arr[0] = a;
        }
        else if (isFull())
        {
            cout << "QUEUE OVERFROW" << endl;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = a;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "QUEUE UNDERFLOW" << endl;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = front + 1;
            }
        }
    }

    int First()
    {
        if (isEmpty())
        {
            cout << "QUEUE UNDERFLOW" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == size-1;
    }

    void displayElement()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void displayAll()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q1(6);
    q1.push(3);
    q1.push(13);
    q1.push(93);
    q1.pop();
    q1.pop();
    q1.push(178);
    q1.push(91);
    q1.push(12);
    q1.push(47);
    cout << q1.First() << endl;
    cout << q1.isEmpty() << endl;
    cout << q1.isFull() << endl;
    q1.displayElement();
    q1.displayAll();
}