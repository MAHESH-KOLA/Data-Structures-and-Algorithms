#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> a;
  a={2,5,1,8,4,3};
  int i;
  for(i=1;i<a.size();i++){
     for(int j=i;j>0;j--){
       if(a[j]<a[j-1]){
          int t=a[j];
          a[j]=a[j-1];
          a[j-1]=t;
          }
          }
           }
           for(i=0;i<a.size();i++){
              cout<<a[i]<<" ";
              }
}
