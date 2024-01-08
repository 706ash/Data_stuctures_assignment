#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*q=NULL;

void create()
{
    int data;
    struct node *temp;
    printf("\nEnter data: ");
    scanf("%d",&data);
    if(q==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
    }
    q=temp;
}


void display()
{
    if(q==NULL)
    {
        printf("\nNULL");
        return;
    }
    struct node *temp=q;
    printf("\n");
    while(temp->next!=NULL)
    {
        printf("%d--->",temp->data);
        temp=temp->next;
    }
    printf("%d--->NULL",temp->data);
}

void append()
{
    int data;
    struct node *temp,*r=q;
    printf("\nEnter data: ");
    scanf("%d",&data);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while (r->next!=NULL)
    {
        r=r->next;
    }
    r->next=temp;
}

void addatbeg()
{
    int data;
    struct node *temp;
    printf("\nEnter data: ");
    scanf("%d",&data);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->next=q;
    q=temp;
}

void addatpos()
{
    int data,pos;
    struct node *temp,*r=q;
    printf("\nEnter data: ");
    scanf("%d",&data);
    printf("\nEnter pos: ");
    scanf("%d",&pos);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    for (int i = 1; i < pos; i++)
    {
        if(r!=NULL)
            r=r->next;
    }
    if(r==NULL)
        {
            printf("\nPOS NOT FOUND");
            return;
        }
    temp->next=r->next;
    r->next=temp;    
}

void delete()
{
    int data,pos;
    struct node *temp=q,*old;
    printf("\nEnter data: ");
    scanf("%d",&data);
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            if(temp==q)
                q=q->next;
            else
                old->next=temp->next;
            free(temp);
            return;
        }
        else
        {
            old=temp;
            temp=temp->next;
        }
    }
    printf("\nData not found");
}

int main()
{
    create();
    display();
    int o,con;
    do{
        printf("\nEnter 1 to append\nEnter 2 to add a node at beginning\nEnter 3 to insert at pos\nEnter 4 to delete\nEnter choice: ");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            append();
            display();
            break;
        
        case 2:
            addatbeg();
            display();
            break;
        
        case 3:
            addatpos();
            display();
            break;
        
        case 4:
            delete();
            display();
            break;
        
        default:
        printf("\nWrong choice");
            break;
        }
        printf("\ndo you want to continue(1/0): ");
        scanf("%d",&con);
    }
    while (con==1);    
    return 0;
}