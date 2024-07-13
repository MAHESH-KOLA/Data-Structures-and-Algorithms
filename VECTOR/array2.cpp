#include<bits/stdc++.h>
using namespace std;


int main(){
 int n;
 cout<<"enter n: ";
 cin>>n;
 int a[n],i,j;
 for(i=0;i<n;i++){
  cin>>a[i];
  }
  for(i=0;i<n;i++){
  cout<<a[i];
  }
  cout<<endl;
  for(i=0;i<n;i++){
      for(j=i+1;j>0;j--){
         if(a[j]<a[j-1] ){
           int  t=a[j];
           a[j]=a[j-1];
           a[j-1]=t;
           }
           }
  }
  for (i=0;i<n;i++)
    cout<<a[i];   
  return 0;
  }
