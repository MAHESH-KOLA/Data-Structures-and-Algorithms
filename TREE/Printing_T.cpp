#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *left;
  node *right;
node(int val){
data=val;
left=0;
right=0;
}
};

void preorder(node *root){
if(root==0){
 return;
 }
  cout<<root->data;
  preorder(root->left);
  preorder(root->right);
  }
void inorder(node *root){
if(root==0)
  return;
inorder(root->left);
cout<<root->data;
inorder(root->right);
}
void postorder(node *root){
if(root==0)
  return;
inorder(root->left);
inorder(root->right);
cout<<root->data;
}
int main(){
node *head=new node(1);
head->left=new node(2);
head->right=new node(3);
head->left->left=new node(4);
head->left->right=new node(5);
head->right->left=new node(6);
head->right->right=new node(7);

preorder(head);
cout<<"\n";
inorder(head);
cout<<"\n";
preorder(head);
cout<<"\n";
return 0;
}
