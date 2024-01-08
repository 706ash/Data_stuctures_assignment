#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL;

void enqueue()
{
    int data;
    printf("\nEnter data: ");
    scanf("%d",&data);
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->link=NULL;
    if(rear==NULL)
    {
        front=r;
        rear=r;
    }
    else
    {
        rear->link=r;
        rear=rear->link;
    }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("\nQueue underflow");
        return;
    }
    struct node *temp;
    if(front==rear)
    {
       temp=front;
       front=rear=NULL;
    }
    else
    {
        temp=front;
        front=front->link;
    }
    free(temp);
}

void display()
{
    if(rear==NULL)
    {
        printf("\nNULL");
        return;
    }
    
    struct node *i = front;

    if(i==rear)
    {
        printf("%d",i->data);
        return;
    }
    for (i; i!=rear; i=i->link)
    {
        printf("%d--->",i->data);
    }
    printf("%d",i->data);
    
}
int main()
{
    int con,o;
    do
    {
        printf("\nEntr 1 to enqueue\nNeter 2 to dequeue\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            display();
            break;    
        
        default:
        printf("\nWrong choice");
            break;
        }
        printf("\nDO you want to continue(1/0): ");
        scanf("%d",&con);
    } while (con==1);
    return 0;
}