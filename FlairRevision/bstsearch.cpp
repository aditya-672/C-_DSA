#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insertBST(Node* root,int val){
    if (root==NULL)
    {
        return new Node(val);
        /* code */
    }
    

    if (val < root->data)
    {
        root->left = insertBST(root->left,val);
    }
    else{
        root->right = insertBST(root->right,val);
    }

    return root;
}

Node* searchInBST(Node* root, int key){
    if (root==NULL)
    {
        /* code */
        return NULL;
    }
    

    if (root->data == key)
    {
        return root;
        /* code */
    }

    if (root->data > key)
    {
        return searchInBST(root->left,key);
    }
    
    return searchInBST(root->right,key);

}

int main()
{
    Node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,6);

    if (searchInBST(root,8)!=NULL)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    

    return 0;
}