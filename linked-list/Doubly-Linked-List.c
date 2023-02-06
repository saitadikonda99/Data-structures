#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
	};
	  struct node *head, *tail;
	
void append() {
	struct node *newnode;
	newnode = ( struct node* )malloc( sizeof(struct node) );
	printf("enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	newnode->prev = NULL;
        	if( head == NULL ) {
			head = tail = newnode;
			}
		  else {
			tail->next = newnode;
			newnode->prev = tail;
			tail       = newnode; 
			}
		}

void insert_begin() {
		struct node *newnode;
		newnode = ( struct node* )malloc( sizeof(struct node ) );
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
}

int length() {
	struct node *temp = head;
		int len = 0;
		while( temp != NULL ) {
			len++;
			temp = temp->next;
			}
		return len;
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
				struct node *p = head;
				     int k = 0;
				  while( k < pos ) {
					p = p->next;
					k++;
					}
				
		struct node *newnode;
		newnode = ( struct node* )malloc( sizeof( struct node ) );
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
void delete_pos() {
		int pos;
		printf("enter the position: ");
		scanf("%d",&pos);
		if( head == NULL ) {
			printf("List is empty\n");
			}
			if( pos > length() ) {
                                printf("enter the valid position\n");
                                }		  
			else {
			       struct node *temp = head;
			       int k =0;
			while( k < pos ) {
				temp = temp->next;
				k++;
				}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			}
		}		
void delete_end() {
         struct node *temp;
         if( tail == NULL ) {
                printf("List is empty\n");
                }
                else {
                      temp       = tail;
                      tail       = tail->prev;
                      tail->next = NULL;
                      free(temp);
                }
        }

void display() {
	struct node *temp = head;

		if( length() == 0 ) {
			printf("List is empty\n");
			}
	
		while( temp != NULL )  {
			printf("%d",temp->data );
			printf("-->");
			temp = temp->next;
			}
			printf("NULL\n");
			
		}
void product() {
        struct node *temp = head;
                int pro = 1;
                while( temp != NULL ) {
                        pro += temp->data;
                        temp = temp->next;
                        }
                printf("pro of node : %d\n" , pro );
}
void sum() {
        struct node *temp = head;
                int sum = 0;
                while( temp != NULL ) {
                        sum += temp->data;
                        temp = temp->next;
                        }
                printf("sum of node : %d\n" , sum );
}

int main() {
	
	       printf( " --------- Doubly LINKED LIST ---------\n " );
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
                 int ch,len;
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
                        case 6  : delete_end();
                                  break;
                        case 7  : len = length();
                                  printf("length of the liked list :%d\n",len);
                                  break;
                        case 8  : display();
                                  break;
           //             case 9  : reverse();
             //                     break;
                        case 10 : sum();
                                  break;
                        case 11 : product();
                                  break;
                       default : printf(" ----choose from 0  -  10 ---- \n ");

}
        }

      return 0;
}





