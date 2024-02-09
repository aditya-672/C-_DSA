#include <iostream>
#include <stack>
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

void zigzagTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
        /* code */
    }

    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    currLevel.push(root);
    bool leftToright = true;

    while (!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();

        if (temp)
        {
            cout << temp->data << " ";
            if (leftToright)
            {
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                    /* code */
                }
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                    /* code */
                }
            }
            else
            {
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                    /* code */
                }
                if (temp->left)
                {
                    /* code */
                    nextLevel.push(temp->left);
                }
            }
        }
        if (currLevel.empty())
        {
            leftToright = !leftToright;
            swap(currLevel, nextLevel);
        }
    }
}

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
        /* code */
    }

    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
        /* code */
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 6);

    inorder(root);
    cout<<endl;
    zigzagTraversal(root);

    return 0;
}