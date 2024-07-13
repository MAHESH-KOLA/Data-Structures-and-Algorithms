//circular queue using linked list

#include<iostream>
using namespace std;

struct node{
  int data;
  node *pre;
  node *next;
 node(int val){
   data=val;
   pre=next=NULL;
   }
   };
 node *front=NULL;
 node *rear=NULL;
 
 void display(node *root){
 node *temp=root;
    while(root->next!=temp){
      cout<<root->data<<" ";
      root=root->next;
      }
      cout<<root->data;
    cout<<endl; 
 }
    
  node *push(node *head,int val){
    node *temp;
    node *nn=new node(val);
    if(nn==NULL)
      return NULL;
      if(head==NULL){
         temp=nn;
         head=nn;
         front=nn;
         rear=nn;
         }
      else{
         node *t=temp;
         temp->next=nn;
         temp=temp->next;
         rear=temp;
         temp->pre=t;
         temp->next=head;
        }
       return head;
                       
   }
   
   node* pop(node* head){
      node *temp=head;
   
      if(rear==NULL){
       // delete head;
        return NULL;
        }
      else{
        head=head->next;
 	front=head;
 	rear->next=front;
 	delete temp;        
     }  
      return head;  
   }
   
   int main(){
     
     node* head=NULL;
     head=push(head,1);
     head=push(head,2);
     head=push(head,3);
     head=push(head,4); 
     cout<< rear->data;
     cout<< front->data;
     cout<<endl;
     display(head);  
     head=pop(head);
     head=pop(head);
     cout<<endl;
     display(front);  
          cout<< rear->data;
     cout<< front->data;
     return 0;
     }
