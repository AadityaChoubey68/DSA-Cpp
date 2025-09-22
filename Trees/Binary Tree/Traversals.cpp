#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void preOrderTraversal(Node *root) // Node Left Right
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root) // Left Node Right
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) // Left Right Node
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    int x;
    cout << "Enter the Value of ROOT Node : ";
    cin >> x;
    int first, second;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the LEFT child of " << temp->data << " node : ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << "Enter the RIGHT child of " << temp->data << " node : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    preOrderTraversal(root);
    inOrderTraversal(root);
    postOrderTraversal(root);
}