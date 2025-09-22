#include <iostream>
#include <deque>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int a)
    {
        data = a;
        next = NULL;
        prev = NULL;
    }
};

class Deque
{

    Node *front;
    Node *rear;

public:
    Deque()
    {
        front = rear = NULL;
    }

    void push_front(int a)
    {
        if (front == NULL)
        {
            front = rear = new Node(a);
            return;
        }
        else
        {
            Node *temp = new Node(a);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    void push_back(int a)
    {
        if (rear == NULL)
        {
            front = rear = new Node(a);
            return;
        }
        else
        {
            Node *temp = new Node(a);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    void pop_front()
    {
        if (front == NULL)
        {
            return;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            front->prev = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        if (rear == NULL)
        {
            return;
        }
        Node *temp = rear;
        rear = rear->prev;
        delete temp;
        if (rear)
        {
            rear->next = NULL;
        }
        else
        {
            front = NULL;
        }
    }

    int start()
    {
        if (front == NULL)
        {
            return -1;
        }
        else
        {
            return front->data;
        }
    }

    int last()
    {
        if (rear == NULL)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};

int main()
{
    Deque d;
    d.push_back(2);
    d.push_back(2);
    d.push_front(5);
    d.push_front(52);
    d.push_back(222);
    d.push_front(15);
    d.pop_front();
    deque<int> dq1 = {1, 2, 3, 4, 5};
    cout << d.start() << endl;
    cout << d.last() << endl;
    cout << dq1[3];
}