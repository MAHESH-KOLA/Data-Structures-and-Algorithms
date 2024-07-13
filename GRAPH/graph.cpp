#include<bits/stdc++.h>
using namespace std;
#define size 10

struct node{
 int data;
 node* next;
 }
 node(int val){
  data=val;
  next=NULL;
  }
  };
int main(){
 
  node* li[size];
  for(int i=0;i<size;i++)
     li[i]=NULL;
  insert(li, 0,1);
  insert(li, 0,3);
  insert(li, 1,3);
  insert(li, 1,4);
  insert(li, 2,5);
  insert(li, 2,6);
  insert(li, 4,7);
  insert(li, 3,7);
  insert(li, 6,7);
  insert(li, 5,7);
return 0;
}
