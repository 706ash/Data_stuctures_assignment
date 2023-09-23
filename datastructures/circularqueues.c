#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*front=NULL,*rear=NULL;

void enqueue(int data)
{
    struct node *r;
    r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->link=front;
    if(rear==NULL)
    {
        front=rear=r;
        return;
    }
    rear->link=r;
    rear=r;
}

void dequeue()
{
    if(rear==NULL)
    {
        printf("\nQueue Underflow\n");
    }
    struct node *temp=front;
    if (front==rear)
    {
        front=NULL;
        rear=NULL;
        free(temp);
        return;
    }
    front=front->link;
    rear->link=front;
    free(temp);
}
void display()
{
    if(rear==NULL)
    {
        printf("\nNULL");
        return;
    }
    struct node *temp=front;
    while (temp!=rear)
    {
        printf("%d--->",temp->data);
        temp=temp->link;
    }
    printf("%d",rear->data);
    

}
int main()
{
    int c,o,data;
    do
    {
        printf("Enter 1 to enqueue\nEnter 2 to dequeue\n");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            enqueue(data);
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
        printf("\nDo you want to comtinue(1/0): ");
        scanf("%d",&c);
    } while (c==1);
    return 0;

}