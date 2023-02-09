#include<stdlib.h>
#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue() {
	if( rear == N-1 ) 
		printf("Over Flow\n ");
	   else {
		if( front == -1 ) 
			front++;
				int k;
				printf("enter the number to insert: ");
				scanf("%d",&k);
				rear++;
				queue[rear] = k;
				printf("element %d is inserted\n" , k);
				
		}
}
void dequeue() {
	if( rear == -1 || front > rear ) 
		printf("Under Flow\n");
		else {
		      printf("element %d is deleted\n",queue[front]);
		      front++;
			}
	}
void display() {
		if( rear == -1 || front > rear )
                	printf("Under Flow\n");
		 	else {
			     for( int k=front; k<=rear; k++ ) 
				printf("%d ",queue[k]);
				}
				printf("\n");
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
			

