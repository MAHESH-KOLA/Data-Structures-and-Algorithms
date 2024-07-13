#include<stdio.h>
void swap(int *a, int *b){
         int temp = *a;
        *a = *b;
        *b = temp;
}
void heapify(int arr[], int last){
    for(int j = 1;  j < last ; j++){
            int child, parent;
            for (child = j; child > 0; child = parent){
                parent = (child-1) / 2;
                if(arr[parent] < arr[child])            // then (out of max-heap order)
                    swap(&arr[parent], &arr[child]);
            }
        }
}
void heapSort(int a[], int n){
    heapify(a, n); /* Build Max heap */
   /* for (int i = n -1; i >= 0; i--) {    // One by one extract an element from max heap
         swap(&a[0], &a[i]);
        heapify(a, i);
    }  */
}
void main(){
    int a[] ={2,4,3,1,7,10,5,8,6,9};
    int n = sizeof(a)/sizeof(a[0]);
    heapSort(a, n);
    for(int i = 0; i<n; i++)
       printf("%d\t", a[i]);
}
