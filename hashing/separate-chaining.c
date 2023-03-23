#include<stdio.h>
#include<stdlib.h>
#define Max_size 10

struct node {
	int data;
	struct node *next;
	};

	struct node *list[Max_size];
	
int pos( int key ) {
	return key % Max_size;
	}

void insert() {
	int key; 
	printf("enter the key to insert: ");
	scanf("%d",&key );
	int position = pos( key );
	struct node *newnode = ( struct node * )malloc( sizeof( struct node ) );
	newnode->data = key;
	newnode->next = NULL;
		if( list[position] == NULL ) {
			list[position] = newnode;
			}
			else {
				struct node *temp = list[position];
					while( temp->next != NULL ) {
						temp = temp->next;
						}
						temp->next = newnode;
						}
				}
		
void display() {
	struct node *temp;
		for( int k=0; k<Max_size; k++  ) {
			temp = list[k];
				while( temp != NULL ) {
					printf("%d --> ",temp->data );
					temp = temp->next;
					}
					printf("NULL\n");	
				}
	}

void search() {
	int element;
	printf("enter the element to element: ");
    scanf("%d",&element );
	int position = pos( element );
	struct node *temp = list[position];
		while( temp != NULL ) {
			if( temp->data == element ) {
				printf("element found at %d\n",position );
				}
			temp = temp->next;
			}
		printf("element %d not found\n",element );

		}
int main() {
	
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


