#include<iostream>
using namespace std;

struct node{
 int data;
 node *left;
 node *right;
 node(int val){
   data=val;
   left=NULL;
   right=NULL;
 }
};

void inorder(node* root){
 if(root==NULL)
   return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}


node* insert(node* root, int val){
node* nn=new node(val);
 if(root==NULL)
   return nn;
 else{
    if(val< root->data)
     root->left=insert(root->left, val);
    else
     root->right=insert(root->right, val);
   }
   return root;
  }
node* predecessor(node* root){
  while(root->left!=0)
    root=root->left;
   return root;
}

node* remove(node* root,int key){
 if(root==NULL)
   return NULL;
 else{
   if(key < root->data)
     root->left=remove(root->left, key);
   else if(key> root->data)
     root->right=remove(root->right, key);
   else{
     if(root->left==NULL && root->right==NULL)
        return NULL;
     else if(root->left!=NULL && root->right==NULL)
        return root->left;
     else if(root->left==NULL && root->right!=NULL)
       return root->right;
     else{
      node *prec=predecessor(root->right);
      root->data=prec->data;
      root->right=remove(root->right, prec->data);
     }
    }
    }
return root;
}

node* search(node* root, int key){
 if(root==NULL || root->data==key)
   return root;

 if(key<root->data);
  return  search(root->left,key);
// else if(key>=root->data)
  return search(root->right,key);
  
 }
int main(){
node* root=NULL;
root=insert(root,1);
 root=insert(root,3);
  root=insert(root,12);
   root=insert(root,13);
 root=insert(root,4);
 root=insert(root,5);
 inorder(root);
 /* int n;
 cout<<"enter the element which you want to delete";
 cin>>n;
 root=remove(root,n);
  inorder(root);
 node* s=search(root,12);
 cout<<s;   */
return 0;
}
 
