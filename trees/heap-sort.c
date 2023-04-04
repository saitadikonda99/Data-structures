#include<stdio.h>
#include<stdlib.h>

void Swap( int* a, int* b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify( int arr[], int n , int k ) {
    int largest = k;
    int right = k * 2 + 2;
    int left = k * 2  + 1;


    if( left < n && arr[left] > arr[largest] ) {
        largest = left;
    }
    if( right < n && arr[right] > arr[largest] ) {
        largest = right;
    }
    if( largest != k ) {
        Swap( &arr[k], &arr[largest]);
        Heapify( arr, n, largest );
    }
}


void HeapSort( int arr[], int n ) {

    for( int k=n/2-1; k>=0; k-- ) {
        Heapify( arr, n, k);
    }

    for( int k=n-1; k>0; k-- ) {
        Swap( &arr[0], &arr[k]);
        Heapify( arr, k, 0);
    }
}


void insertion( int arr[], int *n, int key ) {
    (*n)++;
    arr[*n-1] = key;
    int k = *n-1;

    while( k > 0 ) {
        int parent = k / 2;
          if( parent > arr[k]) {
            Swap( &arr[parent], &arr[k]);
            k = parent;
          }
          else {
            return;
          }
    }
}

void delete( int arr[], int *n, int key ) {

    int pos = -1;
    for( int k=0; k<*n; k++ ) {
        if( arr[k] == key ) {
            pos = k;
        }
    }
    if( pos == -1 ) {
        printf("element not found");
        return;
    }

    Swap( &arr[pos], &arr[*n-1]);

    (*n)--;

     for( int k=*n/2-1; k>=0; k-- ) {
        Heapify( arr, k, *n);
    }

}

int main() {
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array : ");
       for( int k=0; k<n; k++ ) {
        scanf("%d",&arr[k]);
       }
    HeapSort( arr, n);
    printf("the sorted array is : ");
       for( int k=0; k<n; k++ ) {
        printf("%d ",arr[k]);
       }
       printf("\n");

    insertion( arr, &n, 10);
    printf("after insertion of 10 : ");
       for( int k=0; k<n; k++ ) {
        printf("%d ",arr[k]);
       }
        printf("\n");
    delete( arr, &n, 10);
    printf("after deletion of 10 : ");
       for( int k=0; k<n; k++ ) {
        printf("%d ",arr[k]);
       }
        printf("\n");
}
