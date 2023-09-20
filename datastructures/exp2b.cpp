#include <stdio.h>
#define MAX 2
void addq(int *arr,int a,int *pfront,int *prear)
{
	if(*prear==MAX-1)
		{
			printf("\nQueue Overflow");
			return;
		}
	if(*prear==-1)
	{
		*pfront = 0; 
	}
	(*prear)++;
	*(arr+*prear)=a;
	
}
void delq(int *p,int *pfront,int *prear)
{
	if(*pfront==-1)
	{
		printf("\nQueue Underflow");
		return;
	}
	int item=*(p+*pfront);
	if(*pfront==*prear)
	{
		*pfront=*prear=-1;
	}
	else
	{
		(*pfront)++;
	}
	
	printf("\nThe item deleted is %d\n",item);
	

}
void display(int *p,int *pfront,int *prear)
{
	for(int i=*pfront;i<=*prear;i++)
	{
		printf("%d\t",*(p+i));
	}
}

int main()
{
	int arr[MAX],front=-1,rear=-1,num,*p;
	p=&arr[0];	
	int o;
	int con;
	do
	{
		printf("\nEnter 1 to insert an element in queue\nEnter 2 to  delete an element in a queue\n");
	scanf("%d",&o);
	switch(o)
	{
	case 1:
	{
		printf("\nEnter data: ");
		scanf("%d",&num);
		addq(p,num,&front,&rear);
		display(p,&front,&rear);
		break;
	}
	case 2 : delq(p,&front,&rear);
		if(front!=-1)
		{
		display(p,&front,&rear);}
		break;
	
	default: printf("\nWrong choice");
		break;
	}
	printf("\nDo you want to continue(1/0)? ");
	scanf("%d",&con);
	}
	while(con==1);
	return 0;
}