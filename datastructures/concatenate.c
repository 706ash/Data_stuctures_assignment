//prog to concatenate two linked lists
#include<stdio.h>
#include<stdlib.h>



struct node
{
	int data;
	struct node *link;
};


void create(struct node **a) //Function to create a singly linked list
{
	struct node *temp;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	if(*a==NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=num;
		temp->link=NULL;
		*a=temp;
	}
}

void display(struct node *b)
{
	struct node *temp;
	temp=b;
	while(temp->link!=NULL)
	{
		
		printf("%d--->",temp->data);
		temp=temp->link;
	}
	printf("%d",temp->data);
}

void append(struct node *c) //Function to add a node  at the end of a singly linked list
{
	struct node *temp,*r;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	temp=c;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	r=(struct node *)malloc(sizeof(struct node));
	r->data=num;
	r->link=NULL;
	temp->link=r;
}

void concatenate(struct node **a,struct node **b)
{
	struct node *temp,*t;
	temp=*a;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=*b;

	

	
}

int main()
{
	struct node *q=NULL,*m=NULL;
	printf("\nlist 1\n");
	create(&q);
	printf("\nlist 2\n");
	create(&m);
	printf("\nlist 1:");
	display(q);
	printf("\nlist 2:");
	display(m);
	printf("\nappend at list 1\n");
	append(q);
	
	printf("\nappend at list 2\n");
	append(m);
	printf("\nlist 1:");
	display(q);
	printf("\nlist 2:");
	display(m);
	printf("\nConcatenate list 1 and 2:");
	concatenate(&q,&m);
	display(q);
	printf("\n");


	return 0;
	
}
	