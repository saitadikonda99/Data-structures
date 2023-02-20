// Quick Sort in C

#include<stdio.h>
	int sort( int[] , int , int );
	void  printarray( int[] , int );

	int sort( int arr[] , int low , int hi ) {
	// consider the following
        	if( low >= hi ) {
            	return 0;
	        }
        	int start = low;
        	int end   = hi;
        // calculate the mid element
	// st + ( end - st ) / 2 is same as st  + end / 2 just to avoid overflow of int

        	int mid   = start + ( end - start ) / 2;
       	 	int pivot = arr[mid];
        // run the while loop

        while( start <= end ) {

            // also a reason , why it won't swaped if it is already sorted
            while( arr[start] < pivot ) {
                start++;
            }
            while( arr[end] > pivot ) {
                end--;
            }
             if( start <= end ) {
                int temp   = arr[start];
                arr[start] = arr[ end ];
                arr[end]   = temp;
                start++;
                end--;
            }
			}

        // now my pivot index is at right index , please sort two halves
        sort( arr, low, end );
        sort( arr, start, hi );
	return 0;
}

	void printarray( int arr[] , int n ) {
		int s = 0;
        while( s < n ) {
                printf("%d ",arr[s]);
                s++;
                }
                printf("\n");
		}

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
		k++;
                }
        sort(  arr , 0 , n - 1 );
	printarray( arr , n);
        return 0;
        }		
