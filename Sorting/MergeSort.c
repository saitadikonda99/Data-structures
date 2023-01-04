// Merge sort in c

#include<stdio.h>









int main() {
	int n;
	// size of the array 
	printf("enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	// input the array
	int k = 0; 
	while( k < n ) {
		printf("arr[%d] = ",k);
		scanf("%d",&arr[k]);
		}
	sort(  arr , k );
        return 0;
	}

