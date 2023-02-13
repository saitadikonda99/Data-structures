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
                        last       = newnode;
                        last->next = newnode;
                        }
		    else {
                        newnode->next = last->next;
                        last->next    = newnode;
                        last          = newnode;
                        }
                }

int length_linked() {
	struct node *temp = last;
		int len = 0;
		while( temp->next != last ) {
			len++;
			temp = temp->next;
			}
		return len;
	}
					
void insert_pos() {
		int pos;
		printf("Enter the position: ");	
		scanf("%d",&pos);	
			if( pos > length_linked() || pos < 0 ) {
				printf("enter the valid input\n");
				}
			   else {
				struct node *newnode;
				newnode = ( struct node* )malloc( sizeof( struct node ) );
				struct node *temp = last;
			            int k  = 1;
				    while( k < pos - 1 ) {
						temp = temp->next;
						}
				    newnode->next = temp->next;
				    temp->next    = newnode;
				}
			}
		
void delete_begin() {
		struct node *temp = last->next;
			if( temp == NULL ) {
				printf("List is empty\n");
				}
			   else if( temp->next == last ) { 	
					temp = NULL;	
					free( temp );
					}
				else {
				     last->next = temp->next;
				     free( temp );
		}
	}


void delete_pos() {
	 struct node *current, *nextnode;
                int pos;
                printf("Enter the position: ");
                scanf("%d",&pos);
                        if( pos < 1 || pos > length_linked() ) {
				printf("Enter the valid position\n");
				}
			   else {
				int k = 1;
				     while( k < pos ) {
					current = current->next;
					k++;
					}
				nextnode      = current->next;
				current->next = nextnode->next;
				free( nextnode );
				}			
	}
	
void delete_last() {
		struct node *current, *previous;
		current = last->next;
			if( last == NULL ) {
				printf("List is empty\n");
				}
			  else if( current->next == last->next  ) {
					last = NULL;
					free( last );
					}
				else {
				      while( current->next != last->next ) {
						previous = current;
						current = current->next;
						}
					previous->next = last->next;
					last   	       = previous;
					free( current );
			}
	}

void display() {
		struct node *temp = last;
 	if( last == NULL )
		printf(" Empty\n");
                else {
	   		while ( temp->next != last ) { 
			printf("%d --> ",temp->data);
			temp = temp->next;

		}  			
			printf("\n");
			printf("\n");

			}				

		}	
void sum() {
	  struct node *temp = last;
 	if( last == NULL ) {
		printf(" Empty\n");
		}
                else {
			int sum = 0;
	   		while ( temp->next != last ) { 
				sum += temp->data;
				temp = temp->next;

}  			printf("sum : %d" ,sum );
			printf("\n");
			printf("\n");

	}
}
void product() {
	 struct node *temp = last;
        if( last == NULL ) {
                printf("Empty\n");
 		}
                else {
		        int pro = 0;
                        while ( temp->next != last ) {
                                pro += temp->data;
                                temp = temp->next;

}                       printf("pro : %d" ,pro );
                        printf("\n");
                        printf("\n");

	        }
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
//			case 9  : reverse();
//				  break;
			case 10 : sum();
				  break;
			case 11 : product();
				  break;
		       default : printf(" ----choose from 0  -  10 ---- \n ");
		
}
        }

      return 0;
}							
