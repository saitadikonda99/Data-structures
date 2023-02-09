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
		
void delete_begin() {


		
		}


void delete_pos() {
	

		
	
	}
	

void delete_last() {
	
		
	

	}


void display() {
	

	
	
	
		}
	

void reverse() {

 

		}

	
void sum() {


	}

void product() {


		
	}

int main() {
	  
          printf( " --------- CIRCULAR LINKED LIST ---------\n " );
   	  while( 1 ) {
		printf("\n");
		printf("\n");
  		printf(" 1.append\n");
		printf(" 2.insert at begin\n" );
                printf(" 3.insert at position \n" );
                printf(" 4.delete at begin \n" );
                printf(" 5.delete at position\n" );
                printf(" 6.delete at end\n" );
		printf(" 7.length of the linked list\n");	
                printf(" 8.display\n" );
		printf(" 9.reverse the linked list\n");
		printf(" 10.sum of all nodes\n");
		printf(" 11.product of all nodes\n");
		printf(" 0.exit\n");
		printf("\n");
		printf("\n");
		 int ch,length;
	         printf("---- enter your choice ---- : \n");
		 scanf("%d",&ch);
 	 switch( ch ) {
			
                        case 0  : exit(0);
   			case 1  : append();
				  break;
                        case 2  : insert_begin();
                                  break;
                        case 3  : insert_pos();
                                  break;
                        case 4  : delete_begin();
                                  break;
                        case 5  : delete_pos();
                                  break;
                        case 6  : delete_last();
                                  break;
                        case 7  : length = length_linked();
				  printf("length of the liked list :%d\n",length);
                                  break;
                        case 8  : display();
                                  break;
			case 9  : reverse();
				  break;
			case 10 : sum();
				  break;
			case 11 : product();
				  break;
		       default : printf(" ----choose from 0  -  10 ---- \n ");
		
}
        }

      return 0;
}							
