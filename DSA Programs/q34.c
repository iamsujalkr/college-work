#include <stdio.h>
#include <stdlib.h>

struct bst {
    int info;
    struct bst *left;
    struct bst *right;
}*t1 = NULL;

struct bst* create(int key);
void insert();
void preOrder(struct bst *root);
void postOrder(struct bst *root);
void inOrder(struct bst *root);
void createtree(){
    int nodes;
    printf("Enter the nodes to insert in tree : ");
    scanf("%d", &nodes);
    for(int i = 0; i < nodes; i++){
        insert();
    }
}

void main(){
    printf("\nChoose from the following operations :-");\
    printf("\n1 -- PreOrder");
    printf("\n2 -- PostOrder");
    printf("\n3 -- InOrder");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr)
    {
    case 1:
        createtree();
        printf("PreOder traversal :  ");
        preOrder(t1);
        break;
    case 2:
        createtree();
        printf("PostOder traversal :  ");
        postOrder(t1);
        break;
    case 3:
        createtree();
        printf("InOder traversal :  ");
        inOrder(t1);
        break;
    default:
        printf("Invalid operation");
        break;
    }

    
}

struct bst* create(int key){
    struct bst *node = (struct bst*)malloc(sizeof(struct bst));
    node->info = key;
    node->left = NULL;
    node->right = NULL;
    printf("Key inserted succesfully\n");
    return node;
}

void insert(){
    int key;
    printf("Enter the key to insert : ");
    scanf("%d", &key);

    if(t1 == NULL){
        t1 = create(key);
    }
    else{
        struct bst *prev = NULL;
        struct bst *root = t1;
        while(root != NULL){
            prev = root;
            if(root->info == key){
                printf("Cannot insert same key in tree");
                break;
            }
            else if(root->info > key){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        struct bst *new = create(key);
        if(key < prev->info){
            prev->left = new;
        }
        else{
            prev->right = new;
        }
    }
}

void preOrder(struct bst *root){
    if(root!=NULL){
        printf("%d ", root->info);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct bst *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->info);
    }
}

void inOrder(struct bst *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->info);
        inOrder(root->right);
    }
}