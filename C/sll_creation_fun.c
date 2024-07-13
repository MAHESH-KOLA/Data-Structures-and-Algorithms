#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;

struct node *createnode(){

	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter value: ");
	scanf("%d",&nn->data);
	nn->next=NULL;
	return nn;
}

void insert(){
	struct node *temp,*nn;
	nn=createnode();
	if(head==NULL){
	head=nn;
	temp=nn;
	}
	else{
	  /*
	while(temp->next!=NULL){
	temp=temp->next;a
	} */
	temp->next=nn;
	temp=nn;
	}
}
void inserthead(){
	struct node *nn;
	nn=createnode();
	nn->next=head;
	head=nn;
}
void inserttail(){
        struct node *nn,*temp;
        nn=createnode();
        temp=head;
        while(temp->next!=0){
        temp=temp->next;
        }
        temp->next=nn;
   	nn->next=0;
}

void insertposition(){
	struct node *nn,*temp;
	nn=createnode();
	int pos,i=1,c=0;
	printf("enter position: ");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1){
	temp=temp->next;
	i++;
	}
	nn->next=temp->next;
	temp->next=nn;
}

void deletehead(){
	struct node *temp;
	temp=head;
	head=temp->next;
	free(temp);

}

void deletetail(){
	struct node *temp,*nn;
	nn=createnode();
	temp=head;
	while(temp->next->next!=0){
	temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}

void deleteposition(){
	struct node *temp,*nn;
	nn=createnode();
	temp=head;
	int pos;
	printf("enter position to delete");
	scanf("%d",&pos);
	int i=1;
	while(i<pos-1){
	 temp=temp->next;
	 i++;
	 }
	 temp->next=temp->next->next;
	 free(temp->next->next);
}

void display(){
	struct node *temp=head;
	while(temp!=0){
	printf("%d ",temp->data);
	temp=temp->next;
}
}

int main(){
	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
	inserthead();
	inserttail();
	insertposition();
	deletehead();
	deletetail();
	deleteposition();
	display();
}

