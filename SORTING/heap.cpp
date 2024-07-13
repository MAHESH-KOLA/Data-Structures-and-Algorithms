#include<bits/stdc++.h>
using namespace std;

class heap{
public:
void swap(int *a, int *b){
    int t=*a;
      *a=*b;
      *b=t;
      }
void heapify(int  a[10], int n){
   int parent, child;
   for(int i=1;i<n;i++){
   for(child=i; child>0; child=parent){
        parent=(child-1)/2;
        if(a[parent]>a[child]){
        swap(&a[parent],&a[child]);
          }
        }
        }
     }

 void heap_sort(int a[10], int n){
  heapify(a,n);
 // for(int i=0;i<n;i++)
   // cout<<a[i]<<" ";
   for(int i=n-1;i>=0;i--){
     swap(&a[0],&a[i]);
     heapify(a,i);
  }
  
  }
  
  };
  
int main(){
  heap h;
  int a[10]={2,4,3,1,7,10,5,8,6,9};
  int n=sizeof(a)/sizeof(a[0]);
  
  h.heap_sort(a, n);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
  }
