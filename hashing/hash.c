#include<stdio.h>
#define size 10

int hash( int key )  {
	return ( 2 * key + 2 ) % size;  // h(k) = 3k + 2
	}

void insert(int ht[], int key ) {
	int index = hash( key );
		while( ht[index] != -1 ) {
			printf("%d index is pre occupied\n",index );
			index = ( index + 1 ) % size;
			}		
			ht[index] = key;
			printf("%d is inserted ar index %d\n",key,index );
			
		}
	
void display( int ht[] )  {
		int s = 0;
			while( s < size  ) { 
				if( ht[s] == -1 )  {
					printf("NULL -> " );
					}
					else {
						printf("%d -> " ,ht[s] );
					}
					s++;	
		}
					printf("\n");
	}
int search( int ht[], int key )  {		
	return 0;
		}
	
int main() {

	int ht[size];
		for( int s=0; s<size; s++ ) { 
			ht[s] = -1;
			}
	
	insert( ht, 2 );
	insert( ht, 3 );
	insert(ht, 3 );
	insert( ht, 5);
	insert( ht, 7 );
	insert( ht, 13 );
	
	display(ht);
	return 0;
		}


