#include<stdio.h>

#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*q;



void create() //Function to create a singly linked list
{
	struct node *temp;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	if(q==NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=num;
		temp->link=NULL;
		q=temp;
	}
}
void append() //Function to add a node  at the end of a singly linked list
{
	struct node *temp,*r;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	temp=q;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	r=(struct node *)malloc(sizeof(struct node));
	r->data=num;
	r->link=NULL;
	temp->link=r;
}

void addatbeg() //Function to add a node at the beginning
{
	struct node *temp;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=q;
	q=temp;
}

void addafter() //add a node at the given position in a linked list
{
	struct node *temp,*r;
	int num,loc;
	printf("\nEnter data: ");
	scanf("%d",&num);
	printf("Enter position: ");
	scanf("%d",&loc);
	r=(struct node *)malloc(sizeof(struct node));
	temp=q;
	r->data=num;
	for(int i=1;i<loc;i++)
	{
		if(temp!=NULL)
		{
		temp=temp->link;
		}
		
	}
	if(temp==NULL)
		{
			printf("\nError\n");
			return;
		}
	r->link=temp->link;
	temp->link=r;
}

void del() // to delete a node from a singly linked list
{
	struct node *old,*temp;
	int num;
	printf("\nEnter data:");
	scanf("%d",&num);
	temp=q;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			if(temp==q) //only used whn deleting a node
			{
				q=q->link;
			}
			else
			{
				old->link=temp->link;
			}
			free(temp);
			return;
		}
		else
		{
			old=temp;
			temp=temp->link;
		} //while
		
	}
	printf("\n%d element not found",num);
}


void display()
{
	struct node *temp;
	temp=q;
	while(temp->link!=NULL)
	{
		
		printf("%d--->",temp->data);
		temp=temp->link;
	}
	printf("%d",temp->data);
}
int main()
{
	int o;
	int con;
	do
	{
		printf("\nEnter 1 to create a singly linked list\nEnter 2 to add a node  at the end of a singly linked list\nEnter 3 to add a node at the beginning\nEnter 4 to add a node at the given position in a linked list\nEnter 5 to delete a node from a singly linked list\n");
	scanf("%d",&o);
	switch(o)
	{
	case 1:create();
		display();
		break;
	case 2 : append();
		display();
		break;
	case 3 : addatbeg();
		display();
		break;
	case 4 : addafter();
		display();
		break;
	case 5 : del();
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
	


	



