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

    int arr[] = {2, 4, 6, 8, 10};

    Node *Head = NULL;
    Node *Tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}