#include<bits/stdc++.h>
using namespace std;

struct node{
 int data;
 node *left;
 node *right;
 node(int val){
  data=val;
  left=right=NULL;
  }
  };

void inorder(node *root){
  inorder(root->left);
  cout<< root->data<<" ";
  inorder(root->right);
}
/*
node *insert(node* root, int val){
  return root;

}
*/
int main(){
 node *root=NULL; /*
 root=insert(root,1);
 insert(root,2);
 insert(root,3);
 insert(root,4);
 insert(root,5);  
 insert(root,6);
 insert(root,7); */
 
 inorder(root);
 return 0;
}
