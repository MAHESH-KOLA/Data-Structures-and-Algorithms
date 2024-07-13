#include<iostream>
using namespace std;

void heapify(int a[20], int end){
  int child,parent,i;
  for(child=end; child>0 ;child=parent){
      parent=(child-1)/2;
      if(a[child]>a[parent]){
        int t=a[child];
        a[child]=a[parent];
        a[parent]=t;
        }
       else{
       return;
}
}
}

int main(){
 int n;
 cout<<"enter size of an array";
 cin>>n;
 int a[n], i;
 for(i=0;i<n;i++)
   cin>>a[i];
 cout<<"given array: ";
 for(i=0;i<n;i++)
  cout<<a[i]<<" ";
 int end=1;
 while(end<n){
   heapify(a,end);
   end++;
 }
 cout<<"\n";
cout<<" heaptying: ";
for(i=0;i<n;i++)
  cout<<a[i]<<" ";
for(i=n-1;i>0;i--){
    int t=a[0];
    a[0]=a[i];
    a[i]=t;
    heapify(a,n-i);
    }
cout<<" heap sort: ";
for(i=0;i<n;i++)
  cout<<a[i]<<" ";
 return 0;
} 
