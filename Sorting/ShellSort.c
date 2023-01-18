#include<stdio.h>
void ShellSort( int[], int  );
void PrintArr(  int[], int  );
void ShellSort( int arr[], int n ) {
	
	for( int gap = n/2; gap > 0; gap /= 2 ) {
		
		for( int k = gap; k < n; k++ ) {
			
			int temp = arr[k];
			int s    = 0;

		for( s = k; s >=gap && arr[s-gap] > temp; s -= gap ) {

			arr[s] = arr[s-gap];
		}
			arr[s] = temp;

		}
	}
}
void PrintArr( int arr[], int n ) {
		printf("[ ");
		for( int k=0; k<n; k++ ) {
			printf("%d ",arr[k]);	
			}
		printf("]");
		printf("\n");
		}
	
 int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
		for( int k=0; k<n; k++ ) {
                        scanf("%d",&arr[k]);
                        }
	ShellSort( arr , n );
	PrintArr( arr , n );
	return 0;
	}

