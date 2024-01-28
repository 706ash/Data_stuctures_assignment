
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

void reverse()
{
    struct node *prev,*middle,*next;
    prev=q;
    middle=q;
    next=q;
    middle=middle->next;
    next=next->next->next;
    while(middle!=NULL)
    {
        middle->next=prev;
        if (prev==q)
        {prev->next=NULL;}
        prev=middle;
        middle=next;
        if(next!=NULL)
        {next=next->next;}
    }
    q=prev;
}
int main()
{
    create();
    display();
    int o,con;
    do{
        printf("\nEnter 1 to append\nEnter 2 to reverse the linked list\nEnter choice: ");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            append();
            display();
            break;
        
        case 2:
            reverse();
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