#include<iostream>
using namespace std;

void swap(int *a, int *b){
  int t=*a;
     *a=*b;
     *b=t;
   }
   
void quick(int a[10], int st, int end){
  int i,j,pivot;
  if(st<end){
     i=st;
     j=end;
     pivot=st;
     while(i<j){
       while(a[i]<=a[pivot] && i<=end)
          i++;
        while(a[j]>a[pivot] && j>=st)
          j--;
        if(i<j)
           swap(&a[i],&a[j]);
           }
         swap(&a[pivot],&a[j]);
       quick(a,st,j-1);
       quick(a,j+1,end);
       }
}

void merge_sort(int a[10], int st, int mid, int end){
	int r[10], k=0, i=st, j=mid+1;
	
	while(i<=mid && j<=end){
	  if(a[i]<a[j])
	     r[k++]=a[i++];
	   else
	     r[k++]=a[j++];
	  }
	 while(i<=mid)
	   r[k++]=a[i++];
	 while(j<=end)
	   r[k++]=a[j++];
       for(int i=0;i<k;i++)
          a[st+i]=r[i];
}

void merge(int a[10], int st, int end){
    if(st<end){
    int mid=(st+end)/2;
     merge(a,st,mid);
     merge(a,mid+1,end);
     merge_sort(a,st,mid,end);
	}
}

void heapify(int a[10], int n){
    int parent, child;
     for(int i=1;i<n;i++){
      for(child=i;child>0;child=parent){
         parent=(child-1)/2;
         if(a[child]>a[parent])
           swap(&a[child],&a[parent]);
        }
	}
}
void heap_sort(int a[10], int n){
    heapify(a,n);
    
    for(int i=n-1;i>=0;i--){
     swap(&a[0],&a[i]);
     heapify(a,i);
  }
}
int search(int a[10],int i, int j, int sea){
    if(i<=j){
      int mid=(i+j)/2;
      if(a[mid]==sea)
        return mid;
       else if(a[mid]>sea)
          return search(a,i,mid-1,sea);
        else
          return search(a,mid+1,j,sea);        
    }
    return -1;
}

int main(){
  int n;
  cout<<"enter n: ";
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
     cin>>a[i];
  quick(a,0,n-1);
 // merge(a,0,n-1);
 //  heap_sort(a,n);
  cout<<"after sort: \n";
 for(i=0;i<n;i++)
     cout<<a[i]<<" ";
     int sea;
 cout<<"enter element to search: ";
 cin>>sea;
 int res=search(a,0,n,sea);
   if(res!=-1)
     cout<<"element fount at: "<<res;
   else
     cout<<"element not found";
}








