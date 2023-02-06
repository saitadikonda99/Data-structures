#include<stdio.h>
#include<stdlib.h>

	struct node {
		char name[99];
		char gender[99];
		struct node *link;
		};
		struct node *root = NULL;
		
void append() {
	struct node *temp;
	temp = ( struct node* )malloc( sizeof(struct node) );
	printf("enter the data\n");
	printf("enter the name: " );
	scanf("%[^\n]",temp->name);
	printf("enter the gender: ");
	scanf("%[^\n]",temp->gender);
	temp->link = NULL;
		if( root == NULL ) {
			root = temp;
			}
		else {
			struct node *p = root;
			
			while( p->link != NULL ) {
				p = p->link;
				}
			p->link = temp;
		}
	}
void insert_begin() {
		struct node *temp;
		temp = ( struct node* )malloc( sizeof(struct node) );
		 printf("enter the data\n ");
        printf("enter the name: " );
        scanf("%[^\n]",temp->name);
        printf("enter the gender: ");
        scanf("%[^\n]",temp->gender);
        temp->link = NULL;
                if( root == NULL ) {
                        root = temp;
                        }
                else {		
			temp->link = root;
			temp = root;
			}
		}

int main() {
	  
          printf( " --------- LINKED LIST ---------\n " );
   	  while( 1 ) {
		printf("\n");
		printf("\n");
  		printf(" 1.append\n");
		printf(" 2.insert at begin\n" );
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
			 default :printf("heyy enter the valid input ");
		}
	}
	
return 0;
	}

