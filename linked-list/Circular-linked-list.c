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

int length() {
	struct node *temp = tail;
		int len = 0;
		while( temp != NULL ) {
			len++;
			temp = temp->next;
			}
		return len;
	}

					
void insert_pos() {
		int pos;
		printf("Enter the position: ");	
		scanf("%d",&pos);	
			if( pos > len || pos < 0 ) {
				printf("enter the valid input\n");
				}
			   else {
				struct node *temp = tail;
			            int k  = 1;
				    while( k < pos - 1 ) {
						temp = temp->next;
						}
				    newnode->next = temp->next;
				    temp->next    = newnode;
				}
			}
		
							
