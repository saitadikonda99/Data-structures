#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	};
	struct node *last = NULL;
	
void insert_begin() {
	struct node *newnode;
	newnode = ( struct node* )malloc( sizeof(struct node ));
	printf("enter the data\n");
	scanf("%d",&newnode->data );
	newnode->next = NULL;
		if( last == NULL ) { 
			last       = newnode;
			last->next = newnode;
			}
		  else {
			newnode->next = last->next;
			last->next    = newnode;
			}	
		}

void append() {
		struct node *newnode;
        newnode = ( struct node* )malloc( sizeof(struct node ));
        printf("enter the data\n");
        scanf("%d",&newnode->data );
        newnode->next = NULL;
                if( last == NULL ) {
                        head       = newnode;
                        head->next = newnode;
                        }
		    else {
                        newnode->next = last->next;
                        last->next    = newnode;
                        last          = newnode;
                        }
                }

void insert_pos() {
		struct node *newnode;
		newnode = ( struct node* )malloc( sizeof(struct node ));
        printf("enter the data\n");
        scanf("%d",&newnode->data );
        newnode->next = NULL;
                if( last == NULL ) {
                        last       = newnode;
                        last->next = newnode;
                        }
