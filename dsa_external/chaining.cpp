#include<bits/stdc++.h>
using namespace std;
#define size 5
struct node{
 int data;
 node* next;
 node(int val){
  data=val;
  next=NULL;
 }
 };
 
void display(node* hash_table[size]){
  for(int i=0;i<size;i++){
    node* temp=hash_table[i];
    cout<<i<<" ";
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
      }
      cout<<endl;
     }
    }
int main(){
 int table[size], i;
 for(int i=0;i<size;i++)
  cin>>table[i];
 cout<<endl;
 for(int i=0;i<size;i++)
  cout<<table[i]<<" ";
 cout<<endl;
 //int visited[size];

 node* hash_table[size];
  for(i=0;i<size;i++)
  hash_table[i]=NULL;
  
  
for(i=0;i<size;i++){
 int hash=table[i]%size;
 node* nn=new node(table[i]);
  if(hash_table[hash]==NULL){
     
     hash_table[hash]=nn;
     }
  else{
   node* temp= hash_table[hash];
   while(temp && temp->next!=NULL){
      temp=temp->next;
      }
      temp->next=nn;
      }
    }
    
    
    
    
    
    
    
    
    
    
    
  display(hash_table);    
 return 0;
}
