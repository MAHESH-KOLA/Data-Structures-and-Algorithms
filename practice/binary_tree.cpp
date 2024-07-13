
#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 node* left;
 node* right;
 node(int val){
   data=val;
   left=NULL;
   right=NULL;
 }
 };
 
 void inorder(node *root){
 if(root==NULL)
   return;
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
 cout<<"\n";
  }
node* insert(node* root){
  int n;
  cout<<"enter 1 to continue";
  cin>>n;
  
  if(n==0)
   return NULL;
  
   int ele;
   cout<<"enter element: ";
   cin>>ele;
   node* nn=new node(ele);
   nn->left=insert(root);
   nn->right=insert(root);
   return nn;
   
   }
   
int main(){
node* root=NULL;
root=insert(root);
inorder(root);
}
  

