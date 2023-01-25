/ Merge sort in c

#include<stdio.h>
void MergeSort( int[], int, int );
void Sorting( int[], int, int, int );
void PrintArr( int[], int );	
void Sorting( int arr[], int start, int mid, int end ) {
	 	
	int s1 = mid - start + 1;
	int s2 = end - mid;
	
	// create two temporary arrays
	int temp1[s1];
	int temp2[s2];
	
	for( int k=0; k<s1; k++ ) {
		 temp1[k] = arr[start+k];
		}
	for( int k=0; k<s2; k++ ) {
                 temp2[k] = arr[mid+1+k];
                }
	int k1 = 0;
	int k2 = 0;
	int k3 = start;
	
		while( k1 < s1 && k2 < s2 ) {
			if( temp1[k1] <= temp2[k2] ) {
				arr[k3] = temp1[k1];
				k1++;
				
				}
			  else {
			 	arr[k3] = temp2[k2];
				k2++;
				}
			k3++;
			}
	while( k1 < s1 ) {
		arr[k3] = temp1[k1];	
		k1++;
		k3++;
		}
	while( k2 < s2 ) {
		arr[k3] = temp2[k2];
		k2++;
		k3++;
		}

}
               
void MergeSort( int arr[], int start , int end ) {
	
	// check whether the start is less than end	
	if( start < end ) {
	// calculate the mid value 
	//  start + ( end - start) / 2, same as ( (start+end)/2 ), just to prevent the overflow
	int mid = start + ( end - start) / 2;
	// recursion call
 	MergeSort( arr, start, mid );
	MergeSort( arr, mid+1, end );
	Sorting( arr, start, mid, end );
	}
}

void PrintArr( int arr[], int n ) {
	// print the array after sorted
		printf("[ ");
	for( int k=0; k<n; k++ ) {
		printf("%d ",arr[k]);
		}
		printf("]");
		printf("\n");
		}


int main() {
	int n;
	// size of the array 
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	// input the array
		for( int k=0; k<n; k++ ) {	
			scanf("%d",&arr[k]);
			}
	MergeSort( arr, 0, n-1 );
	PrintArr( arr, n );	
	return 0;
		}

