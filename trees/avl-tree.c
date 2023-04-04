#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int max ( int a, int b ) {
    return ( a > b ) ? a : b;
}

int getHeight(struct node *root) {
    if(root == NULL) {
        return 0;
}
        return root->height;
}

struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

int getBalance(struct node *root) {
    if(root == NULL) {
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
}

struct node *rightrotate( struct node *y ) {
	struct node *x  = y->left;
	struct node *T2 = x->right;

	x->right = y;
	y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

struct node *leftrotate( struct node *x ) {
	struct node *y  = x->right;
	struct node *T2 = y->left;

	y->left = x;
	x->right =  T2;

	x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
	y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

 struct node *insert( struct node *root, int data) {
        if( root == NULL ) {
            return createNode(data);
        }

        if( data < root->data ) {
            root->left = insert( root->left, data );
        }
        else if( data > root->data ) {
            root->right = insert( root->right, data );
        }
        else {
            return root;
        }

        int balance = getBalance(root);

        // left left case
        if( balance > 1 && data < root->left->data) {
            return rightrotate( root);
        }
        // right right case
        if( balance < -1  && data > root->right->data ) {
            return leftrotate( root );
            }
        // left right case
        if ( balance > 1 && data > root->left->data ) {
            root->left = leftrotate( root->left );
            return rightrotate( root );
                }
        // right left case
        else if( balance < -1  && data < root->right->data ) {
            root->right = rightrotate( root->right );
            return leftrotate( root );
            }
        return root;
 }

 void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main() {
    struct node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    inorder(root);
    return 0;
}
