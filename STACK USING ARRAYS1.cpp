#include<stdio.h>
void push();
void pop();
void display();
void exit();
int main()
{
	
	int choice,size;
	printf("\nENTER THE SIZE OF THE STACK ");
	scanf("%d",&size);
	printf("\nSTACK OPERATIONS ARE: ");
	printf("1.\nPUSH 2.\npPOP 3.\nDISPLAY 4.\nEXIT");
	do
	{
		printf("\nENTER THE CHOICE OF USER: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					exit();
					break;
				}
		}
		
	}
	while(choice!=4);
	return 0;

	
}
int stack[100];

	int top;
	

void push()
{
	
	
		int x;
					printf("ENTER VALUE OF X ");
					scanf("%d",&x);
		top++;
		stack[top]=x;
	
}
void pop()
{
	
	if(top=-1)
	{
		printf("\nunderflowww");
	}
	else
	{
		printf("\n\t The popped elements is %d",stack[top]);
		top--;
	}
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

