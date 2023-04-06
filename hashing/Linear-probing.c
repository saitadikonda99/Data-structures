//                               <<<<<<<<<<< Tadikonda Sai Manikanta >>>>>>>>>>>

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int hash[MAX];

int pos( int key ) {
    return ( 3 * key + 2 ) % MAX;
}

void insert( ) {
    int key;
    printf("Enter the key to insert : ");
    scanf("%d",&key);
    int position = pos( key);
            while( hash[position] != -1 ) {
                printf("%d position is pre-occupied\n", position);
                position = position + 1 % MAX;
            }
            hash[position] = key;
            printf("%d elemene is inserted at %d position\n",key,position);
}

void display() {

    for( int k=0; k<MAX; k++ ) {
        if( hash[k] == -1 ) {
            printf(" - ");
        }
        else {
            printf(" %d ",hash[k]);
        }
    }
    printf("\n");
}

void search() {
    int key;
    printf("Enter the key to insert : ");
    scanf("%d",&key);
    int position = pos( key );

      while( hash[position] != key) {
            position = position + 1% MAX;
                if( hash[position] == -1 || hash[position] == pos(key)) {
                    printf("element not found");
                    return;
                }
      }
      printf("element found at index %d\n",position);
}

int main() {

    for( int k=0; k<MAX; k++ ) {
        hash[k] = -1;
    }
    while(1) {
			printf(  "-- Menu -- \n " );
			printf(    "1.insert \n ");
			printf(     "2.display \n");
			printf(    " 3.search \n");
			printf(     "0.exit \n");
			int ch;
			printf("Choose the option: ");
			scanf("%d",&ch);
		switch( ch ) {
			case 1 : insert();
				     break;
			case 2 : display();
				     break;
			case 3 : search();
                     break;
			case 0 : exit(0);
			}
	}
		return 0;
		}