#include<iostream>
using namespace std;
struct node{
   int data;
   node *prev;
   node *next;
 node(int val){
 data=val;
 next=prev=0;
 }
};

 void display(node *head){
	 node *temp=head;
	 while(temp->next!=head){
	  cout<< temp->data<<" ";
	  temp=temp->next;
	  }
	  cout<< temp->data<<endl;
  }
  
node *insert_head(node *head, node *tail){
	node *temp=head;
	int ele;
	cout<<"enter element to insert:";
	cin>>ele;
	node *nn=new node(ele);
	
	head->prev=nn;
	nn->next=head;
	nn->prev=tail;
	tail->next=nn;
	head=nn;
	return head;
	
}

node *insert_position(node *head, node *tail,int val){
	node *nn=new node(val);
	node *temp=head;	
	int pos;
	cout<<"enter position: ";
	cin>>pos;
	int i=1;
	while(i<(pos-1)){
	 temp=temp->next;
	 i++;
	 }
	 nn->next=temp->next;
	 temp->next->prev=nn;
	 temp->next=nn;
	 nn->prev=temp;
	 return head;
}
 
 node *delete_position(node *head, node *tail ){
	node *temp=head;
	int pos;
	cout<<"enter position: ";
	cin>>pos;
	int i=1;
	while(i<(pos-1)){
	 temp=temp->next;
	i++;
	}
 	node *nextnode=temp->next;
 	nextnode->next->prev=temp;
 	temp->next=nextnode->next;
 	return head;	
	
}

 node *reverse(node *head, node *tail){
 	node *temp=tail;
 	cout<<endl;
 	while(temp->prev!=tail){
 	 cout<<temp->data<<" ";
 	 temp=temp->prev;
 	 }
	cout<< temp->data;
	return head; 	 
 
 }
int main(){
	node *head=NULL;
	node *temp,*tail=NULL;
	int n;
	cout<<" enter no. of nodes in list:";
	cin>>n;
	while(n--){
	 int ele;
	 cout<<" enter element to insert: ";
	 cin>>ele;
	 node *nn=new node(ele);
	
	if(head==NULL){
	 head=tail=nn;
	 head->prev=head;
	 head->next=head;
	 temp=nn;
	 }
	 else{
	temp->next=nn;
	 nn->prev=temp;
	 nn->next=head;
	 tail->next=nn;
	 tail=nn; 
	 head->prev=nn;
	 temp=nn;
	 /*
	 //temp=nn;
	 nn->next=head;
	 head->prev=nn;
	 nn->prev=tail;
	 tail->next=nn;
	 */
	 }
	// cout<<"data" <<tail->data;	
	}

	display(head);
	head=insert_head(head,tail);
	display(head);
	head=insert_position(head,tail,10);
	display(head);
	head=delete_position(head,tail);
	display(head);
	head=reverse(head,tail);
	cout<<endl;
	display(head);
}
