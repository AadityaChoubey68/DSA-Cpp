#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
// Converting an array into Linked list and Printing it

int main()
{
    Node *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 4; i >= 0; i--)
    {

        if (Head == NULL)
        {
            Node *temp = new Node(arr[i]);
            Head = temp;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            Head->prev = temp;
            temp->next = Head;
            Head = temp;
        }
    }

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}