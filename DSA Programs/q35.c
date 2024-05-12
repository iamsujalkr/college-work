#include <stdio.h>  
#include <stdlib.h>  
struct node   
{  
    char info ;  
    struct node* l ;  
    struct node* r ;  
    struct node* nxt ;  
};  
struct node *head=NULL;    

void Preorder(struct node *Head)
{
	if(Head == NULL)
	{
		printf("\nEMPTY TREE!\n");
		return;
	}
	
	printf("%c ",Head -> info);
	
	if(Head -> l != NULL)
		Preorder(Head -> l);
		
	if(Head -> r != NULL)
		Preorder(Head -> r);

}

void Postorder(struct node *Head)
{
	if(Head == NULL)
	{
		printf("\nEMPTY TREE!\n");
		return;
	}

	if(Head -> l != NULL)
		Postorder(Head -> l);
		
	if(Head -> r != NULL)
		Postorder(Head -> r);
		
	printf("%c ",Head -> info);
	
}

struct node* newnode(char data)  
{  
    struct node* node = (struct node*) malloc ( sizeof ( struct node ) ) ;  
    node->info = data ;  
    node->l = NULL ;  
    node->r = NULL ;  
    node->nxt = NULL ;  
    return ( node ) ;  
}  
void Inorder(struct node* node)  
{  
    if ( node == NULL)  
        return ;  
    else  
    {  
    /* first recur on left child */  
    Inorder ( node->l ) ;  
    /* then print the data of node */  
    printf ( "%c " , node->info ) ;  
    /* now recur on right child */  
    Inorder ( node->r ) ;  
    }  
}  
void push ( struct node* x )  
{  
    if ( head == NULL )  
    head = x ;  
    else  
    {  
        ( x )->nxt = head ;  
        head = x ;  
    } 
}  
struct node* pop()  
{  
    struct node* n = head ;  
    head = head->nxt ;  
    return n ;  
}  
int main()  
{  
    char t[] = { 'X' , 'Y' , 'Z' , '*' , '+' , 'W' , '/' } ;  
    int n = sizeof(t) / sizeof(t[0]) ;  
    int i ;  
    struct node *p , *q , *s ;  
    for ( i = 0 ; i < n ; i++ )   
    {   
        if (t[i] == '+' || t[i] == '-' || t[i] == '*' || t[i] == '/' || t[i] == '^')  
        {  
            s = newnode(t[i]);  
            p = pop();  
            q = pop();  
            s->l = q;  
            s->r = p;  
            push(s);  
        }  
        else {  
            s = newnode(t[i]);   
            push(s) ;  
        }  
    }  
    printf("The Inorder Traversal of Expression Tree: ");  
    Inorder(s);  
    printf("\nThe Preorder Traversal of Expression Tree: \n");  
    Preorder(s);  
    
    printf("\nThe Postorder Traversal of Expression Tree: \n");  
    Postorder(s);
    return 0;  
}
