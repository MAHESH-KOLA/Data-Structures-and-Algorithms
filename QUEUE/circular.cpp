//cicular linked list

#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
  node(int val){
    data=val;
    next=NULL;
    }
  };

node *tail=NULL;

 void display(node* head){
 node* temp=head;
    while(temp->next!=head){
      cout<<temp->data<<" ";
      temp=temp->next;
      }
    cout<<tail->data;
    cout<<"\n";
}      
 
 node* insert(int val, node* head){
   node *nn=new node(val);
   node *temp;
   if(head==NULL){
      head=nn;
      tail=nn;
      temp=nn;
      }
     else{
    tail->next=nn;
    temp=nn;
    }
    tail=nn;
    tail->next=head;
    return head;
    }
/*      
 node* insert_pos(inode* head, int val){
   int pos;
   cout<<"enter position to insert";
   node* temp=head;
   cin>>pos;
   int c=0;
   while(
   if(pos==1)
     insert_head(head,val);
   else if(pos==
 
 }
*/     
 int main(){
  node *head=NULL;
  head=insert(1,head);
   head=insert(2,head);
 head=insert(3,head); 
  head=insert(4,head);
      head=insert(5,head);
  display(head);
    head=insert(6,head);
    display(head);
  insert_pos(head,12);
  display(head);
 return 0;
 }
