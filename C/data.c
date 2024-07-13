#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
struct node *head,*nn,*temp;
head=0;
int choice=1;
while(choice){
nn=(struct node*)malloc(sizeof(struct node));
printf("enter a value: ");
scanf("%d",&nn->data);
nn->next=0;
if(head==0){
 head=nn;
 }
 else{
 temp->next=nn;
 }
 temp=nn;
 printf("do u want to continue ");
 scanf("%d",&choice);
 }
 
 temp=head;
 printf("List before insertion: ");
 while(temp!=0){
 printf("%d ",temp->data);
 temp=temp->next;
 }
 
 int pos;
 printf("\nenter position at wich you want to insert ");
 scanf("%d",&pos);
 struct node *cur;
 cur=(struct node *)malloc(sizeof(struct node));
 if(pos==1){
 temp=cur;
 printf("enter the value: ");
 scanf("%d",&cur->data);
 cur->next=head;
 head=cur;
 }
 else if(pos==4){
 temp=head;
 while(temp!=0){
  temp=temp->next;
 }
 temp->next=cur;
 printf("enter the value: ");
 scanf("%d",&cur->data);
 cur->next=0;
 }
 else{
 printf("hello ");
 }
 printf("list after : ");
 temp=head;
 while(temp!=0){
 printf("%d ",temp->data);
 temp=temp->next;
 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

