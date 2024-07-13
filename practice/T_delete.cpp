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
  
node* insert(node *root, int val){
node *nn=new node(val);
if(root==NULL)
   return nn;
if(val<root->data)
  root->left=insert(root->left,val);
else if(val>= root->data)
  root->right=insert(root->right, val);
return root;
}

void inorder(node *root){
if(root==NULL)
 return;
  inorder(root->left);
  cout<< root->data<<" ";
  inorder(root->right);
}

node* successor(node *root){
   while(root->left){
     root=root->left;
     }
     return root;
  }
node *remove(node *root, int key){
   if(root==NULL)
      return root;
    if(key < root->data)
       root->left=remove(root->left, key);
     else if(key> root->data)
       root->right=remove(root->right, key);
     else{
       if(root->left==NULL && root->right==NULL)
         return NULL;
       else if(root->left!=NULL && root->right==NULL)
         return root->left;
       else if(root->right!=NULL  && root->left==NULL)
          return root->right;
       else{
         node* succ=successor(root->right);
         root->data=succ->data;
          root->right= remove(root->right,succ->data);
       }
     }
 return root;
}
int main(){
 node *root=NULL;
	root = insert(root, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 50);
	root = insert(root, 70);
	root = insert(root, 60);
	root = insert(root, 80);
	root = insert(root, 65);
        root = insert(root, 15);
        root = insert(root, 75);
        root = insert(root, 100);	
	inorder(root);
	cout<<endl;
	root= remove(root,70);
	inorder(root);
}
