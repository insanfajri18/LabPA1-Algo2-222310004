#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int data){
    this->data=data;
    left= right=NULL;
  }
};

void preorderTraversal(struct Node* node){
  if(node == NULL)return;

  cout<<node->data<<" ";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

void postorderTraversal(struct Node* node){
  if (node == NULL)return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout<<node->data<<" ";
  
}

void inorderTraversal(struct Node* node){
  if (node == NULL)return;
  
  inorderTraversal(node->left);
  cout<<node->data<<" ";
  inorderTraversal(node->right);
  
}

int main(){
  struct Node* root = new Node(12);
  root->left = new Node (16);
  root->right = new Node (20);
  root->left->left = new Node (24);
  root->left->right = new Node (32);

  cout<<"Inorder traversal output "<<endl;
  inorderTraversal(root);
  cout<<endl;
  cout<<"preorder traversal output "<<endl;
  preorderTraversal(root);
  cout<<endl;
  cout<<"postorder traversal output "<<endl;
  postorderTraversal(root);
  
}