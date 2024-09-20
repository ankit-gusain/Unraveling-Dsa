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

    int height(Treenode *root)
    {
        if (root == nullptr)
            return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return 1 + max(lh, rh);
    }

    bool isBalanced(Treenode *root)
    {
        if (root == nullptr)
        {
            return true;
        }

        int lh = height(root->left);
        int rh = height(root->right);
        if (abs(lh - rh) > 1)
        {
            return false;
        }

        // Check if the current node is balanced and recursively check its subtrees

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        if (!left || !right)
        {
            return false;
        }

        return true;
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
        root->right->right->right->right = new Treenode(117);
        root->right->right->right->right->right = new Treenode(12);
        root->right->right->right->right->right->right = new Treenode(13);
        root->right->right->right->right->right->right->right = new Treenode(15);
        root->right->right->right->right->right->right->right->right = new Treenode(16);

        int depth = height(root);
        cout << "Depth: " << depth << endl;

        if (isBalanced(root))
        {
            cout << "The tree is balanced." << endl;
        }
        else
        {
            cout << "The tree is not balanced." << endl;
        }

        return 0;
    }
