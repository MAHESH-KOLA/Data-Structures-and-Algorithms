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

void insert(node* list[10], int s, int d){
   node* dest= new node(d);
   dest->next=list[s];
   list[s]=dest;
  
  node* src=new node(s);
  src->next=list[d];
  list[d]=src;
}

void display(node* list[10]){
  for(int i=0;i<size;i++){
    node* temp= list[i];
    cout<<i<<" ";
    while(temp!=NULL){
       cout<<temp->vertex<<" ";
       temp=temp->next;
       }
       cout<<endl;
       }
}

void BFS(node* list[10]){
  stack<int> st;
  int visited[size];
  for(int i=0;i<size;i++)
     visited[i]=0;
  int sv=0;
  st.push(sv);
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
            }
            temp=temp->next;
            }
        }
}
int main(){
 node* list[size];
 for(int i=0;i<size;i++)
    list[i]=NULL;
  insert(list,0,1);
  insert(list,0,2);
  insert(list,2,3);
  insert(list,3,4);
    insert(list,1,5);
  insert(list,2,4);
  insert(list,5,2);
  display(list);
  BFS(list);
  return 0;
}
 
 
