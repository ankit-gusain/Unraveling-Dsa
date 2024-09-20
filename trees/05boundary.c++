#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isLeaf(Node *node)
{
    return node && !node->left && !node->right;
}

void addLeftBoundary(Node *root, vector<int> &ans) // Pass by reference
{
    Node *curr = root->left;
    while (curr)
    {
        if (!isLeaf(curr))
            ans.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void addRightBoundary(Node *root, vector<int> &ans) // Pass by reference
{
    stack<int> s; // Stack to store right boundary nodes, reversing and sending
    Node *curr = root->right;
    while (curr)
    {
        if (!isLeaf(curr))
            s.push(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
}

void addLeaves(Node *root, vector<int> &ans) // Pass by reference
{
    if (isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }

    if (root->left)
    {
        addLeaves(root->left, ans);
    }
    if (root->right)
    {
        addLeaves(root->right, ans);
    }
}

vector<int> printBoundary(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    if (!isLeaf(root))
        ans.push_back(root->data);

    addLeftBoundary(root, ans);
    addLeaves(root, ans);
    addRightBoundary(root, ans);

    return ans;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right = new Node(22);
    root->right->right = new Node(25);

    vector<int> boundary = printBoundary(root);
    for (int val : boundary)
        cout << val << " ";
    cout << endl;

    return 0;
}
