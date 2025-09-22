#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    else
    {
        root->right = insert(root->right, target);
    }
    return root;
}

bool search(Node *root, int target)
{
    if (!root)
    {
        return false;
    }
    if (root->data == target)
    {
        return true;
    }
    return search(root->left, target) || search(root->right, target);
}

int main()
{
    int arr[] = {5, 3, 2, 4, 6, 7, 10};

    Node *root = NULL;
    for (int i = 0; i < 7; i++)
    {
        root = insert(root, arr[i]);
    }

    cout << search(root, 16);
}