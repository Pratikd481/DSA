#include <iostream>
using namespace std;

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

void inOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        inOrderTravarsal(root->left);
        cout << root->key << " ";
        inOrderTravarsal(root->right);
    }
}

void preOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrderTravarsal(root->left);
        preOrderTravarsal(root->right);
    }
}

void postOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        postOrderTravarsal(root->left);
        postOrderTravarsal(root->right);
        cout << root->key << " ";
    }
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
    inOrderTravarsal(root);
    cout << endl;
    preOrderTravarsal(root);
    cout << endl;
    postOrderTravarsal(root);
    cout << endl;
    return 0;
}