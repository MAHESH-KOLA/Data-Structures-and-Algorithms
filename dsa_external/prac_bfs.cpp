#include<bits/stdc++.h>
using namespace std;
#define size 10
struct node{
int vertex;
node* next;
 node(int val){
  vertex=val;
  next=NULL;
 }
};

void insert(node* list[size], int s, int d){
  node* dest=new node(d);
  dest->next=list[s];
  list[s]=dest;
  node* src=new node(s);
  src->next=list[d];
  list[d]=src;
}

void bfs(node* list[size]){
  stack<int> st;
  int visited[size],i,v;
  for(i=0;i<size;i++)
     visited[i]=0;
  int sv=0;
  st.push(sv);
  //visited[sv]=1;
  while(!st.empty()){
    
      int v=st.top();
    st.pop();
     if(visited[v]==0){
       cout<<v<<" ";
    visited[v]=1;
    }
   
    node* temp=list[v];
    while(temp!=NULL){
       if(visited[temp->vertex]==0){
         st.push(temp->vertex);
       visited[v]=1;
         }
         temp=temp->next;
  }
  }
  }
    
   /* int v=q.front();
    cout<<v<<" ";
    q.pop();
  node* temp= list[v];
  while(temp!=NULL){
    if(visited[temp->vertex]==0){
      q.push(temp->vertex);
      visited[temp->vertex]=1;
      }
   temp=temp->next; */

void display(node* list[size]){
   for(int i=0;i<size;i++){
    cout<<i<<" ";
     node* temp=list[i];
     while(temp!=0){
       cout<<temp->vertex<<" ";
       temp=temp->next;
       }
       cout<<endl;
      }
}

int main(){
  node* list[size];
   for(int i=0;i<size;i++)
      list[i]=NULL;
   
   insert(list,0,1);
   insert(list,0,2);
   insert(list,1,2);
   insert(list,1,3);
   insert(list,4,3);
   insert(list,5,3);
   insert(list,6,4);
   insert(list,7,5);
   display(list);
  bfs(list);
}
