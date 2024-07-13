// HEAP SORT
#include<bits/stdc++.h>
using namespace std;
/*void swap(int *end, int *parent){
  int t=*end;
      *end=*parent;
      *parent=t;
  }
  */
void heapify(vector<int> v, int end){
 int child, parent,i;
 for(child=end;child>0; child=parent){
   parent=(child-1)/2;
   if(v[parent]<v[child]){
     int t=v[parent];
      v[parent]=v[child];
      v[child]=t;
  }
  else
     return;
 }
}

int main(){
 vector<int> v;
 int i,n;
 cout<<"enter size of an array: ";
 cin>>n;
 vector<int>:: iterator lt;
 for(i=0;i<n;i++){
   int ele;
   cin>>ele;
   v.push_back(ele);
   }
for(i=0;i<n;i++){
   cout<< v[i]<<" ";
   }
   cout<<"\n";
 int end=1;
 while(end<n){
   heapify(v,end);
   end++;
   }
 cout<<"heap: \n";
for(i=0;i<5;i++){
   cout<< v[i];
   }  
 }

