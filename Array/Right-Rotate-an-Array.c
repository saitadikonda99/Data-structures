#include<stdio.h>
void rotate( int[], int, int );
void printarr( int[] ,int );
	
void rotate( int arr[], int n, int k ) {
		
	for( int s=0; s<k; s++ ) {
		int temp = arr[n-1];
		    	for( int r=n-1; r>0; r-- ) {	
				arr[r] = arr[r-1];
				}
			  arr[0] = temp;
			}
	printarr( arr, n );
	
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
	int k;
	printf("number of right rotations : ");
	scanf("%d",&k);
	printf("enter the array elements : ");
        int arr[n];
                for( int k=0; k<n; k++ ) {
                        scanf("%d",&arr[k] );
                        }
        rotate( arr, n, k );
        return 0;
        } 
 

