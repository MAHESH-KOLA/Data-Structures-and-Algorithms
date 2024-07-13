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
 
 node* insert(node* root, int val){
   node *nn=new node(val);
    if(!root){
      return nn;
     
       }
     node *prev=NULL;
     node *temp=root;
     while(temp){
        if(val<temp->data){
           prev=temp;
	   temp=temp->left;
	 }
	 else if(val>temp->data){
	   prev=temp;   
	   temp=temp->right;  
 }
 }
 if(val<temp->data)
    prev->left=nn;
 else
  prev->right=nn; 
 return root;     
 }
 /*
 void inorder(node* root)
{
	node* temp = root;
	stack<node*> st;
	while (temp != NULL || !st.empty()) {
		if (temp != NULL) {
			st.push(temp);
			temp = temp->left;
		}
		else {
			temp = st.top();
			st.pop();
			cout << temp->data << " ";
			temp = temp->right;
		}
	}
}
*/
 int main(){
 node *root=NULL;
root= insert(root, 10);
 root=insert(root,5);
 root=insert(root,2);
 root=insert(root,8);/*
 insert(root,15);
 insert(root,12);
 insert(root,18); 
 //inorder(root);*/

 return 0;
 }
 
