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
 void display(node *head){
 while(head!=0){
 cout<<head->data<<" ";
 head=head->next;
 }
 cout<<endl;
 }
 
 node *rev_list(node *head1){
	node *prevnode=0;
	node *currnode=head1;
	node *nextnode=head1;
	while(nextnode!=0){
	 nextnode=nextnode->next;
	 currnode->next=prevnode;
	 prevnode=currnode;
	 currnode=nextnode;
	}
	head1=prevnode;
	return head1;
}

void palindrome(node *head,node *head1){
 int flag=1;
 while(head!=0){
  if(head->data!=head1->data){
    flag=0;
    break;
    }
   head=head->next;
   head1=head1->next;
   }
   if(flag==1)
    cout<<"palindrome";
   else
     cout<<"not palindrome";
     }
     
 node *duplicate(node *head){
 	node *prev=head;
 	node *curr=prev->next;
 	while(curr!=0){
 	if(curr->data!=prev->data)
 	 cout<<prev->data<<" ";
 	 prev=prev->next;
 	 curr=curr->next;
 	 }
 	 cout<<prev->data;
 	 return head;
 
 }
 void solve(node *head){
 	int sum=0;
 	while(head->next->next!=NULL){
 	sum+=head->data;
 	head=head->next;
 }
 cout<< sum;
 }
 
 

 int main(){
 int n;
 cout<<" enter no of elements: ";
 cin>>n;
 node *head=0,*temp;
 while(n--){
 int ele;
 cout<<"enter element: ";
 cin>>ele;
 node *nn=new node(ele);
 if(head==0){
 head=nn;
 temp=nn;
 }
 else{
 temp->next=nn;
 temp=nn;
 }
 }
 display(head);
 //node *head1=rev_list(head);
 //display(head1);
 //palindrome(head,head1);
 
 //head=duplicate(head);
 //display(head);
 solve(head);
 }
 
 
