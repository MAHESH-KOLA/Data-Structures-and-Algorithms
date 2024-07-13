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

node *insert_head(node *head,int val){
	node *nn=new node(val);
	nn->next=head;
	head=nn;
	return head;
}

node *insert_tail(node *head,int val){
	node *nn=new node(val);
	node *temp=head;
	while(temp->next!=0){
	temp=temp->next;
	}
	temp->next=nn;
	return head;
}

node *insert_position(node *head,int val){
	node *nn=new node(val);
	int pos;
	cout<< "enter position at which you want to insert ";
	cin>> pos;
	int i=1;
	node *temp=head;
	while(i<pos-1){
	temp=temp->next;
	i++;
	}
	nn->next=temp->next;
	temp->next=nn;
	return head;
}

node *delete_head(node *head){
	//node *nn=new node(val);
	node *temp=head;
	head=temp->next;
	delete(temp);
	return head;
}

void display(node *head){
	node *temp=head;
	while(temp!=0){
	cout << temp->data<< " ";
	temp=temp->next;
	}
	cout<<"\n";
}

node *delete_tail(node *head){
	node *temp=head;
	while(temp->next->next!=0){
	temp=temp->next;
	}
	node *curr=temp;
	curr->next=NULL;
	delete(temp->next);
	return head;
}
node *delete_position(node *head){
	int pos;
	cout<< "enter position at which you want to delete" ;
	cin>> pos;
	if(pos>1 && pos<6){
	int i=1;
	node *temp=head;
	while(i<pos-1){
	temp=temp->next;
	i++;
	}
	node *curr=temp->next;
	temp->next=curr->next;
	delete(curr);
	//temp->next=temp->next->next;
	//delete(temp->next);
	}
	else{
	cout<< "invalid position";
	}
return head;
}

void search(node *head,int ele){
	node *temp=head;
	int i=1;
	int flag=0;
	while(temp!=0){
	if(temp->data==ele){
	 flag=1;
	  break;
	  }
	  temp=temp->next;
	  i++;
	}
	if(flag==1)
	 cout << ele<<"found at position"<<i<<endl;
	else
	 cout << "Oops! element not found"<<endl;
}

node *sort_list(node *head){
	node *temp1=head;
	node *temp2=head;
	while(temp1!=NULL){
	temp2=temp1->next;
	  while(temp2!=NULL){
	    if(temp1->data > temp2->data)
	    {
	       int temp=temp1->data;
	       temp1->data=temp2->data;
	       temp2->data=temp;
	       }
	       temp2=temp2->next;
	     }
	     temp1=temp1->next; 
	   
	    } 
 	return head;
}

node *rev_list(node *head){
	node *prevnode=0;
	node *currnode=head;
	node *nextnode=head;
	while(nextnode!=0){
	 nextnode=nextnode->next;
	 currnode->next=prevnode;
	 prevnode=currnode;
	 currnode=nextnode;
	}
	head=prevnode;
	return head;
}


int main(){
	node *head= new node(3);
	head->next=new node(6);
	head->next->next=new node(9);
	head->next->next->next=new node(12);
	head->next->next->next->next=new node(11);
	head->next->next->next->next->next=new node(21);
	head=insert_head(head,1);
	head=insert_tail(head,15);
	head=insert_position(head,10);
	display(head);
	head=delete_head(head);
	display(head);
	head=delete_tail(head);
	display(head);
	int ele;
	cout << "enter element to search in list" ;
	cin>> ele;
	search(head,ele);
	head=delete_position(head);
	display(head);
	head=sort_list(head);
	display(head);
	head=rev_list(head);
	display(head);

}
