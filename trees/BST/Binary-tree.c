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
int min(struct node* root) {


    if (root == NULL) {
        printf("Error: Tree is empty.\n");
        exit(1);
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

struct node *delete(struct node *root, int data) {
    if (root == NULL) {
        return NULL;
    } else if (data < root->data) {
        root->left = delete(root->left, data);
    } else if (data > root->data) {
        root->right = delete(root->right, data);
    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        } else if (root->left == NULL) {
            struct node *temp = root;
            root = root->right;
            free(temp);
        } else if (root->right == NULL) {
            struct node *temp = root;
            root = root->left;
            free(temp);
        } else {
            int min_value = min(root->right);
            root->data = min_value;
            root->right = delete(root->right, min_value);
        }
    }
    return root;
}

int max(struct node* root) {
     if (root == NULL) {
        printf("Error: Tree is empty.\n");
        exit(1);
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}


int main() {
    struct node *root = NULL;
    int choice, data;
    while (1) {
        printf("0.create\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Preorder Traversal\n");
        printf("4. Inorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Find Maximum Value\n");
        printf("7. Find Minimum Value\n");
        printf("8. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 0 : root = create();
                     break;
            case 1:
                printf("Enter the data to insert : ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter the data to delete : ");
                scanf("%d", &data);
                root = delete(root, data);
                break;
            case 3:
                printf("Preorder Traversal : ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Inorder Traversal : ");
                inorder(root);
                printf("\n");
                break;
            case 5:
                printf("Postorder Traversal : ");
                postorder(root);
                printf("\n");
                break;
            case 6:
                printf("Maximum Value : %d\n", max(root));
                break;
            case 7:
                printf("Minimum Value : %d\n", min(root));
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}


