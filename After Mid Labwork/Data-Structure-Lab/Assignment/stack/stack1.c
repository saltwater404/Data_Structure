#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
	int choice;

	while(1)
	{
		printf("\n*** Stack Operation ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);

			default: printf("\nWrong Choice!!");
		}
	}
}

void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push: ");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;

		printf("\nAfter Push Operation The stack element is \n");
		display();
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;

		printf("\nAfter Pop Operation The stack element is \n");
		display();
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack Elements Are: \n");
		for(i=top;i>=0;--i)
			printf("%d ",stack[i]);
	}
}
