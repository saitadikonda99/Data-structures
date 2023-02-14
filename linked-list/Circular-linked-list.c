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
			newnode->next = newnode;
			last       = newnode;
			}
		  else {
			newnode->next = last->next;
			last->next    = newnode;
			}	
		}

void insert_last() {
	struct node *newnode;
        newnode = ( struct node* )malloc( sizeof(struct node ));
        printf("enter the data\n");
        scanf("%d",&newnode->data );
        newnode->next = NULL;
                if( last == NULL ) {
			newnode->next = newnode;
                        last          = newnode;
			}
		    else {
                        newnode->next = last->next;
                        last->next    = newnode;
                        last          = newnode;
                        }
                }


int length_linked() {
		if( last == NULL )
                	return 0;
                else {
                        int len = 0;
                        struct node *temp = last->next;
                        do {
                        len++;
                        temp = temp->next;
                } while( temp != last->next );
			return len;
                        }

                }				
void insert_pos() {
		int pos;
		printf("Enter the position: ");	
		scanf("%d",&pos);	
			int len = length_linked();
	if( pos > len ) 
		printf( " enter the valid position\n");
			   else {
				struct node *newnode;
				newnode = ( struct node* )malloc( sizeof( struct node ) );
				printf("enter the data: ");
				scanf("%d",&newnode->data);
				struct node *temp = last;
			            int k  = 1;
				    while( k < pos ) {
						temp = temp->next;
						k++;
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
		current = last->next;
                int pos;
                printf("Enter the position: ");
                scanf("%d",&pos);
		int len = length_linked();
	if( pos > len ) 
		printf( " enter the valid position\n");

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
 	if( last == NULL )
		printf(" Empty\n");
                else {  
			struct node *temp = last->next;
			do {
			printf("%d --> ",temp->data);
			temp = temp->next;
		} while( temp != last->next );

			printf("\n");
			printf("\n");

			}				

		}	
void sum() {
	 if( last == NULL )
                printf(" Empty\n");
                else {
			int sum = 0;
                        struct node *temp = last->next;
                        do {
                        sum += temp->data;
                        temp = temp->next;
                } while( temp != last->next );
			printf("sum : %d\n",sum);
                        printf("\n");
                        printf("\n");

                        }

                }
void product() {
		if( last == NULL )
                printf(" Empty\n");
                else {
                        int pro = 0;
                        struct node *temp = last->next;
                        do {
                        pro += temp->data;
                        temp = temp->next;
                } while( temp != last->next );
                        printf("pro : %d\n",pro);
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
		printf(" 9.sum of all nodes\n");
		printf(" 10.product of all nodes\n");
		printf(" 0.exit\n");
		printf("\n");
		printf("\n");
		 int ch,length;
	         printf("---- enter your choice ---- : \n");
		 scanf("%d",&ch);
 	 switch( ch ) {
			
                        case 0  : exit(0);
   			case 1  : insert_last();
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
			case 9  : sum();
				  break;
			case 10 : product();
				  break;
		       default  : printf(" ----choose from 0  -  10 ---- \n ");
		
}
        }

      return 0;
}							
