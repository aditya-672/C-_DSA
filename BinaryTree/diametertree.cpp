#include <iostream>

using namespace std;

class Node
{
public:
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

int calcHeight(Node *node)
{
    if (node == NULL)
    {
        return 0;
        /* code */
    }

    return max(calcHeight(node->left), calcHeight(node->right)) + 1;
}

int calcDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
        /* code */
    }

    int leftheight = calcHeight(root->left);
    int rightheight = calcHeight(root->right);
    int currDiameter = leftheight + rightheight + 1;

    int leftDiameter = calcDiameter(root->left);
    int rightDiameter = calcDiameter(root->right);

    return max(currDiameter, max(leftDiameter, rightDiameter));
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

    cout << calcDiameter(root);

    return 0;
}