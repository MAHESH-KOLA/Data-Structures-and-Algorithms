#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
struct node *head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->data=4;
head->next=NULL;
struct node *second=NULL;
second=(struct node*)malloc(sizeof(struct node));
second->data=8;
head->next=second;
struct node *third=NULL;
third=(struct node*)malloc(sizeof(struct node));
third->data=12;
second->next=third;
printf("%d  \n",head->data);
printf("%d  \n",second->data);
printf("%d  \n",third->data);


printf("%p  \n",head->next);
printf("%p  \n",second->next);
printf("%p  \n",third->next);
}
