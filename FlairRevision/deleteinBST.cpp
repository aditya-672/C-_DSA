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

Node* inorderSuc(Node* root){
    Node* curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node* deleteinBST(Node* root, int key){
    if (key < root->data)
    {
        root->left = deleteinBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteinBST(root->right,key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSuc(root->right);
        root->data = temp->data;
        root->right = deleteinBST(root->right,temp->data);
    }
    
}

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

void inorder(Node* root){
    if (root==NULL)
    {
        return;
        /* code */
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
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
    inorder(root);
    cout<<endl;
    root = deleteinBST(root,3);
    inorder(root);
    cout<<endl;
    return 0;
}