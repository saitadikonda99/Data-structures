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
				printf("enter the valid position\n");
				}
				else if( pos == 1 ) {
  				     insert_begin();
				}
				else {
				struct node *p = root
				     int k = 0;
				  while( k < pos ) {
					p = p->next;
					k++;
					}
				
		struct node *newnode;
		newnode = ( *struct node )malloc( sizeof( struct node ) );
		printf("enter the data: ");
		scanf("%d",&newnode->data);
		newnode->prev = p;
		newnode->next = p->next;
		p->next       = newnode;
		newnode->next->prev = newnode;
		}
	}
	
void delete_begin() {
	 struct node *temp;
	 if( head == NULL ) {
		printf("List is empty\n");
		}
		else {
		      temp 	 = head;
		      head 	 = head->next;
		      head->prev = NULL;
		      free(temp);
		}	
	}
void delete_last() {
	
