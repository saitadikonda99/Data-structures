// Selection sort in c 

#include<stdio.h>
int Max( int[] , int);
int SelectionSort( int[] , int n );
int SelectionSort( int arr[] , int n  ) {
	// run the for loop for n-1 times
	for( int k=0; k<n; k++ ) {
		int last = n-k-1;
		// max element in the array
	int max =Max( arr , last );

	// swap the max and last	
		int temp  = arr[last];
		arr[last] = arr[max];
		arr[max]  = temp;
}
	// print the array after sorted

	for( int k=0; k<n; k++ ) {
		printf("%d " ,arr[k] );
		}
		printf("\n");

		return 0;
	}
int Max( int arr[] , int last ) {
	int max = 0;
	// find the max element using for loop
	for( int k=0; k<=last; k++ ) {
		if( arr[max] < arr[k] ) {
			max = k;
			}
		}
	return max;
	}
 int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
 // scan the using for loop 
	for( int k=0; k<n; k++ ) {
		scanf("%d",&arr[k]);
		}
	SelectionSort( arr , n );
	return 0;
	}

			
