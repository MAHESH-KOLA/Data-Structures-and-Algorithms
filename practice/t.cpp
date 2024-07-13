#include<iostream>
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
 
 void display(node *head){
  while(head!=0){
    cout<< head->data;
    head=head->right;
    }
    }
int main(){
 node *head=new node(1);
 head->left=new node(2);
 head->right=new node(3);
 head->left->left= new node(4);
 head->left->right=new node(5);
 head->right->left= new node(6);
 head->right->right=new node(7);
 
display(head);

}
