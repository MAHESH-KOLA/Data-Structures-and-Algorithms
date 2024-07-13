#include<bits/stdc++.h>
using namespace std;
int main(){
int  a[10]={2,5,3,8,9,6,7,5,1,4};
 int hash[10];
int n=sizeof(a)/sizeof(a[0]);
int i=0;
for(int i=0;i<n;i++){
   hash[a[i]%10]=a[i];
   }
for(int i=0;i<n;i++)
 cout<<hash[i]<<" ";
 return 0;
 }
