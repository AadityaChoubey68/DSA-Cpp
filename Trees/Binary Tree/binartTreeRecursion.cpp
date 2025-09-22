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

Node *BinarySearch()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "Enter The Left Child of " << x<<" : ";
    temp->left = BinarySearch();
    cout << "Enter The Right Child of " << x << " : ";
    temp->right = BinarySearch();
    return temp;
}

int main()
{
    cout << "Enter teh root Node : ";
    Node *root;
    root = BinarySearch();
}