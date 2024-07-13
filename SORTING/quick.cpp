#include<iostream>
using namespace std;

void quick(int a[20], int st, int end){
 int i,j,t;
 int pivot;
 if(st<end){
  i=st;
  j=end;
  pivot=st;
 while(i<j){
   while(a[i]<=a[pivot] && i<=end)
     i++;
   while(a[j]>a[pivot] && j>=st)
    j--;
  if(i<j){
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  }
  }
  t=a[j];
  a[j]=a[pivot];
  a[pivot]=t;

quick(a,st,j-1);
quick(a,j+1,end);
}
}

int main(){
 int n;
 cout<<"enter size of an array: ";
 cin>>n;
 int a[n],i;
 for(i=0;i<n;i++)
   cin>>a[i];
 quick(a,0,n-1);
 cout<<"after sorting: ";
  for(i=0;i<n;i++)
   cout<<a[i]<<" ";
  return 0;
}
