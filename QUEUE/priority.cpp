#include<iostream>
using namespace std;
struct node{
 int data;
 int priority;
 node *next;
 node(int v,int p){
    data=v;
    priority=p;
    next=0;
}
};

void display(node *head){
 while(head!=0){
  cout<<head->data<<" ";
  head=head->next;
  }
  }




int main(){
node *head=0,*temp=0;
int n;
cout<<"no. of elements: ";
cin>>n;
while(n--){
  int ele,pri;
  cout<<"enter element and priority: ";
  cin>>ele;
  cin>>pri;
  node *nn=new node(ele,pri);
 
 /* else{
  while(nn->priority <temp->priority  & temp->next){
  
  temp->next=nn;
  temp=nn;  */
  if(pri<temp->priority && temp==0){
    head=nn;
    temp=nn; 
    }
   else{
   while(temp->next && temp->next->priority<pri){
   temp=temp->next;
   nn->next=temp->next;
   temp->next=nn;
  }
  }
  }
display(head);
}
