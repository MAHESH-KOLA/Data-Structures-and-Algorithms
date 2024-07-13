//Merge sort

#include<iostream>
using namespace std;

void merge(int a[20], int st,int mid, int en){
	int res[en],i=st,j=mid+1;
	int k=0;
	while(i<=mid && j<=en){
	  if(a[i]<a[j]){
	    res[k]=a[i];
	    k++;
	    i++;
	    }
	  else{
	    res[k]=a[j];
	    k++;
	    j++;
	    }
	   }
	 while(i<=mid){
	   res[k]=a[i];
	   k++;
	   i++;
	  }
	 while(j<=en){
	  res[k]=a[j];
	  k++;j++;
	  }
	for(i=0;i<k;i++)
	  a[i+st]=res[i];
}

void divide(int a[], int st, int en){
int i,j,t;
 if(st<en){
  int mid=(en+st)/2;
  divide(a,st,mid);
  divide(a,mid+1,en);
  merge(a,st,mid,en);
 }
 }

int main(){
 int n;
 cout<<"enter size of an array: ";
 cin>>n;
 int a[n],i;
 for(i=0;i<n;i++)
   cin>>a[i];
 divide(a,0,n-1);
// for(i=0;i<n;i++)
  // cout<<a[i]<<" ";
 // divide(a,0,n-1);
  for(i=0;i<n;i++)
   cout<<a[i]<<" ";
  return 0;
}
