#include<iostream>
using namespace std;

void sort(int a[], int n){
int i,j;
 for(i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   if(a[i]>a[j]){
     int t=a[i];
     a[i]=a[j];
     a[j]=t;
     }
     }
     }
  
    }
int search(int a[], int st,int end, int ele){
  /* int i=0, j=n-1;
   int mid=(i+j)/2;
   while(i<j){
      if(a[mid]==ele)
        return 1;
       else if(ele<a[mid]){
        j=mid-1;
         mid=(i+j)/2;
        }
      else{
       i=mid;
       mid=(i+j)/2;
       }   
   }
   return 0;
*/
  int i=st,j=end;
  if(i<j){
  int mid=(i+j)/2;
   if(a[i]==ele)
     return 1;
    else if(ele<a[i]){
    return search(a,i,mid-1,ele);
    }
    else
     return search(a,mid+1,j,ele);
     }
  return 0;
}

int main(){
  int n;
  cout<<" enter size o an array: ";
  cin>>n;
  int a[n], i;
  for(i=0;i<n;i++){
    cin>>a[i];
    }
  
 sort(a,n);
 int ele;

   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
     cout<<"enter element to be searched: ";
 cin>>ele;
if(search(a,0,n,ele))
   cout<<" element found..";
else
   cout<<"element not found..";
   
   return 0;
    }
