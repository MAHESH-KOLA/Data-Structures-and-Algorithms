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
queue<int> q;
void add_vertex(node* list[size], int s, int d){
  node* dest= new node(d);
  dest->next=list[s];
  list[s]=dest;
  
  node* src= new node(s);
  
  src->next=list[d];
  list[d]=src;

}

void dfs(node* list[size]){
  int visited[size];
  for(int i=0;i<size;i++)
     visited[i]=0;
  int sv=0;
  q.push(sv);
  visited[sv]=1;
  
  while(!q.empty()){
    int v=q.front();
    q.pop();
    cout<<v<<" ";
    node* temp= list[v];
    while(temp!=0){
     if(visited[temp->vertex]==0){
       q.push(temp->vertex);
       visited[temp->vertex]=1;
       }
       temp=temp->next;
}
}
} 
 void display(node*  list[size]){
  for(int i=0;i<size; i++){
     node* temp=list[i];
     cout<<i<<"->";
     while(temp!=NULL){
       cout<<temp->vertex<<"->";
       temp=temp->next;
     }
     cout<<"\n";
   }  
  }
 
int main(){
  node* list[size];
  for( int i=0;i<size;i++)
     list[i]=NULL;
  add_vertex(list,0,1);
   add_vertex(list,0,2);
    add_vertex(list,1,3);
     add_vertex(list,1,4);
    add_vertex(list,2,5);
    add_vertex(list,2,6);
    add_vertex(list,4,7);
    add_vertex(list,3,7);
    add_vertex(list,6,7);
    add_vertex(list,5,7);
    dfs(list);
    
    display(list);
return 0;
}

