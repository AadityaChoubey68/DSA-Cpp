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

Node *CreateLinkedListRev(int arr[], int index, int size, Node *prev)
{
    if (index == size)
    {
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    return CreateLinkedListRev(arr, index + 1, size, temp);
}

int main()
{
    int arr[] = {2, 4, 6, 202, 10};
    Node *Head = CreateLinkedListRev(arr, 0, 5, NULL);

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}