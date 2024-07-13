#include<iostream>
using namespace std;
/*
void quick(int a[], int st, int end){
  int i,j,pivot,t;
  if(st<end){
   i=st;
   j=end;
   pivot=st;
   while(i<j){
   while(a[i]<=a[pivot] && i<=end)
     i++;
   while(a[j]>a[pivot])
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
}    */
void merge_sort(int a[10], int st, int mid, int end){
   int i=st, j=mid+1,b[end],k=0;
   while(i<=mid && j<=end){
    if(a[i]<a[j])
       b[k++]=a[i++];
    else
       b[k++]=a[j++];
     }
    while(i<=mid)
      b[k++]=a[i++];
    while(j<=end)
      b[k++]=a[j++];
     for(int j=0;j<k;j++)
       a[st+j]=b[j];
}

void merge(int a[], int st, int end){
if(st<end){
 int mid=(end+st)/2;
 merge(a,st,mid);
 merge(a,mid+1,end);
 merge_sort(a,st,mid,end);
}
}

int main(){
int n;
cout<<"enter no. of elements";
cin>>n;
int a[n],i;
for(int i=0;i<n;i++)
  cin>>a[i];
/* quick(a,0,n-1);
cout<<"\n array after quick sort..";
for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 */
merge(a,0,n-1);
cout<<"\n array after merge sort..";
for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 return 0;
 }

