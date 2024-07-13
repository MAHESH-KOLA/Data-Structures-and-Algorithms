// queue implementation using linked_list
#include<iostream>
using namespace std;
struct node{
 int data;
 node *next;
 node(int ele){
  data=ele;
  next=NULL;
  }
  };
void display(node *head){
	while(head!=0){
	 cout<< head->data<<" ";
	 head=head->next;
	 }
	 cout<<endl;
}
node *enque(node *head,int ele){
node *nn=new node(ele);
node *temp;
if(head==NULL){
head=nn;
temp=nn;
}
else{
temp->next=nn;
temp=nn;
}
return head;
}

node *deque(node *head){
node *temp=head;
if(head==0){
 cout<<" queue underflow ";
 }
else{
 temp=temp->next;
 delete(head);
 head=temp;
}
return head;

}
int main(){
node *head=NULL;
/* int n;
cout<< "no. of nodes: ";
cin>>n;
while(n--){
int ele;
cout<<"enter element: ";
cin>>ele;
head=enque(head,ele);
}*/
head=enque(head,1);
head=enque(head,2);
head=deque(head);
head=enque(head,12);
head=enque(head,22);
display(head);
head=deque(head);
head=deque(head);


display(head);
}
