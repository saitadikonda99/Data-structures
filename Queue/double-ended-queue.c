#include<stdlib.h>
#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue_rear() {
	if( (rear + 1 ) % N == front ) {
		printf("Over Flow\n ");
		}
		   else {
			int k;
                        printf("enter the number to insert: ");
                        scanf("%d",&k);
				if( front == -1 ) {
					rear = front = 0;
					queue[rear] = k;
					printf("element %d is inserted\n" , k);
					}
			else {
				rear = ( rear + 1 % N );
				queue[rear] = k;
				printf("element %d is inserted\n" , k);
				
		}
	}
}

void enqueue_front() {
	if( (rear + 1 ) % N == front ) {
		printf("Over Flow\n ");
		}
		   else {
			int k;
                        printf("enter the number to insert: ");
                        scanf("%d",&k);
				if( front == -1 ) {
					rear = front = 0;
					queue[rear] = k;
					printf("element %d is inserted\n" , k);
					}
			else {
				front = ( front + 1 % N );
				queue[rear] = k;
				printf("element %d is inserted\n" , k);
				
		}
	}
}
void dequeue_front() {
		if( rear == -1  || front > rear ) {
                	printf("Under Flow\n ");
                	}
		else if( front == rear ) {
			front = rear = -1;
			}
		 else {
		      printf("element %d is deleted\n",queue[front]);
		      front = ( front + 1 ) % N;
			}
	}
	void dequeue_rear() {
		if( rear == -1  || front > rear ) {
                	printf("Under Flow\n ");
                	}
		else if( front == rear ) {
			front = rear = -1;
			}
		 else {
		      printf("element %d is deleted\n",queue[rear]);
		      rear = ( rear + 1 ) % N;
			}
	}

void display() {
		if( rear == -1 || front > rear )
                	printf("Under Flow\n");
		 	else {
				int k = front;
				while( k != rear )  {
					printf("%d ",queue[k]);
					k = ( k + 1 ) % N;
				}
				 printf("%d ",queue[rear]);
				printf("\n");
			}
	}

int main() {
	 while(1) {
                printf("---- Choose the option ----\n");
                printf("----     1.Enqueue_fornt  ----\n");
		printf("----     2.Enqueue_rear   ----\n");
                printf("----     3.Dequeue_front  ----\n");
		printf("----     4.Dequeue_rear  ----\n");
                printf("----     5.Display     ----\n");
                printf("----     0.Exit        ----\n");

                int ch;
                scanf("%d",&ch);
                switch( ch ) {
                        case 1 :  enqueue_front();
                                  break;
			case 2 :  enqueue_rear();
                                  break;
                        case 3 :  dequeue_front();
                                  break;

			case 4 :  dequeue_rear();
                                  break;
                        case 5 :  display();
                                  break;
                        case 0 :  exit(0);
                                  break;
                        default : printf("Choose the valid input\n");
                        }
                }
        return 0;
}
			


