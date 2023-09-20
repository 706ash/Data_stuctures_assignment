	//To implement stacks using linked lists
#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node 
{
	int data;
	struct node *link;
}*front=NULL,* rear = NULL;

void enqueue()
{
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	struct node *r;
	r=(struct node *)malloc(sizeof(struct node));
	r->data=num;
	r->link=rear;
	rear=r;
	if(count=0)
	{
		front=r;
		count++;
	}
}
	
void dequeue()
{
	struct node *temp=front,*r=rear;
	if(front=NULL)
	{
		printf("\nQueue Underflow");
		return;
	}
	if(front!=rear)
	{
	while(r->link->link!=NULL)
	{
		r=r->link;
		
	}
	front=r;
	r->link=NULL;
	}
	else{
		front=NULL;
		rear=NULL;
	}
	free(temp);
}
void display()
{
	struct node *temp;
	temp=rear;
	while(temp!=NULL)
	{
		
		printf("%d--->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}
	

int main()
{
	int o;
	int con;
	do
	{
		printf("\nEnter 1 to push a element in a stack\nEnter 2 to pop anelement in a stack\n");
		scanf("%d",&o);
	switch(o)
	{
	case 1:enqueue();
	display();
	break;
	case 2 : dequeue();
			display();
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
	


	