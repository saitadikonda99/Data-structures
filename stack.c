#include<stdio.h>

char stack[100];

void push() {

	stack[++top] = value;
	}

char pop() {
	if( top == -1 ) {
		return -1;
		}
	    else {
		return ( stack[top--] );
		}
}

int priority() {
	
	if( value == "^") {
		return 3;
		}
        if( value == "*" || value == "/") {
                return 2;
                }
	if( value == "+" || value == "-") {
                return 1;
                }
	if( value == "(" ) {
		return 0;	
		}
	return -1;
	
}

int main() {
	
	char op[100];
	char *k , x;
	printf("enter the infix expression: ");
	scanf("%s",op);
	k = op;
		while( *k != 
