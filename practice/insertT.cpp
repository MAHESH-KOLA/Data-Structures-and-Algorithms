#include<bits/stdc++.h>
using namespace std;

struct node{
 int data;
 node *left;
 node *right;
 };
 
 node* create(int val){
   struct node* nn=malloc(sizeof(node *));
   nn->value=val;
   nn->left=NULL;
   nn->right=NULL;
   return nn; 
 
 }
 
 node *insert(node *root,int val){
	 if(root==NULL)
	    return create(val);

	 if(val<root->data)  
            root->left = insert(root->left, val);  
        else if  (val>root->data)  
            root->right = insert(root->right, val);  
       
        return root;  
       
}

void inorder(node *root){
	if(root==NULL)
	  return;
	inorder(root->left);
	cout<< root->data<<" ";
	inorder(root->right);
}
 
 int main(){
 node *root=NULL;
 
 root=insert(root,1);
 insert(root,2);
 insert(root,3);
 inorder(root);
 }
