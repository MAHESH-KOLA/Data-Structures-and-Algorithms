#include<bits/stdc++.h>
using namespace std;
#define n 5
int main(){
int i,a[n];
for(i=0;i<n;i++)
  cin>>a[i];

int table[n];
for(i=0;i<n;i++)
  table[i]=0;
  
for(i=0;i<n;i++){
   int hash=a[i]%n;
   if(table[hash]==0){
      table[hash]=a[i];
      }
   else{
     int hash2=hash;
     while(table[hash2]!=0){
        hash2=((hash2*hash2)+1)%n;
       }
       table[hash2]=a[i];
     }
   }
 for(i=0;i<n;i++){
   cout<<a[i]<<" ";
   }
   cout<<endl;
 for(i=0;i<n;i++){
   cout<<table[i]<<" ";
   }
 }
   
