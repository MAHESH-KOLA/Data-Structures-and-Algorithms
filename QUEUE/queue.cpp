//QUEUE

#include<iostream>
using namespace std;
#define MAX 10
int first=-1;
int last=-1;
int a[MAX];

void enque(int n){
if(last==MAX){
 cout<<" out of space";
 }
 else{
 a[++last]=n;
}
}

int deque(){
 if(first==-1 || last==-1){
     cout<<"queue is empty: ";
    }
    else{
    first=first+1;
    }
   return first;
    }
int main(){
int t;
cout<<"enter no of elements";
cin>>t;
while(t--){
int n;
cin>>n;
enque(n);
}
first=deque();
for(int i=first+1;i<last+1;i++)
 cout<<a[i]<<" ";
}


