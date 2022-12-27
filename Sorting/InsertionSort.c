 #include<stdio.h>
	int InsertionSort( int[], int );
	int InsertionSort( int arr[], int n ) {
		// for loop
		for( int k=1; k<n; k++ ) {
			int temp = arr[k];
			int s = k-1;
		// sort the array using while loop
		while( s>=0 && arr[s] > temp ) {	
			arr[s+1] =  arr[s];
			s -= 1;
			}
			arr[s+1] = temp;
		}
		 return 0;
		}
	void PrintArray( int arr[] , int n ) {
			// print the array using for loop
			for( int k=0; k<n; k++ ) {
				printf("%d ",arr[k]);
				}
				printf("\n");
			}
		

int main() {
	int size,k=0;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	// input the array using while loop
while( k < size ) {
	printf("arr[%d] = " , k );
	scanf("%d",&arr[k] );
	k++;
	}
	InsertionSort( arr, size );
	PrintArray( arr, size );
	return 0;
	}

