#include <iostream>
using namespace std;

// Basic structure
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// height of a tree
void printNodesAtKDistance(Node *root, int k)
{
    if (root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->key << " ";
    }
    printNodesAtKDistance(root->left, k - 1);
    printNodesAtKDistance(root->right, k - 1);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    root->right = new Node(30);
    root->right->right = new Node(60);
    printNodesAtKDistance(root, 2);
    return 0;
}