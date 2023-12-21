#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*q;

void create()
{
    int data;
    printf("\nEnger data: ");
    scanf("%d",&data);
    if(q==NULL)
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        q=temp;
    }
    
}

void append()
{
    int data;
    printf("\nEnger data: ");
    scanf("%d",&data);
    struct node *temp,*r=q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(r->link!=NULL)
        r=r->link;
    r->link=temp;
}
void addatbeg()
{
    int data;
    printf("\nEnger data: ");
    scanf("%d",&data);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=q;
    q=temp;
}

void addafter()
{
    struct node *r=q;
    int data,pos;
    printf("\nEnger data: ");
    scanf("%d",&data);
    printf("\nEnger pos: ");
    scanf("%d",&pos);
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    for (int i = 1; i < pos; i++)
    {
        if(r==NULL)
            printf("\nPosition not found");
        r=r->link;
    }
    temp->link=r->link;
    r->link=temp;
}
void delete()
{
    struct node *temp=q,*old;
    int data;
    printf("\nEnger data: ");
    scanf("%d",&data);
    while(temp!=NULL)
    {
        if(temp->data=data)
        {
            if(temp=q)
            { q=q->link;}
            else
             {   old->link=temp->link;}
            free(temp);
            return;
        }
        else
        {
            old=temp;
            temp=temp->link;
        }
    }
    printf("\nElement not found");
}

void display()
{
    struct node *temp=q;
    while(temp->link!=NULL)
    {    printf("%d-->",temp->data);
    temp=temp->link;}
    printf("%d",temp->data);
}
int main()
{
    create();
    display();
    append();
        display();
    addatbeg();
        display();
    addafter();
        display();
    delete();    
        display();
    return 0;
}