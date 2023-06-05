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

// in order travarsal
void inOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        inOrderTravarsal(root->left);
        cout << root->key << " ";
        inOrderTravarsal(root->right);
    }
}

// pre order travarsal
void preOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrderTravarsal(root->left);
        preOrderTravarsal(root->right);
    }
}

// post order travarsal
void postOrderTravarsal(Node *root)
{
    if (root != NULL)
    {
        postOrderTravarsal(root->left);
        postOrderTravarsal(root->right);
        cout << root->key << " ";
    }
}

// height of a tree
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
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
    cout << height(root);
    return 0;
}