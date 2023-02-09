#include<stdio.h>
	
void reverse( int[], int );
void printarr( int[], int );
void reverse( int arr[], int n ) {

	int start = 0;
	int end   = n - 1;
		while( start < end ) {		
			int temp   = arr[start];
			arr[start] = arr[end];
			arr[end]   = temp;
			start++;
			end--;
	}
		}

void printarr( int arr[], int n ) {
		for( int k=0; k<n; k++ ) {
			printf("%d ",arr[k]);
			}
			printf("\n");
		}
int main() {
	int n;
	printf("enter the size of the array: " );
	scanf("%d",&n);
	int arr[n];
     		for( int k=0; k<n; k++ ) {
		 	scanf("%d",&arr[k] );
 			}
	reverse( arr, n );
	printarr( arr, n );
	return 0;
	}

