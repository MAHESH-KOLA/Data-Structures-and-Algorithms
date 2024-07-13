#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createNode(int val){
	struct Node *nn;
	nn = (struct Node *) malloc(sizeof(struct Node));
	nn->data = val;
	nn->next = NULL;
	return nn;
}

void display(struct Node *head){
    while(head!=NULL){
        printf("%d\t", head->data);
        head=head->next;
    }
    printf("\n\n");
}
//write function to implement insertion at tail
struct Node *insert_tail(struct Node *head, int val){
    // YOUR CODE HERE
    struct Node *nn= createNode(val);
    struct Node *temp;
    if(head==NULL){
       head=temp=nn;
       }
      else{
       temp->next=nn;
       temp=nn;
       }
    
  //  raise NotImplementedError();
    return head;
}

//write function for insertion at in SLL
struct Node *insert_head(struct Node *head, int val)
{
    // YOUR CODE HERE
    struct Node *nn;
    nn=createNode(val);
    nn->next=head;
    head=nn;
  //  raise NotImplementedError()
    return head;
}

//insert at POS

struct Node *insert_pos(struct Node *head, int pos, int x)
{
    // YOUR CODE HERE
    struct Node *nn,*temp=head;
    nn=createNode(x);
    int i=1;
    while(i<(pos-1)){
      temp=temp->next;
      i++;
      }
      nn->next=temp->next;
      temp->next=nn;
  //  raise NotImplementedError()
      return head;
}

struct Node *delete_head(struct Node *head)
{
    // YOUR CODE HERE
    struct Node *temp=head;
    head=temp->next;
    free(temp);
    return head;
   // raise NotImplementedError()
}

struct Node *delete_tail(struct Node *head)
{
    // YOUR CODE HERE
     struct Node *temp=head;
     while(temp->next->next!=0){
      temp=temp->next;
      }
      free(temp->next);
      temp->next=NULL;
      return head;
   // raise NotImplementedError()
}
/*
// search Element
int search(struct Node * head, int val){
    // YOUR CODE HERE
    raise NotImplementedError()
}

// Insert After
struct Node *insert_after(struct Node *head, int data, int val){
     // YOUR CODE HERE
     raise NotImplementedError()
}

// Insert Before
struct Node *insert_before(struct Node *head, int data, int val){
    // YOUR CODE HERE
    raise NotImplementedError()
}
*/
// delete element
struct Node *delete_element(struct Node *head, int ele){
    // YOUR CODE HERE
    struct Node *temp=head;
    struct Node *prev=0;
    while(temp->data!=ele){
      temp=temp->next
      }
   // raise NotImplementedError()
}

int main(){
    /*struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);*/
    struct Node *head = NULL;
    head = insert_tail(head, 1);
    head = insert_tail(head, 2);
    head = insert_tail(head, 3);
    head = insert_head(head, 4);
    display(head);
/*    head = insert_after(head, 2, 7);
    display(head);
    head = insert_before(head, 2, 9);
    display(head);   */
    head = insert_pos(head, 3, 6);
    display(head);
    head = delete_head(head);
    display(head);
    head = delete_tail(head);
    display(head);
    head = delete_element(head, 1);
    display(head);   
    return 0;
}
