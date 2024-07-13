#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=0;
struct node *createnode(){
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&nn->data);
nn->next=0;
return nn;
}
void insert(){
struct node *nn,*temp;
nn=createnode();
if(head==0){
head=nn;
temp=nn;
}
else{
temp->next=nn;
temp=nn;
}
}
void display(){
struct node *temp;
temp=head;
while(temp!=0){
printf("%d",temp->data);
temp=temp->next;
}
void inserthead(){
struct node *temp,*nn;
temp=head; /*
int n;
printf("enter elemenet: ");
scanf("%d",&n);
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=n; */
nn=createnode();
nn->next=head;
head=nn;
}
}
int main(){
insert();
insert();
insert();
insert();
insertnode();
display();

}


