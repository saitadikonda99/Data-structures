#include<stdio.h>

int search( int arr[], int size, int target ) {

	for( int k=0; k<size; k++ ) {
		if( arr[k] == target ) { 
			return k;
			}
		  }
	return -1;
	}
	
int main() {
	int size;
	printf("enter the size of the array : " );
	scanf("%d",&size );
	int arr[size];
		for( int k=0; k<size; k++ ) {
			scanf("%d",&arr[k] );
			}
	int target;	
	printf("enter the target : ");
	scanf("%d",&target );
	 int ans = search( arr, size, target );
		if( ans == -1  ){ 
			printf("Element not found\n");
			}
			else {
				printf("Element found index: %d\n",ans);
				}
		return 0;
	}

