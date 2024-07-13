#include<iostream>
using namespace std;
#define n 8
int main(){
int a[n],i;
 for(i=0;i<n;i++)
   cin>>a[i];
 int table[n];
 for(i=0;i<n;i++)
   table[i]=-1;
 for(i=0;i<n;i++){
   int hash=a[i]%n;
   if(table[hash]==-1){
       table[hash]=a[i];
      }
   else{
   int j=0;
     while(table[hash]!=-1){
         hash=(hash+i*i)%n;
         j++;
         }
         if(table[hash]==-1)
         table[hash]=a[i];
         }
       }
    for(i=0;i<n;i++)
      cout<<table[i]<<" ";
   }
