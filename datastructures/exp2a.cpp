#include <stdio.h>
#include <conio.h>
#define MAX 2
int stack[MAX],tos=-1;

void push()
{
	int num;
	if (tos==MAX-1)
	{
		printf("\nStack Overflow\n");
		return;
	}
	printf("\nEnter data: ");
	scanf("%d",&num);
	tos++;
	stack[tos]=num;
}
void pop()
{
	int num;
	
	if(tos==-1)
	{
		printf("\nStack Underflow\n");
		return;
	}
	num=stack[tos];
	tos--;
	printf("The number deleted is %d \n",num);
}
void display()
{
	for(int i=0;i<=tos;i++)
	{
		printf("%d\t",stack[i]);
	}
}
int main()
{
int o;
	int con;
	do
	{
		printf("\nEnter 1 to push a element in a stack\nEnter 2 to  pop an element in a stack\n");
	scanf("%d",&o);
	switch(o)
	{
	case 1:push();
		display();
		break;
	case 2 : pop();
		display();
		break;
	
	default: printf("\nWrong choice");
		break;
	}
	printf("\nDo you want to continue(1/0)? ");
	scanf("%d",&con);
	}
	while(con==1);
	getch();
	return 0;
}

