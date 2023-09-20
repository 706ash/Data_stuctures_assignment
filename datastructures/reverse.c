//program to reverse a singly linked lists
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

void append(struct node **c) //Function to add a node  at the end of a singly linked list
{
	struct node *temp,*r;
	int num;
	printf("\nEnter data: ");
	scanf("%d",&num);
	temp=*c;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	r=(struct node *)malloc(sizeof(struct node));
	r->data=num;
	r->link=NULL;
	temp->link=r;
}
void reverse(struct node **r)
{
    struct node *prev,*middle,*next;
    prev=*r;
    middle=*r;
    next=*r;

    middle=middle->link;
    next=next->link->link;
    
    while(middle!=NULL)
    {
        middle->link=prev;
        if (prev==*r)
        {prev->link=NULL;}
        prev=middle;
        middle=next;
        if(next!=NULL)
        {next=next->link;}
        

    }
    *r=prev;


}

int main()
 {
	struct node *q=NULL;
	printf("\nlist 1\n");
	create(&q);
	display(q);
	
	
	printf("\nlist 1\n");
	display(q);
    append(&q);
   
    printf("\n REVERSE LIST 1\n");
    if(q->link!=NULL)
    {reverse(&q);}
    display(q);
    printf("\n");
	return 0;
 }

	