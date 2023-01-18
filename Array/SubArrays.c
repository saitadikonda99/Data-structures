#include<stdio.h>
void SubArray( int[], int, int );
void SubArray( int arr[], int start, int end ) {
	
	for( int k=start; k<end; k++ ) {
		 for( int r=k; r<end; r++ ) {
			 for( int s=k; s<=r; s++ ) {
	
			 printf("%d ", arr[s]);
            }
            printf("\n");
        }
    }
}
	
	
int main() {
	int n;
	printf("Enter the number size: ");
	scanf("%d",&n);
	int arr[n];
		for( int k=0; k<n; k++ ) {
			scanf("%d",&arr[k]);
			}
	SubArray( arr, 0 , n );
	return 0;
	}

