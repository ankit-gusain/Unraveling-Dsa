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

vector<vector<int>> levelOrderTraversal(Treenode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;

    queue<Treenode *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Treenode *node = q.front();
            q.pop();

            level.push_back(node->data);

            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    // Creating the tree:
    //      1
    //     / \
    //    3   2
    //   /   / \
    //  4   5   6
    Treenode *root = new Treenode(1);
    root->left = new Treenode(3);
    root->right = new Treenode(2);
    root->left->left = new Treenode(4);
    root->right->left = new Treenode(5);
    root->right->right = new Treenode(6);

    cout << "levelOrder traversal :" << endl;

    vector<vector<int>> ans = levelOrderTraversal(root);
    for (const auto &level : ans)
    {
        for (int value : level)
        {
            cout << " " << value;
        } 
    }

    return 0;
}
