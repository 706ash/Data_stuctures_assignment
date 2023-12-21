#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL;

void display()
{
    struct node *temp=front;
    while(temp->link!=NULL)
    {    printf("%d-->",temp->data);
    temp=temp->link;}
    printf("%d",temp->data);
}

void enqueue()
{
    int data;
    printf("\nEnter data: ");
    scanf("%d",&data);
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->link=NULL;
    if(front==NULL)
    {   rear=r; 
        front=rear;
    }
    rear->link=r;
    rear=r;
    
}
void dequeue()
{
    if(front==NULL)
    {
        printf("\nQueue underflow");
        return;
    }
    struct node *r=front;
    while (r->link!=rear)
    {    if(r->link==NULL)
            {
                free(r);
                break;
            }
        r=r->link;
    }
    rear=r;
    r=r->link;
    free(r);
    
    
}

int main()
{
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}