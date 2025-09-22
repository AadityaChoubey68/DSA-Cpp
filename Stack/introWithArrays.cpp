#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int n)
    {
        if (top == size)
        {
            cout << "Stack Overflow";
        }
        else
        {
            top++;
            arr[top] = n;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
        }
        else
        {
            top--;
        }
    }
    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
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
        return top + 1;
    }
};

int main()
{
    Stack s(7);
    s.push(2);
    s.push(19);
    s.push(22);
    s.push(1);
    s.push(5);
    s.push(-3);

    cout << s.isSize() << endl;
    cout << s.peak() << endl;
    cout << s.isEmpty() << endl;
}