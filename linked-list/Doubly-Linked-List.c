#include<stdio.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
	};
	  struct node *head, *tail;
	
void append() {
	struct node *newnode;
	newnode = ( *struct node )malloc( sizeof(struct node) );
	printf("enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	newnode->prev = NULL;
        	if( head == NULL ) {
			head = tail = data;
			}
		  else {
			tail->next = newnode;
			newnode->prev = tail;
			tail       = newnode; 
			}
		}

void insert_begin() {
		struct node *newnode;
		newnode = ( *struct node )malloc( sizeof(struct node ) );
		printf("enter the data: ");
		scanf("%d",&newnode->data );
		newnode->next = NULL;
		newnode->prev = NULL;
	         	if( head == NULL ) {
				head = tail = newnode;
				}
			   else {
				head->prev    = newnode;
				newnode->next = head;
				head          = newnode;
				}
 
void insert_pos() {
		int pos;
		printf("enter the position : ");
		scanf("%d",&pos);
			if( pos > length() ) {
				printf("enter teh 

		



		struct node *newnode;
		newnode = ( *struct node )malloc( sizeof( struct node ) );
		printf("enter the data: ");
		scanf("%d",&newnode->data);
		newnode->prev = NULL;
		newnode->next = NULL;
		
