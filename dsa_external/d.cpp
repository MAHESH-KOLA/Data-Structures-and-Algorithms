#include<bits/stdc++.h>
using namespace std;
#define N 5
struct node{
  int data;
  node* next;
  node(int val){
   data=val;
   next=NULL;
   }
};

node* table[N];
void initialize(){
  for(int i=0;i<N;i++)
     table[i]=NULL;
  }

void insert(int val){
   node* nn;
   node* temp;
   nn=new node(val);
   int hash= nn->data%N;
   if(table[hash]==NULL){
      table[hash]=nn;
      }
   else{
     temp=table[hash];
     
     while(temp->next!=NULL){
        temp=temp->next;
     }
      temp->next=nn;
      }
   }
bool search(int val){
    int hash=val%N;
    node* temp=table[hash];
    while(temp!=NULL){
       if(temp->data==val)
        return true;
       temp=temp->next;
      }
   return false;
}

void display(){
  int i=0;
  while(i<N){
   //  int hash=i%N;
     node* temp= table[i];
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        cout<<endl;
        i++;
        }
   }
int main(){
//  int n=sizof(a)/sizeof(a[0]);
  initialize();
  int n=5;
  while(n--){
  int ele;
  cout<<" enter ele: ";
  cin>>ele;
  insert(ele);
  
  }
  display();
 if(search(13))
   cout<<"element present";
 else
   cout<<"element not present";
  }
  
