// finding the depth of the tree

#include <bits/stdc++.h>
using namespace std;

struct Treenode
{
    int data;
    Treenode *left;
    Treenode *right;

    Treenode(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int maxDepth(Treenode *root)
{
    if (root == nullptr)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}
int main()
{
    Treenode *root = new Treenode(1);

    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);
    root->right->left = new Treenode(5);
    root->right->right = new Treenode(6);
    root->right->right->right = new Treenode(7);

    int depth = maxDepth(root);
    cout << "depth :" << depth;

    return 0;
}