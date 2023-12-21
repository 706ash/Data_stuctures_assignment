/*Write C functions for:
i. Insertion of a node at a given position in a single linked list.
ii. Insertion of a node in an empty single linked list.
iii. Deletion of the last node of a single linked list.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*q;

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

void position()
{
    struct node *temp,*r;
    int num,loc;
    printf("\nEnter data: ");
    scanf("%d",&num);
    printf("\nEnter loc");
    scanf("%d",&loc);
    r=(struct node *)malloc(sizeof(struct node));
    temp=q;
    r->data=num;
    for(int i=1;i<loc;i++)
    {
        if(temp!=NULL)
        {
            temp=temp->next;
        }
    }

if(temp==NULL)  
{
    printf("\nError\n");
    return;
}
r->next=temp->next;
temp->next=r;
}
void delete()
{
    struct node *temp;
    while(temp->next->next!=NULL)
        temp=temp->next;
    struct node *r=temp->next;
    temp->next=NULL;
    free(r);
}

void display()
{
    struct node *temp=q;
    while(temp->next!=NULL)
       { printf("%d-->",temp->data);
        temp=temp->next;}
    printf("%d",temp->data);
}
int main()
{
    int choice;
    int con;

    do 
    {
        printf("\nEnter 1 to insert a node at a given position\nEnter 2 to Insert a node in an empty single linked list\nEnter 3 to Delete the last node of a single linked list\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            position();
            display();
            break;
        case 2:
            create();
            display();
            break;
        case 3:
            delete();
            display();
            break;
        default:
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to continue(1/0): ");
        scanf("%d",&con);
    }
    while(con==1);
    return 0;
}