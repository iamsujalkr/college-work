#include <stdio.h>
#include <stdlib.h>

struct Stack
{
	int *arr;
	int index1;
	int index2;
	int size;
};

void Push1(struct Stack *St);
void Push2(struct Stack *St);
void Pop1(struct Stack *St);
void Pop2(struct Stack *St);
void Display1(struct Stack *St);
void Display2(struct Stack *St);

int main()
{
	struct Stack St;
	int ch;
	
	printf("ENTER SIZE :");
	scanf("%d",&St.size);
	
	St.arr = (int*) malloc(sizeof(int) * St.size);
	
	St.index1 = -1;
	St.index2 = St.size;
	
		do
		{
			printf("\n1) PUSH 1()\n");
			printf("\n2) PUSH 2()\n");
			printf("\n3) POP 1()\n");
			printf("\n4) POP 2()\n");
			printf("\n5) DISPLAY 1()\n");
			printf("\n6) DISPLAY 2()\n");
			printf("\n7) EXIT()\n");
			
			printf("\nENTER YOUR CHOICE:");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case 1:
					Push1(&St);
					
					printf("\nCURRENT STACK VALUES:\n");
					Display1(&St);
					
					break;
					
				case 2:
					Push2(&St);
					printf("\nCURRENT STACK VALUES:\n");
					
					Display2(&St);
					break;
					
				case 3:
					Pop1(&St);
					
					printf("\nCURRENT STACK VALUES:\n");
					Display1(&St);
					
					break;
					
				case 4:
					Pop2(&St);
					printf("\nCURRENT STACK VALUES:\n");
					Display2(&St);
					
					break;	
					
				case 5:
					printf("\nCURRENT STACK VALUES:\n");
					Display1(&St);
					
					break;
					
				case 6:
					printf("\nCURRENT STACK VALUES:\n");
					Display2(&St);	
					
					break;
					
				case 7:
					ch = 7;
					break;
			
				default:
					printf("\nPLEASE ENTER A VALID OPTION!\n");
					break;
				
			}
		}while(ch != 7);
	return 0;
}

void Push1(struct Stack *St)
{
	if((St -> index1) + 1 == St -> index2)
	{
		printf("\nSTACK OVERFLOW!\n");
		return;
	}
	
	(St -> index1)++;
	
	printf("\nENTER ELEMENT TO PUSH :");
	scanf("%d",&St -> arr[ St -> index1]);
	
	printf("\nELEMENT PUSHED!\n");
}


void Push2(struct Stack *St)
{
	if((St -> index2) - 1 == St -> index1)
	{
		printf("\nSTACK OVERFLOW!\n");
		return;
	}
	
	(St -> index2)--;
	
	printf("\nENTER ELEMENT TO PUSH :");
	scanf("%d",&St -> arr[ St -> index2]);
	
	printf("\nELEMENT PUSHED!\n");
}

void Pop1(struct Stack *St)
{
	int elt;
	
	if(St -> index1 == -1)
	{
		printf("\nEMPTY STACK!\n");
		return;
	}
	elt = St -> arr[St -> index1];
	(St -> index1)--;

	printf("\n%d POPED OUT!\n",elt);
}


void Pop2(struct Stack *St)
{
	int elt;
	
	if(St -> index2 == St -> size)
	{
		printf("\nEMPTY STACK!\n");
		return;
	}
	elt = St -> arr[St -> index2];
	(St -> index2)++;

	printf("\n%d POPED OUT!\n",elt);
}

void Display1(struct Stack *St)
{
	if(St -> index1 == -1)
	{
		printf("\nEMPTY STACK!\n");
		return;
	}
	printf("\n\n");
	
	for(int i = St -> index1;i >= 0; i--)
	{
		printf("%d ",St -> arr[i]);
	}
	
	printf("\n\n");
}


void Display2(struct Stack *St)
{
	if(St -> index2 == St -> size)
	{
		printf("\nEMPTY STACK!\n");
		return;
	}
	printf("\n\n");
	
	for(int i = St -> index2;i < St -> size; i++)
	{
		printf("%d ",St -> arr[i]);
	}
	
	printf("\n\n");
}
