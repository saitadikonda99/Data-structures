#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define max_size 100

int precedence( char operator ) {
	switch( operator )  {
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default :
			return -1;
			}
	}

int isoperator( char ch ) {
	return ( ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' );
		}
	
char *infixtopostfix( char * infix ) {
		int k , s;
		int len = strlen( infix );
		char *postfix = ( char* )malloc( sizeof( char ) * ( len + 2 ) );	
		char stack[max_size];
		int top = -1;
		
	for( k=0, s=0; k<len; k++  ) {
		if( infix[k] == ' ' ) {
			continue;
			}
		if( isalnum( infix[k] ) ) {
			postfix[s++] = infix[k];		
			}
			else if( infix[k] == '(' ) {
				stack[++top] = infix[k];
				}
			    else if( infix[k] == ')' ) {
				while( top > -1 && stack[top] != '(' ) {
  					postfix[s++] = stack[top--];
					}
				    if( top > -1 && stack[top] != '(' ) { 
					  printf("Enter valid input\n");
					}
					else {
					   top--;
					}
				}
				else if( isoperator( infix[k] ) ) {
					while ( top > -1 && precedence( stack[top] ) >= precedence( infix[k] ) )  {
							postfix[s++] = stack[top--];
							}
					stack[++top] = infix[k];
						}
					}
		while( top > -1 ) {
			postfix[s++] = stack[top--];
			}
		postfix[k] ='\0';
		return postfix;
		}
	
int main() {
	
	char infix[max_size];
	printf("Enter the valid expression : ");
	scanf("%[^\n]",infix);
	char *postfix = infixtopostfix( infix );
	printf(" postfix expression : %s\n",postfix );
	free(postfix);
	return 0;
	}
	

