#include <stdio.h>
#include <stdlib.h>

struct Stack
{
	int data;
	struct Stack *next;
};

int ID = 0;
int count = 0;

void Push(struct Stack **TOS);
void Generate_Coupon(struct Stack **TOS);
void Exit();

int main()
{
	struct Stack *TOS = NULL;
	int choice;
	
	do
	{
		printf("\n|-------------------|\n");
		printf("\n|      WELCOME      |\n");
		printf("\n|-------------------|\n");
		printf("\n|1) REQUEST A COUPON|\n");
		printf("\n|-------------------|\n");
		printf("\n|2) EXIT            |\n");
		printf("\n|-------------------|\n");
	
		
		printf("\nENTER YOUR CHOICE :\n");
		scanf("%d",&choice);	
		
		switch(choice)
		{
			case 1:
				Generate_Coupon(&TOS);
				break;
			
			case 2:
				Exit();
				choice = 2;
				break;
				
			default:
				printf("\nPLEASE ENTER A VALID CHOICE!\n");
		}
	
			
		
	}while(choice != 2);
	
	return 0;
}

void Push(struct Stack **TOS)
{
	struct Stack *NewNode;
	
	NewNode = (struct Stack*) malloc(sizeof(struct Stack));
	NewNode -> next = *TOS;
	NewNode -> data = ID;
	
	*TOS = NewNode;
	count++;
}

void Generate_Coupon(struct Stack **TOS)
{
	printf("\nYOU HAVE BEEN ALOTTED A COUPON!\n");
	printf("\nYOUR PATIENT ID IS : %d\n",++ID);
	Push(TOS);
}

void Exit()
{
	printf("\nNUMBER OF VISITS FOR TODAY : %d\n",count);
}
