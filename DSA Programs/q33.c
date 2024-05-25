#include <stdio.h>
#include <stdlib.h>

struct bst {
    int info;
    struct bst *left;
    struct bst *right;
}*t1 = NULL;

struct bst* create(int key);
void insert();
struct bst* rinsert(struct bst *root, int key);
struct bst* search(struct bst* root, int key);
struct bst* delete(struct bst *root, int key);
struct bst* inorderpre(struct bst *root);
void inorder(struct bst *node){
    if(node != NULL){
        inorder(node->left);
        printf("%d", node->info);
        inorder(node->right);
    }
}

void main(){
    while(1){
        printf("\nChoose from the following operations :-");
        printf("\n1 -- Insertion");
        printf("\n2 -- Searching");
        printf("\n3 -- Deletion");
        printf("\n4 -- Inorder traversal");
        printf("\n5 -- Exit");
        printf("\nEnter your operation : ");
        int user_opr;
        scanf("%d", &user_opr);
        
        int key;
        struct bst *node;
        switch (user_opr){
        case 1:
            insert(t1);
            if(t1 == NULL){
                printf("1");
            }
            break;
        case 2:
            printf("Enter the key to search : ");
            scanf("%d", &key);
            node = search(t1, key);
            if(node != NULL){
                printf("key exist in tree");
            }
            else{
                printf("key does not exist in tree");
            }
            break;
        case 3:
            printf("Enter the key to delete : ");
            scanf("%d", &key);
            node = delete(t1, key);
            if(node == NULL){
                printf("tree has no nodes");
            }
            break;
        case 4:
            inorder(t1);
            break;
        default:
            if(user_opr != 5){
                printf("Invalid operation");
            }
            exit(1);
            break;
        }
    }
}


struct bst* create(int key){
    struct bst *node = (struct bst*)malloc(sizeof(struct bst));
    node->info = key;
    node->left = NULL;
    node->right = NULL;
    printf("Key inserted succesfully");
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

struct bst* search(struct bst* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->info){
        return root;
    }
    else if(key < root->info){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

struct bst* delete(struct bst *root, int key){
    struct bst *inpre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        printf("Key deleted succesfully from tree");
        return NULL;
    }

    if(key < root->info){
        root->left = delete(root->left, key);
    }
    else if(key > root->info){
        root->right = delete(root->right, key);
    }
    else{
        inpre = inorderpre(root);
        root->info = inpre->info;
        root->left = delete(root->left, inpre->info);
    }
    return root;
}

struct bst* inorderpre(struct bst *root){
    root = root->left;
    while (root->right!=NULL){
        root = root->right;
    }
    return root;
}

struct bst* rinsert(struct bst *root, int key){
    if(root == NULL){
        return create(key);
    }

    if(key == root->info){
        printf("Cannot insert same key in tree");
        return NULL;
    }
    else if(key > root->info){
        root->right = rinsert(root->right, key);
    }
    else{
        root->left = rinsert(root->left, key);
    }
    return root;
}