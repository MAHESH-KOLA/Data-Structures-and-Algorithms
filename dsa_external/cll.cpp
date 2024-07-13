#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node (int val){
	 data=val;
	 next=NULL;
	 }
};
node *tail=NULL;
void display(node *head){
	node *temp=head;
	while(temp->next!=head){
        cout<< temp->data<<" ";
        temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
 }
node *insert_tail(node *head, int val,node *tail){

	node *nn=new node(val);
	tail->next=nn;
	
	nn->next=head;
	tail=nn;
	//cout<< "data: "<<tail->data;

	return tail;

}

node *insert_head(node *head,int val,node *tail){
	node *nn=new node(val);
	nn->next=head;
	tail->next=nn;  
	head=nn;
	return head;
}

node *insert_position(node *head,int val,node *tail){
	node *nn=new node(val);
	int pos;
	cout<<" enter position: ";
	cin>> pos;
	node *temp=head;
	int i=1;
	while(i<(pos-1)){
	  temp=temp->next;
	  i++;
	  }
	 node *nextnode=temp->next;
	 nn->next=nextnode;
	 temp->next=nn;
	// tail=nn;
	//cout<< tail->data;
	 return head;
	
}

node *delete_head(node *head,node *tail){
	node *temp=head;
	
	head=temp->next;
	tail->next=head;
	delete(temp);
	return head;	

}

node *delete_tail(node *head,node *tail){
	node *temp=head;
	while(temp->next!=tail){
	 temp=temp->next;
	 }
	 temp->next=head;
	 delete(tail);
	 tail=temp;
	 return tail;
	 
}

node *delete_position(node *head,node *tail){
	int pos;
	cout<<endl<<" enter position at which you want to delete: ";
	cin>>pos;
	int i=1;
	node *temp=head;
	while(i<(pos-1)){
	 temp=temp->next;
	 i=i+1;
	}
	node *deletenode=temp->next;
	temp->next=deletenode->next;
	delete(deletenode);
	return head;
}

node *search(node *head,node *tail){
	int ele;
	cout<<"enter search element: ";
	cin>>ele;
	node *temp=head;
	int flag=0;
	while(temp!=tail){
	 if(temp->data==ele){
	   flag=1;
	   break;
	   }
	 temp=temp->next;
	}
	if(flag==0 && tail->data!=ele)
	   cout<<"element not found: ";
	else
	   cout<<"element found..";
	return head;	
}

node *reverse(node *head,node *tail){
	node *prevnode=tail;
	node *currnode=head;
	node *nextnode=head;
	while(nextnode!=tail->next){
	 nextnode=nextnode->next;
	 currnode->next=prevnode;
	 prevnode=currnode;
	 currnode=nextnode;
	}
	tail->next=prevnode;
	head=prevnode;
	//node* temp=head;
	///head=prevnode;
	//tail=head;
	return head;	

}

int main(){
 int n;
 cout<< "eneter no. of elements in the list: ";
 cin>> n;
 node *head=NULL;
 node *temp=0,*tail=NULL;
 while(n--){
  int ele;
  cout<< "enter element in the list: ";
  cin>> ele;
  
  node *nn=new node(ele);
  if(head==0){
   head=nn;
   temp=head;
   tail=head;
   }
  else{
   temp->next=nn;
   
   temp=temp->next;
   }
   tail=temp;
   temp->next=head;
   }
display(head);
/*
head=insert_head(head,5,tail);
display(head);
tail=insert_tail(head,12,tail);
display(head);
//cout<< tail->data;
head=insert_position(head,8,tail);
display(head);

head=delete_head(head,tail);
display(head);
tail=delete_tail(head,tail);
display(head);
head=delete_position(head,tail);
display(head);
head=search(head,tail);
display(head);
*/
head=reverse(head,tail);
display(head);

}
