#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int heightOfNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = heightOfNode(root->left);
    int rightheight = heightOfNode(root->right);
    return max(leftheight, rightheight) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    root->right->right->right->left = new Node(9);

    cout << heightOfNode(root) << endl;
    return 0;
}