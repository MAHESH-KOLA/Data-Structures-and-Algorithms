#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *left;
node *right;

node(int val){
data=val;
}
};

node *create(){
	int x;
	node *nn;
	cout<< "press 1 to continue. 0 to exit \n";
	cin>> x;
	if(x==0)
	 return 0;
	
	cout<<"enter data";
	//cin>>nn->data;
	int data;
	cin>>data;
	nn=new node(data);
	//cout<<"enter left child: "<<nn->data<<endl;
	nn->left=create();
	//cout<<"enter right child: "<<nn->data<<endl;
	nn->right=create();
	return nn;
}
void inorder(node *root){
if(root==0)
 return;

 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
void preorder(node *root){
if(root==0)
 return;
 cout<<root->data<<" ";
 preorder(root->left);
 preorder(root->right);
}



int main(){
node *root=0;
root=create();
inorder(root);
preorder(root);
return 0;
}
