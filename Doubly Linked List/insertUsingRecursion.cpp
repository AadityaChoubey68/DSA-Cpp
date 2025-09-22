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

Node *createUsingRec(int arr[], int index, int n, Node *back)
{
    if (index == n)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createUsingRec(arr, index + 1, n, temp);
    return temp;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};

    Node *back = NULL;
    Node *Head = createUsingRec(arr, 0, 5, back);

    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}