#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    int height;

    Node(int val)
    {
        data = val;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(Node *root)
{
    if (!root)
    {
        return 0;
    }
    return root->height;
}

Node *rightRotation(Node *root)
{
    Node *child = root->left;
    Node *childRight = child->right;
    child->right = root;
    root->left = childRight;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

Node *leftRotation(Node *root)
{
    Node *child = root->right;
    Node *childLeft = child->left;
    child->left = root;
    root->right = childLeft;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
    return child;
}

Node *insert(Node *root, int key)
{
    if (!root)
    {
        return new Node(key);
    }

    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert(root->right, key);
    }
    else
    {
        return root;
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int balance = getHeight(root->left) - getHeight(root->right);

    // Left Left
    if (balance > 1 && key < root->left->data)
    {
        return rightRotation(root);
    }

    // Right Right
    else if (balance < -1 && key > root->right->data)
    {
        return leftRotation(root);
    }

    // Left right
    else if (balance > 1 && key > root->left->data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    // Right Left
    else if (balance < -1 && key < root->right->data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    else
    {
        return root;
    }
}

void inOrder(Node *root)
{
    if (!root)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 66);
    root = insert(root, 9);
    root = insert(root, 1);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 7);
    root = insert(root, 13);
    root = insert(root, 15);
    root = insert(root, 14);

    inOrder(root);
}