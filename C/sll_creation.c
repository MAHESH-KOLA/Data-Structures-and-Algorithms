#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

int main(){
struct node *head,*newnode,*temp;
head=0;
int choice=1;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
int n;

printf("enter value of newnode: ");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
head=newnode;
temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("Do you want to continue: ");
scanf("%d",&choice);
}
temp=head;
while(temp!=0){
printf("%d   ",temp->data);
temp=temp->next;
}
}
