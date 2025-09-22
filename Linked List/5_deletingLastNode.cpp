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

Node *CreateLinkedList(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    int arr[] = {2, 4, 6, 20, 10};
    Node *Head = CreateLinkedList(arr, 0, 5);

    if (Head != NULL)
    {
        Node *curr = Head;
        Node *prev = NULL;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        delete curr;
        prev->next = NULL;
    }

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}