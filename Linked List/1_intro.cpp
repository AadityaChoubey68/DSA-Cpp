#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    Node *Head;
    Head = new Node(25);

    cout << Head->data << endl;
    cout << Head->next << endl;
}