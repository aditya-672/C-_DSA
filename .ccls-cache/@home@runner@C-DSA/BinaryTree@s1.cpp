#include <iostream>>

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }

};

void sumReplace(Node*  root){
  if(root == NULL){
    return;
  }

  sumReplace(root->left);
  sumReplace(root->right);

  if(root->left != NULL){
    root->data += rooy
  }
}

int main(){
  return 0;
}