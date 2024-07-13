#include<iostream>
using namespace std;

struct node{
 int data;
 node *next;
 node (int val){
   data=val;
   next=0;
}
};
node *pre=NULL;
node *top=NULL;


node *insert(node *head,int val){
  node *temp;
  node *nn=new node(val);
  if(head==0){
    head=nn;
    top=nn;
    temp=nn;
    }
  else{
    temp->next=nn;
    pre=temp;
    temp=nn;
    top=nn;
    }        
return head;
}

void display(node *head){
   while(head!=0){
      cout<< head->data;
      head=head->next;
      }
      cout<<endl;
    }
int main(){
  
  node *head=NULL;
  head=insert(head,1);
  head=insert(head,2);
  head=insert(head,3);
  head=insert(head,4);
  head=insert(head,5);
  
  display(head);
  cout<<top->data;
   cout<<pre->data;
return 0;
}
