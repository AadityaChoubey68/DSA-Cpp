#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int a)
    {
        Node *temp = new Node(a);
        temp->next = top;
        top = temp;
        size++;
    }

    void pop()
    {
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peak()
    {
        return top->data;
    }

    bool isEmply()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(36);
    s.push(66);
    s.push(62);
    s.push(16);

    cout << s.isEmply() << endl;
    cout << s.peak() << endl;
    cout << s.isSize() << endl;
}