#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[],int start,int end, int curr){
    for (int i = start; i <= end; i++)
    {
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx = 4;
    if(start > end){
        return NULL;
    }
    int curr = postorder[idx];
    idx--;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }

    int pos = search(inorder,start,end,curr);

    node->right = buildTree(postorder,inorder,pos+1,end);
    node->left = buildTree(postorder,inorder,start,pos-1);

    return node;
}


void printNodes(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printNodes(root->left);
    cout << root->data << " ";
    printNodes(root->right);
}

int main()
{
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    Node* root = buildTree(postorder,inorder,0,4);
    
    printNodes(root);
    cout<<endl;
    return 0;
}