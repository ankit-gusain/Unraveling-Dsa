#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};

void Preorder(Node *root)
{

    Node *tmp = root;
    if (tmp == NULL)
        cout << "NO ROOT ELEMENT";

    cout << tmp->val << " ";
    if (tmp->left)
        Preorder(tmp->left);
    if (tmp->right)
        Preorder(tmp->right);
}
int main()
{
    Node *root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(25);

    root->left->left = new Node(30);
    root->left->right = new Node(40);

    root->right->left = new Node(50);
    root->right->right = new Node(60);

    Preorder(root);

    return 0;
}