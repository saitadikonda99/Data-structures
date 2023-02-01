#include<stdlib.h>
#include<stdio.h>
#define N 5
int stack[N], top = -1;
	
void pop() {
	if( top == -1 ) 
	  	printf("Under Flow\n ");
	else {
		printf("Poped element is %d\n",stack[top]);
		top--;
		}
	}
void push() {
	if( top == N-1 ) 
		printf("Over Flow\n " );
	   	else {
			int k;
			printf("enter the element to push: ");
			scanf("%d",&k);
			top++;
			stack[top] = k;
			}
		}
void peek() {
	if( top == -1 )
		printf("Under Flow\n");
		else 
		printf("Peek element is %d\n" , stack[top] );
		}
void display() {
	 if( top == -1 )
		printf("Under Flow\n");
		else {
		  	for( int k=top; k>=0; k-- ) 
				printf("%d " ,stack[k]);
				printf("\n");
			}
	}
	
int main() {
	 
	while(1) {
		printf("---- Choose the option ----\n");
		printf("----        1.Push     ----\n");
		printf("----        2.Pop      ----\n");
 		printf("----        3.Peek     ----\n");
		printf("----        4.Display  ----\n");
		printf("----        0.Exit     ----\n");
		
		int ch;
		scanf("%d",&ch);
		switch( ch ) {
			case 1 :  push();
				  break;
			case 2 :  pop();
				  break;
			case 3 :  peek();
				  break;	
			case 4 :  display();
				  break;
			case 0 :  exit(0);
				  break;
			default : printf("Choose the valid input\n");
			}	
		}
	return 0;
}
