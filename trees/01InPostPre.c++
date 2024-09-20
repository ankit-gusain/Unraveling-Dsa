//inorder, preorder, postorder traversal usoing recursion



#include <iostream>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrderTraversal(TreeNode *node)
{
    if (node == nullptr)
        return;

    inOrderTraversal(node->left);
    cout << node->value << " ";
    inOrderTraversal(node->right);
}

void postOrderTraversal(TreeNode *node)
{
    if (node == nullptr)
        return;

    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->value << " ";
}

void preOrderTraversal(TreeNode *node)
{
    if (node == nullptr)
        return;
    cout << node->value << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

int main()
{
    // Creating a sample tree:
    //      1
    //     / \
    //    3   2
    //   /   / \
    //  4   5   6

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->left->left = new TreeNode(4);

    root->right = new TreeNode(2);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "InOrder :";
    inOrderTraversal(root);
    cout << endl;

    cout << "PreOrder :";
    preOrderTraversal(root);
    cout << endl;

    cout << "PostOrder :";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
