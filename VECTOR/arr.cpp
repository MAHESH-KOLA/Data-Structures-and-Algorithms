// circular queue using array

#include<iostream>
using namespace std;
#define MAX 10


int enque(int a[10],int ele){
int i;
 for(i=0;i<5;i++){
   cout<<a[i%MAX];
}
return 0;
}

int main{
int a[MAX]={1,2,3,4,5};
 enque(a,2);
 }
