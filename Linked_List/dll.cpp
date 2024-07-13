#include<iostream>
using namespace std;
struct node{
int data;
node *next;
node *prev;
node(int val){
 data=val;
 next=prev=NULL;
}
};
void display(node *head){
	 node *temp= head;
	 while(temp!=0){
	 cout<<temp->data<<"  ";
	 temp=temp->next;
	}
	cout<< endl;
}

node *insert_head(node *head, int val){
	node *temp=head;
	node *nn=new node(val);
	nn->next=temp;
	temp->prev=nn;
	head=nn;	
        return head;
}

node *insert_tail(node *head, int val){
	node *nn=new node(val);
	node *temp=head;
	while(temp->next!=0){
	temp=temp->next;
	}
	nn->prev=temp->next;
	temp->next=nn;
	return head;
	
}

node *insert_position(node *head,int val){
	node *nn=new node(val);
	node *temp=head;
	int pos;
	cout<< "enter positon: ";
	cin>> pos;
	int i=1;
	while(i<(pos-1)){
	 temp=temp->next;
	 i++;
	}
	nn->next=temp->next;
	nn->prev=temp;
	temp->next=nn;
	return head;
}

node *delete_position(node *head){
	node *temp=head;
	int pos;
	cout<<"enter position at which you want to delete: ";
	cin>> pos;
	int i=1;
	while(i<(pos-1)){
	 temp=temp->next;
	 i++;
       }
       node *del=temp->next;	
       temp->next->prev=temp;
       temp->next=temp->next->next;
       
       delete(del);
	return head;
}

node *reverse_list(node *head){
	node *temp=head;
	node *curr=head;
	while(curr!=0){
	temp=curr->prev;
	curr->prev=curr->next;
	curr->next=temp;
	curr=curr->prev;
	}
	//head=curr;
	node *tail=0;
	curr=head;
	head=tail;
	tail=curr;
	return head;
}

int main(){
node *head=0;
node *temp=head;
int ele;
cout<< "enter no. of nodes"<< " ";
cin>> ele;
while(ele--){
 int n;
 cout<< "enter element ";
 cin>> n;
 node *nn=new node(n);
 if(head==0){
  head=nn;
  temp=nn;
  }
 else{
  temp->next=nn;
 // temp->prev=nn;
  nn->prev=temp;
  temp=nn;
 }
}
display(head);
head=insert_head(head,10);
display(head);
head=insert_tail(head,20);
display(head);
head=insert_position(head,15);
display(head);
head=delete_position(head);
display(head);
head=reverse_list(head);
display(head);
}
