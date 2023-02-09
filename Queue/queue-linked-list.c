#include<stdio.h>
#include<stdlib.h>
	struct node {
		int data;
		struct node *next;
		};
	struct node *rear = NULL;
	 struct node *front = NULL;

 void enqueue() {
	struct node *newnode;
	newnode = ( struct node* )malloc( sizeof( struct node ) );
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	           if( rear == NULL ) {
			    rear = front = newnode;
				}
			else {
			      rear->next = newnode;
			      rear 	 = newnode;
				}
		printf(" data enqueued : %d\n",newnode->data );
		}

void dequeue() {
	if( front == NULL ) { 
		printf("Under Flow\n");
		}
	    else {
		int deleted = front->data;
		struct node *temp = front;
		front             = front->next;
		temp->next        = NULL;
		free( temp );
		 printf(" data dequeued : %d\n",deleted);
		}
	}

void display() {
	 
		if( front == NULL ) {
                printf("Under Flow\n");
                }
		else {
			struct node *temp = front;
			
				while( temp !=NULL ) {
					printf("%d --> ",temp->data);
					temp = temp->next;
					}
					printf("NULL");
					printf("\n");
				}
		}

int main() {
	 while(1) {
                printf("---- Choose the option ----\n");
                printf("----     1.Enqueue     ----\n");
                printf("----     2.Dequeue     ----\n");
                printf("----     3.Display     ----\n");
                printf("----     0.Exit        ----\n");

                int ch;
                scanf("%d",&ch);
                switch( ch ) {
                        case 1 :  enqueue();
                                  break;
                        case 2 :  dequeue();
                                  break;
                        case 3 :  display();
                                  break;
                        case 0 :  exit(0);
                                  break;
                        default : printf("Choose the valid input\n");
                        }
                }
        return 0;
}

