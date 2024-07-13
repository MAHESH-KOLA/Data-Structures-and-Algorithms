#include<bits/stdc++.h>
using namespace std;

class heap{
public:
/*void swap(int *a, int *b){
    int t=*a;
      *a=*b;
      *b=t;
      }*/
void heapify(int  a[],int st, int n){
        int largest=st;
        int left=(2*st+1);
        int right=(2*st+2);
        if(left<n && a[left]>a[st])
          largest=left;
        if(right<n && a[right]>a[largest])
          largest=right;
        if(largest!=st){
         swap(a[st],a[largest]);
        heapify(a,largest,n);  
      }
     }

 void max_heap(int a[], int n){
     int st= (n/2)-1;
     for(int i=st; i>=0;i--)
          heapify(a,i,n);
  
  }
  
  };
  
int main(){
  heap h;
  int a[]={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
  int n=sizeof(a)/sizeof(a[0]);
  
  h.max_heap(a, n);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
  }
