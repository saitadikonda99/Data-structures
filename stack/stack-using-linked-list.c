#include<stdlib.h>
#include<stdio.h>
struct node {
	int data;
	struct node *link;
	};
	 struct node *top = NULL;
void push() {
	struct node *temp;
	temp = (struct node* )malloc( sizeof( struct node ) );
	printf("enter the data: ");
	scanf("%d",&temp->data);
	temp->link = top;
	top = temp;
	}

void pop() {
	struct node *temp = top;
	if( top == NULL ) 
		printf("Under Flow\n");
	     	else {
			printf("Pop element is %d ",temp->data);
			top = top->link;
			temp->link = NULL;
			free( temp );
   			}
	}
	
void traverse() {
	struct node *temp = top;
	if( top == NULL ) 
	  	 printf("Under Flow\n");
		 else {
			while( temp != NULL ) {
				printf("%d ",temp->data );
				temp = temp->link;
			}	
				printf("\n");
	}
}
void peek() {
	struct node *temp = top;
	if( top == NULL )
		printf("Under Flow\n" );
		else 
	printf("peek element is %d",temp->data);
	printf("\n");
}
	
int main() {
	 
	while(1) {
		printf("---- Choose the option ----\n");
		printf("----        1.Push     ----\n");
		printf("----        2.Pop      ----\n");
 		printf("----        3.Traverse ----\n");
		printf("----        4.peek     ----\n");
		printf("----        0.Exit     ----\n");
		
		int ch;
		scanf("%d",&ch);
		switch( ch ) {
			case 1 :  push();
				  break;
			case 2 :  pop();
				  break;
			case 3 :  traverse();
				  break;	
			case 4 :  peek();
				  break;
			case 0 :  exit(0);
				  break;
			default : printf("Choose the valid input\n");
			}	
		}
	return 0;
}
