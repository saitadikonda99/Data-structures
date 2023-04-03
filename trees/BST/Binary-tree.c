#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *right;
	struct node *left;
	};

struct node *create() {
	struct node *newnode = ( struct node* )malloc( sizeof( struct node ) );
	printf("enter the data for the node ( -1 to exit ) : " );
	scanf("%d",&newnode->data);
		if( newnode->data == -1 ) {
			free( newnode );
			return 0;
			}
	printf("creating the left child for %d : \n", newnode->data);
	newnode->left = create();

 	printf("creating the rigth child for %d : \n", newnode->data);
    newnode->right = create();

	return newnode;
	}

void preorder( struct node *root ) {

	// base condition
	if( root == NULL ) {
		return;
		}
		else {
			printf("%d -> ",root->data);
			preorder(root->left);
	   	        preorder(root->right);
			}
		}

void inorder( struct node *root ) {

        // base condition
        if( root == NULL ) {
                return;
                }
                else {
			inorder(root->left);
                        printf("%d -> ",root->data);
                        inorder(root->right);
                        }
                }

void postorder( struct node *root ) {

        // base condition
        if( root == NULL ) {
                return;
                }
                else {
                        postorder(root->left);
                        postorder(root->right);
                        printf("%d -> ",root->data);
			}
                }

struct node * insert( struct node *root , int data ) {

		// base condition
		if( root == NULL ) {
			// create a new node if the tree is empty
			struct node * newnode = (struct node * )malloc( sizeof(struct node));

			newnode->data = data;
			newnode->left = NULL;
			newnode->right = NULL;
			return newnode;
		}
		 // insert into the left subtree if data is less than root
	 		else if( data < root->data ) {
				root->left = insert( root->left , data );
			}
		// insert into the right subtree if data is greater than root
			else if( data > root->data ) {
				root->right = insert( root->right , data );
			}
		// ignore duplicates
		return root;
}

int max(struct node* root) {
    if (root == NULL) {
        printf("Tree is empty\n");
        return -1;
    } else if (root->right == NULL) {
        // the maximum value is in the rightmost node
        return root->data;
    } else {
        return max(root->right);
    }
}

int min(struct node* root) {
    if (root == NULL) {
        printf("Tree is empty\n");
        return -1;
    } else if (root->left == NULL) {
        // the minimum value is in the leftmost node
        return root->data;
    } else {
        return min(root->left);
    }
}

int main() {
	struct node *root;
	root = create();
	printf("Inorder traversal : ");
	inorder( root );
	printf("\n");
	printf("postorder traversal : ");
	postorder( root );
	printf("\n");
	printf("pretorder traversal : ");
	preorder( root );
	printf("\n");

	return 0;
	}

